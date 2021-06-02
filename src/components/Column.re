[@genType "Column"]
[@react.component]
let make = (~width=`Fluid, ~children=?) => {
  let gap = React.useContext(Columns.gap);
  let className = Cn.make([
    [%cx "height: 100%"],
    switch (width) {
      | `Pct(f) => {
        let pct = f *. 100. |> Js.Float.toFixed |> Unit.pct;
        [%cx {|
          min-width: 0;
          flex-grow: 0;
          flex-shrink: 1;
        |}] ++ " " ++ Emotion.css([
          Emotion.unsafe("flex-basis", "calc(" ++ pct ++ " - " ++ Unit.toPx(gap / 2) ++ ")")
        ]);
      }
      | `Fluid => [%cx "width: 100%; flex-grow: 1; flex-shrink: 0; flex-basis: 0%; "]
      | `Fixed(int) => {
        let width = string_of_int(int) ++ "px";
        [%cx "width: $width;"]
      }
      | `Auto => [%cx "width: auto; flex-shrink: 0; min-width: 0;"]
    }
  ]);

  <Wrapper name="Column">
    <div className>
      {switch (children) {
      | None => React.null
      | Some(c) => c
      }}
    </div>
  </Wrapper>
};
