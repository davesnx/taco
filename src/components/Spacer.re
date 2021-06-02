let spaceDirectionStyles = (prop, direction, unit) => {
  CssJs.unsafe(prop ++ "-" ++ direction, Theme.unitize(unit))
};

[@genType "Spacer"]
[@react.component]
let make =
    (
      ~children=?,
      ~top=0,
      ~left=0,
      ~right=0,
      ~bottom=0,
      ~all=0,
      ~inner=false,
    ) => {
  let className =
    Cn.make([
      spaceDirectionStyles(inner ? "margin" : "padding", "top", top),
      spaceDirectionStyles(inner ? "margin" : "padding", "bottom", bottom),
      spaceDirectionStyles(inner ? "margin" : "padding", "left", left),
      spaceDirectionStyles(inner ? "margin" : "padding", "right", right),
      CssJs.unsafe(inner ? "margin" : "padding", Theme.unitize(all))
    ]);

  <Wrapper name="Spacer">
    <div className>
      {switch (children) {
      | None => React.null
      | Some(c) => c
      }}
    </div>
  </Wrapper>
};
