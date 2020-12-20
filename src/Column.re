type width = [ `Pct(float) | `Fluid | `Auto ];

[@react.component]
let make = (~width=`Fluid, ~children=?) => {
  let className = Cn.make([
    [%css "height: 100%"],
    switch (width) {
      | `Pct(f) => {
        let pct = f *. 100. |> Js.Float.toString |> Utils.pct;
        [%css {|
          min-width: 0; flex-grow: 0; flex-shrink: 1; flex-basis: $pct;
        |}];
      }
      | `Fluid => [%css "width: 100%; flex-grow: 1; flex-shrink: 2; flex-basis: 0%; "]
      | `Auto => [%css "width: auto; flex-shrink: 0; min-width: 0;"]
    }
  ]);

  <div className>
    {switch (children) {
    | None => React.null
    | Some(c) => c
    }}
  </div>
};