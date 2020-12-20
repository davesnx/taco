type width = [ `Pct(float) | `Fluid | `Auto ];

[@react.component]
let make = (~width=`Auto, ~children=?) => {
  let className = Cn.make([
    [%css "height: 100%"],
    switch (width) {
      | `Pct(_f) => [%css "width: 100%; "]
      | `Fluid => [%css "width: 100%; "]
      | `Auto => [%css "width: 100%; "]
    }
  ]);

  <div className>
    {switch (children) {
    | None => React.null
    | Some(c) => c
    }}
  </div>
};