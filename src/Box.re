[@react.component]
let make =
    (
      ~inline=false,
      ~height="auto",
      ~width="auto",
      ~background=`Mono700,
      ~backgroundHover=?,
      ~borderRadius=`None,
      ~color=`Mono200,
      ~shadow=?,
      ~border=?,
      ~borderTop=?,
      ~borderBottom=?,
      ~borderLeft=?,
      ~borderRight=?,
      /* Container can have any ReactEvent */
      ~onClick=?,
      ~onMouseOver=?,
      ~onMouseLeave=?,
      ~children=React.null,
    ) => {
  let className =
    Cn.make([
      [%css "position: relative; flex-shrink: 0;"],
      inline ? [%css "display: inline-block; "] : "",
      Belt.Option.isSome(onClick) ? [%css "cursor: pointer;"] : "",
      [%css "width: $width"],
      [%css "height: $height"],
      switch (borderRadius) {
      | `None =>
        %css
        "border-radius: 0"
      | `Default =>
        %css
        "border-radius: 4px"
      | `Full =>
        %css
        "border-radius: 999999px"
      },
    ]);

  <div className ?onClick ?onMouseOver ?onMouseLeave> children </div>;
};
