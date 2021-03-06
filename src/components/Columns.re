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

  <ColumnsGapProvider value>
    <DataAttribute name="Columns">
      <div className> children </div>
    </DataAttribute>
  </ColumnsGapProvider>;
};
