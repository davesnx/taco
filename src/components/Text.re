type size = [ | `XSmall | `Small | `Medium | `Large | `XLarge | `XXLarge | `XXXLarge];

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

type leading = [ | `None | `Tight | `Snug | `Normal | `Relaxed | `Loose];

type align = [ | `Left | `Center | `Right | `Justify];

/* type fontFamily = [ | `Sans | `Mono]; */

/* let truncateStyles = [%css "display: block; overflow: hidden; text-overflow: ellipsis; white-space: nowrap;"]; */

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
  let className =
    Cn.make([
      /*  TODO: Define it in Theme
          [%css {| font-family: "Wonder Unit Sans", "sans-serif" |}], */
      [%css "color: $color"],
      switch (size) {
        | `XSmall => [%css "font-size: 12px"]
        | `Small => [%css "font-size: 14px"]
        | `Medium => [%css "font-size: 16px"]
        | `Large => [%css "font-size: 22px"]
        | `XLarge => [%css "font-size: 36px"]
        | `XXLarge => [%css "font-size: 48px"]
        | `XXXLarge => [%css "font-size: 72px"]
      },
        switch (weight) {
        | `Thin => [%css "font-weight: 100"]
        | `Light => [%css "font-weight: 200"]
        | `Regular => [%css "font-weight: 300"]
        | `Medium => [%css "font-weight: 400"]
        | `Semibold => [%css "font-weight: 500"]
        | `Bold => [%css "font-weight: 600"]
        | `Extrabold => [%css "font-weight: 700"]
        | `Black => [%css "font-weight: 800"]
      },
      switch (align) {
        | `Left => [%css "text-align: left; "]
        | `Right => [%css "text-align: right;"]
        | `Justify => [%css "text-align: justify;"]
        | `Center => [%css "text-align: center;"]
      },
      /* switch (leading) {
        | `None => [%css "line-height: 1"]
        | `Tight => [%css "line-height: 1.25"]
        | `Snug => [%css "line-height: 1.375"]
        | `Normal => [%css "line-height: 1.5"]
        | `Relaxed => [%css "line-height: 1.625"]
        | `Loose => [%css "line-height: 2.0"]
      }, */
      /*  TODO: Support uppercase on styled-ppx
          uppercase ? [%css "text-transform: uppercase; "] : "", */
      /*  TODO: Support ellipsis on styled-ppx
          truncate ? truncateStyles : "", */
    ]);

  /* TODO: Add "as" prop and render different kind of texts */
  <span className> {React.string(children)} </span>;
};
