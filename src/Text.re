type size = [ | `XSmall | `Small | `Medium | `Large | `XLarge | `XXLarge];

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

type align = [ | `Left | `Right | `Center | `Justify];

/* type fontFamily = [ | `Sans | `Mono]; */

[@react.component]
let make =
    (
      ~color=Colors.Black.alpha9,
      ~size: size=`Medium,
      ~weight: weight=`Regular,
      ~leading=`Normal,
      ~align=`Left,
      ~inline=false,
      ~uppercase=false,
      ~children,
    ) => {
  /*

   let size = [%css
     {|
       font-size: switch (size) {
       | `XSmall => 14px
       | `Small => 16px
       | `Medium => 22px
       | `Large => 36px
       | `XLarge => 48px
       | `XXLarge => 72px
       }
   |}
   ];
   */

  let weight =
    switch (weight) {
    | `Thin =>
      %css
      "font-weight: 100"
    | `Light =>
      %css
      "font-weight: 200"
    | `Regular =>
      %css
      "font-weight: 300"
    | `Medium =>
      %css
      "font-weight: 400"
    | `Semibold =>
      %css
      "font-weight: 500"
    | `Bold =>
      %css
      "font-weight: 600"
    | `Extrabold =>
      %css
      "font-weight: 700"
    | `Black =>
      %css
      "font-weight: 800"
    };

  let align =
    switch (align) {
    | `Left => "text-left"
    | `Right => "text-right"
    | `Justify => "text-justify"
    | `Center => "text-center"
    };

  let lineHeight =
    switch (leading) {
    | `None => "leading-none"
    | `Tight => "leading-tight"
    | `Snug => "leading-snug"
    | `Normal => "leading-normal"
    | `Relaxed => "leading-relaxed"
    | `Loose => "leading-loose"
    };

  let color = [%css "color: $color"];

  let display = inline ? [%css "display: inline"] : [%css "display: block"];

  let size =
    switch (size) {
    | `XSmall =>
      %css
      "font-size: 14px"
    | `Small =>
      %css
      "font-size: 16px"
    | `Medium =>
      %css
      "font-size: 22px"
    | `Large =>
      %css
      "font-size: 36px"
    | `XLarge =>
      %css
      "font-size: 48px"
    | `XXLarge =>
      %css
      "font-size: 72px"
    };

  let className =
    Cn.make([
      /* [%css {| font-family: "Wonder Unit Sans", "sans-serif" |}], */
      size,
      color,
      weight,
      align,
      lineHeight,
      display,
      "uppercase"->Cn.ifTrue(uppercase),
      /* "block truncate"->Cn.ifTrue(truncate), */
    ]);

  <span className> {React.string(children)} </span>;
};
