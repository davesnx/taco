module Spread = {
  [@react.component]
  let make = (~children, ~props) =>
    ReasonReact.cloneElement(children, ~props, [||]);
};

[@react.component]
let make = (~children, ~name) =>
  <Spread props={"data-taco-component": name}> children </Spread>;