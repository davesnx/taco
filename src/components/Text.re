[@genType]
type size = [ | `XSmall | `Small | `Medium | `Large | `XLarge | `XXLarge | `XXXLarge];

[@genType]
type weight = [
  | `Thin
  | `Light
  | `Regular
  | `Medium
  | `Semibold
  | `Bold
  | `Extrabold
  | `Black
];

[@genType]
type leading = [ | `None | `Tight | `Snug | `Normal | `Relaxed | `Loose];

[@genType]
type align = [ | `Left | `Center | `Right | `Justify];

/* type fontFamily = [ | `Sans | `Mono]; */

/* let truncateStyles = [%cx "display: block; overflow: hidden; text-overflow: ellipsis; white-space: nowrap;"]; */

[@genType "Text"]
[@react.component]
let make =
    (
      ~color=Colors.Black.alpha9,
      ~size: size=`Small,
      ~weight: weight=`Regular,
      ~leading as _=`Normal,
      ~align=`Left,
      ~children,
    ) => {

    let className = CssJs.style(. [|
      [%css "color: $color"]
    |]);
      /*  TODO: Define it in Theme
          [%cx {| font-family: "Wonder Unit Sans", "sans-serif" |}], */
      /* ,
      switch (size) {
        | `XSmall => [%cx "font-size: 12px"]
        | `Small => [%cx "font-size: 14px"]
        | `Medium => [%cx "font-size: 16px"]
        | `Large => [%cx "font-size: 22px"]
        | `XLarge => [%cx "font-size: 36px"]
        | `XXLarge => [%cx "font-size: 48px"]
        | `XXXLarge => [%cx "font-size: 72px"]
      },
        switch (weight) {
        | `Thin => [%cx "font-weight: 100"]
        | `Light => [%cx "font-weight: 200"]
        | `Regular => [%cx "font-weight: 300"]
        | `Medium => [%cx "font-weight: 400"]
        | `Semibold => [%cx "font-weight: 500"]
        | `Bold => [%cx "font-weight: 600"]
        | `Extrabold => [%cx "font-weight: 700"]
        | `Black => [%cx "font-weight: 800"]
      },
      switch (align) {
        | `Left => [%cx "text-align: left; "]
        | `Right => [%cx "text-align: right;"]
        | `Justify => [%cx "text-align: justify;"]
        | `Center => [%cx "text-align: center;"]
      }, */
      /* switch (leading) {
        | `None => [%cx "line-height: 1"]
        | `Tight => [%cx "line-height: 1.25"]
        | `Snug => [%cx "line-height: 1.375"]
        | `Normal => [%cx "line-height: 1.5"]
        | `Relaxed => [%cx "line-height: 1.625"]
        | `Loose => [%cx "line-height: 2.0"]
      }, */
      /*  TODO: Support uppercase on styled-ppx
          uppercase ? [%cx "text-transform: uppercase; "] : "", */
      /*  TODO: Support ellipsis on styled-ppx
          truncate ? truncateStyles : "", */

  /* TODO: Add "as" prop and render different kind of texts */
  <span className> {React.string(children)} </span>;
};
