let rem = v => v ++ "rem";
let px = v => v ++ "px";
let pct = v => v ++ "%";
let toPx = v => px(string_of_int(v));
let toRem = v => rem(string_of_int(v));

/*
module Size = {
  type t = [ `Pct(float) | `Full | `Fluid | `Auto | `Fixed(int) ];

  module Width = {
    let styles = (size: t) => {
      switch (size) {
        | `Pct(f) => {
          let width = f *. 100. |> Js.Float.toFixed |> pct;
          [%css "width: $width"];
        }
        | `Fluid
        | `Full => {
          let width = "100%";
          [%css "width: $width;"];
        }
        | `Fixed(int) => {
          let width = string_of_int(int) ++ "px";
          [%css "width: $width;"]
        }
        | `Auto => {
          let weight = "auto";
          [%css "width: $weight"];
        }
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
        | `Fluid
        | `Full => {
          let height = "100%";
          [%css "height: $height;"];
        }
        | `Fixed(int) => {
          let height = int |> string_of_int |> px;
          [%css "height: $height;"];
        }
        | `Auto => {
          let height = "auto";
          [%css "height: $height"];
        }
      }
    };
  };
};
 */
