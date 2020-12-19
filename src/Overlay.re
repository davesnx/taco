let black = Colors.Black.alpha2;

module Overlay = [%styled.div {|
  position: fixed;
  top: 0px;
  left: 0px;
  right: 0px;
  height: 100vh;
  background: $black;
  z-index: 1000;
  user-select: none;
|}];

/* TODO: Add overflow: hidden on the body and other hacks for Safari iOS */
[@react.component]
let make = (~isOpen=false, ~children=?) => {

  <Animate play=isOpen>
    <Overlay>
      {switch (children) {
      | None => React.null
      | Some(c) => c
      }}
    </Overlay>
  </Animate>;
}