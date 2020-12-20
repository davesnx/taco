type width = [ `Pct(float) | `Fluid | `Auto ];

[@react.component]
let make = (~width=`Fluid, ~children=?) => {
  let gap = React.useContext(Columns.gap);
  let className = Cn.make([
    [%css "height: 100%"],
    switch (width) {
      | `Pct(f) => {
        let pct = f *. 100. |> Js.Float.toFixed |> Utils.pct;
        [%css {|
          min-width: 0;
          flex-grow: 0;
          flex-shrink: 1;
        |}] ++ " " ++ Emotion.css([
          Emotion.unsafe("flex-basis", "calc(" ++ pct ++ " - " ++ Utils.toPx(gap / 2) ++ ")")
        ]);
      }
      | `Fluid => [%css "width: 100%; flex-grow: 1; flex-shrink: 0; flex-basis: 0%; "]
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