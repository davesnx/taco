let gap = React.createContext(0);

module ColumnsGapProvider = {
  let makeProps = (~value: int, ~children, ()) => {
    "value": value,
    "children": children,
  };
  let make = React.Context.provider(gap);
};

[@genType "Columns"]
[@react.component]
let make =
    (~children, ~fullHeight=true, ~gap=0) => {
  let value = gap * 4;
  let margin = Unit.toPx(value);
  let className =
    Cn.make([
      [%cx "display: flex; flex-direction: row; width: 100%;"],
      fullHeight ? [%cx "height: 100%"] : [%cx "height: auto"],
      [%cx {|
        & > * {
          margin-left: $margin;
        };

        &:first-child {
          margin-left: 0px;
        };
      |}]
    ]);

  <ColumnsGapProvider value>
    <Wrapper name="Columns">
      <div className> children </div>
    </Wrapper>
  </ColumnsGapProvider>;
};
