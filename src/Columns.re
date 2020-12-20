[@react.component]
let make =
    (~children, ~fullHeight=true, ~gap=0) => {
  let margin = Utils.toPx(gap * 4);
  let className =
    Cn.make([
      [%css "display: flex; flex-direction: row; width: 100%;"],
      fullHeight ? [%css "height: 100%"] : [%css "height: auto"],
      [%css {|
        & > * {
          margin-left: $margin;
        };

        &:first-child {
          margin-left: 0px;
        };
      |}]
    ]);

  <div className> children </div>;
};
