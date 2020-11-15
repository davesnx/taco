type direction =
  | Horizontal
  | Vertical;

type align =
  | Start
  | End
  | Center;

type distribute =
  | SpaceAround
  | SpaceBetween
  | SpaceEvenly
  | Start
  | Center
  | End;

[@react.component]
let make =
    (
      ~gap as _,
      ~align: align=Start,
      ~distribute=SpaceAround,
      ~direction=Horizontal,
      ~fullHeight=true,
      ~children,
    ) => {
  let className =
    Cn.make([
      [%css "display: flex;"],
      switch (direction) {
      | Horizontal =>
        %css
        "flex-direction: row;"
      | Vertical =>
        %css
        "flex-direction: column;"
      },
      fullHeight ? [%css "height: 100%"] : "",
      switch (align) {
      | Start =>
        %css
        "align-items: flex-start"
      | Center =>
        %css
        "align-items: center"
      | End =>
        %css
        "align-items: flex-end"
      },
      switch (distribute) {
      | SpaceAround =>
        %css
        "justify-content: space-around"
      | SpaceBetween =>
        %css
        "justify-content: space-between"
      | SpaceEvenly =>
        %css
        "justify-content: space-evenly"
      | Start =>
        %css
        "justify-content: flex-start"
      | Center =>
        %css
        "justify-content: center"
      | End =>
        %css
        "justify-content: flex-end"
      },
    ]);

  <div className> children </div>;
};
