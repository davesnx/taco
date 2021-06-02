[@genType]
type align =
  [ `Start
  | `Center
  | `End
  ];

[@genType "Align"]
[@react.component]
let make =
    (
      ~x: align=`Center,
      ~y: align=`Center,
      ~children,
    ) => {
  let className =
    Cn.make([
      [%cx "display: flex; height: 100%; width: 100%;"],
      switch (x) {
      | `Start => [%cx "justify-content: flex-start"]
      | `Center => [%cx "justify-content: center"]
      | `End => [%cx "justify-content: flex-end"]
      },
      switch (y) {
      | `Start => [%cx "align-items: flex-start"]
      | `Center => [%cx "align-items: center"]
      | `End => [%cx "align-items: flex-end"]
      }
    ]);

  <Wrapper name="Align">
    <div className> children </div>
  </Wrapper>
};
