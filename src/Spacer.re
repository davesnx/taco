open Theme;

[@react.component]
let make =
    (
      ~children=?,
      ~top=`Zero,
      ~left=`Zero,
      ~right=`Zero,
      ~bottom=`Zero,
      ~all=`Zero,
    ) => {
  let theme = useTheme();

  let unitize = Spacing.view(theme.spacing);

  let className =
    Cn.make([
      switch (
        unitize(top),
        unitize(left),
        unitize(right),
        unitize(bottom),
        unitize(all),
      ) {
      | (value, _, _, _, _) when value != 0. =>
        %css
        {j| margin-top: $value; |j}
      | (_, value, _, _, _) when value != 0. =>
        %css
        {j| margin-left: $value; |j}
      | (_, _, value, _, _) when value != 0. =>
        %css
        {j| margin-right: $value; |j}
      | (_, _, _, value, _) when value != 0. =>
        %css
        {j| margin-bottom: $value; |j}
      | (_, _, _, _, value) when value != 0. =>
        %css
        {j| margin: $value; |j}
      | _ =>
        %css
        ""
      },
    ]);

  <div className>
    {switch (children) {
     | None => React.null
     | Some(c) => c
     }}
  </div>;
};
