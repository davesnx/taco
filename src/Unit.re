let rem = v => v ++ "rem";
let px = v => v ++ "px";
let pct = v => v ++ "%";
let toPx = v => px(string_of_int(v));
let toRem = v => rem(string_of_int(v));

module Size = {
  type t = [ `Pct(float) | `Full | `Fluid | `Auto | `Fixed(int) ];

  module Width = {
    let styles = (size: t) => {
      switch (size) {
        | `Pct(f) => {
          let width = f *. 100. |> Js.Float.toFixed |> pct;
          [%css "width: $width"];
        }
        | `Full => [%css "width: 100%;"]
        | `Fluid => [%css "width: 100%;"]
        | `Fixed(int) => {
          let width = string_of_int(int) ++ "px";
          [%css "width: $width;"]
        }
        | `Auto => [%css "width: auto;"]
      }
    };
  };

  module Height = {
    let styles = (size: t) => {
      switch (size) {
        | `Pct(f) => {
          let height = f *. 100. |> Js.Float.toFixed |> pct;
          [%css "height: $height"];
        }
        | `Full => [%css "height: 100%;"]
        | `Fluid => [%css "height: 100%;"]
        | `Fixed(int) => {
          let height = int |> string_of_int |> px;
          [%css "height: $height;"]
        }
        | `Auto => [%css "height: auto;"]
      }
    };
  };
};
