module Border = {
  open Emotion;

  type radius = [ `Zero | `Rounded | `Full ];
  type t = [`Zero | `One | `Two ];

  let styles = (border) => {
    switch (border) {
      | Some(b) => switch (b) {
        | `Zero => css([unsafe("border", "none")])
        | `One(color) => css([unsafe("border", "1px solid " ++ color)])
        | `Two(color) => css([unsafe("border", "2px solid " ++ color)])
        }
      | None => ""
    }
  };

  let stylesWithDirection = (direction, border) => {
    switch (border) {
      | Some(b) => switch (b) {
        | `Zero => css([unsafe("border-" ++ direction, "none")])
        | `One(color) => css([unsafe("border-" ++ direction, "1px solid " ++ color)])
        | `Two(color) => css([unsafe("border-" ++ direction, "2px solid " ++ color)])
        }
      | None => ""
    }
  };
};

module Shadow = {
  open Emotion;

  type t = [`Zero | `Small | `Medium | `Large ];

  let styles = (shadow) => {
    switch (shadow) {
      | `Zero => css([])
      | `Small => css([unsafe("box-shadow", "0 4px 10px hsla(0, 0%, 0%, 0.05)")])
      | `Medium => css([unsafe("box-shadow", "0 4px 10px hsla(0, 0%, 0%, 0.1)")])
      | `Large => css([unsafe("box-shadow", "0 6px 24px hsla(0, 0%, 0%, 0.1)")])
    };
  };
};

[@react.component]
let make =
    (
      ~padding=0,
      ~paddingTop=0,
      ~paddingBottom=0,
      ~paddingLeft=0,
      ~paddingRight=0,
      ~height=`Auto,
      ~width=`Auto,
      ~background=Colors.white,
      ~backgroundHover=?,
      ~borderRadius=`Rounded,
      ~border=?,
      ~borderTop=?,
      ~borderBottom=?,
      ~borderLeft=?,
      ~borderRight=?,
      ~shadow=`Zero,
      /* Box can have any ReactEvent, TODO: add all events here... */
      ~onClick=?,
      ~onMouseOver=?,
      ~onMouseLeave=?,
      ~children=React.null,
    ) => {
  let className =
    Cn.make([
      [%css "position: relative; flex-shrink: 0;"],
      Belt.Option.isSome(onClick) ? [%css "cursor: pointer;"] : "",
      Unit.Size.Height.styles(height),
      Unit.Size.Width.styles(width),
      [%css "background: $background"],
      switch (backgroundHover) {
        | Some(background) => [%css ":hover { background: $background; }"]
        | None => ""
      },
      switch (borderRadius) {
        | `Zero => ""
        | `Rounded => [%css "border-radius: 2px"]
        | `Full => [%css "border-radius: 999px"]
      },
      Shadow.styles(shadow),
      Border.styles(border),
      Border.stylesWithDirection("top", borderTop),
      Border.stylesWithDirection("bottom", borderBottom),
      Border.stylesWithDirection("left", borderLeft),
      Border.stylesWithDirection("right", borderRight),
      Spacer.spaceDirectionStyles("padding", "top", paddingTop),
      Spacer.spaceDirectionStyles("padding", "bottom", paddingBottom),
      Spacer.spaceDirectionStyles("padding", "left", paddingLeft),
      Spacer.spaceDirectionStyles("padding", "right", paddingRight),
      Spacer.spaceStyles("padding", padding),
    ]);

  <div className ?onClick ?onMouseOver ?onMouseLeave> children </div>;
};
