module Elevation = {
  /* box-shadow isn't supported in 0.15 :( */
  let button = [%css "border: 1px solid black"];
};

module BorderRadius = {
  let size = (unit) => {
    let radius = unit * 4;
    [%css "border-radius: $radius"]
  }
};

module FontFamily = {
  /* font-family have a bug, it should work :( */
  /* let sans = [%css "font-family: 'Open Sans', sans-serif;"] */
  /* When this happens I workaround it with Emotion.css([]) calls, just for composition, here you can use Emotion.unsafe or make it safe */
  let sans = Emotion.css([
    Emotion.unsafe("font-family", "'Open Sans', sans-serif")
  ]);
};

module Text = {
  let size = (value) => {
    switch (value) {
      | 0 => [%css "font-size: 12px"]
      | 1 => [%css "font-size: 14px"]
      | 2 => [%css "font-size: 16px"]
      | 3 => [%css "font-size: 22px"]
      | 4 => [%css "font-size: 36px"]
      | 5 => [%css "font-size: 48px"]
      | 6 => [%css "font-size: 72px"]
      | _ => [%css "font-size: 16px"]
    }
  };

  let leading = (value) => {
    let lh = value *. 1.2;
    [%css "line-height: $lh"]
  };

  let button = Cn.make([
    FontFamily.sans,
    size(4),
    leading(6.)
  ])
};

let styles = Cn.make([
    [%css "text-align: center;"],
    Elevation.button,
    BorderRadius.size(1),
    Text.button,
  ]
);

module Colors = {
  let primary = "#333";
  let ternary = "#999";
};

module PrimaryButton = {
  [@react.component]
  let make = (~onClick, ~disabled, ~text) => {
    let className = Cn.make([
      styles,
      [%css "display: flex; justify-content: center; align-items: center;"],
      disabled ? [%css "opacity: 0.1"] : [%css "opacity: 1"],
      disabled ? [%css "pointer-events: none"] : [%css "pointer-events: auto"],
      Colors.([%css "background: $primary"]),
      Colors.([%css ":hover { background: $ternary; }"]),
      /* Since Module.value isn't supported on the parser [%css "background: $Colors.primary"], we need to open it */
    ]);

    <button ?onClick className> {React.string(text)} </button>
  }
};