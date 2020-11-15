[@react.component]
let make =
    (
      ~inline=false,
      ~height="auto",
      ~width="auto",
      /* ~background=`Mono700,
         ~backgroundHover=?,
         ~borderRadius=`None,
         ~shadow=?,
         ~border=?,
         ~borderTop=?,
         ~borderBottom=?,
         ~borderLeft=?,
         ~borderRight=?, */
      /* Container can have any ReactEvent, TODO: add all events here... */
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
      [%css "background-color: rgba(0, 0, 0, 0.2)"],
      [%css "border: 1px solid rgba(0, 0, 0, 0.4)"],
    ]);

  <div className ?onClick ?onMouseOver ?onMouseLeave> children </div>;
};
