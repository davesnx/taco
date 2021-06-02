[@genType]
type align =
  [ `Start
  | `End
  | `Center ];

[@genType]
type distribute =
  [ `Around
  | `Between
  | `Evenly
  | `Start
  | `Center
  | `End ];

let gapStyles = (~unit, ~fit) => {
  let gap = Unit.toPx(unit * 4);

  switch (fit) {
  | true => [%cx {|
      & > * {
        flex: 1 1 0%;
        margin-bottom: $gap;
      };

      &:last-child {
        margin-bottom: 0px;
      };
    |}]
  | false => [%cx {|
      & > * {
        flex: 0 0 auto;
        margin-bottom: $gap;
      };

      &:last-child {
        margin-bottom: 0px;
      };
  |}];
  };
};

[@genType "Stack"]
[@react.component]
let make =
    (
      ~gap=0,
      ~align: align=`Start,
      ~distribute: distribute=`Around,
      ~fullHeight=true,
      ~children,
    ) => {
  let className =
    Cn.make([
      [%cx "display: flex; flex-direction: column;"],
      fullHeight ? [%cx "height: 100%"] : [%cx "height: auto"],
      switch (align) {
      | `Start => [%cx "align-items: flex-start"]
      | `Center => [%cx "align-items: center"]
      | `End => [%cx "align-items: flex-end"]
      },
      switch (distribute) {
      | `Around => [%cx "justify-content: space-around"]
      | `Between => [%cx "justify-content: space-between"]
      | `Evenly => [%cx "justify-content: space-evenly"]
      | `Start => [%cx "justify-content: flex-start"]
      | `Center => [%cx "justify-content: center"]
      | `End => [%cx "justify-content: flex-end"]
      },
      gapStyles(~unit=gap, ~fit=false),
    ]);

  <Wrapper name="Stack">
    <div className> children </div>
  </Wrapper>
};
