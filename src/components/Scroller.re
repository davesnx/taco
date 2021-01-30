module Section = [%styled.section "flex-shrink: 0"];

module Scrollable = [%styled.div {|
  height: 100%;
  display: flex;
  flex-direction: column;
  overflow: hidden;
|}];

module Content = [%styled.div {|
  overflow: auto;
  flex-grow: 1;
|}];

[@genType "Scroller"]
[@react.component]
let make = (~children, ~top=?, ~bottom=?) => {
  <Scrollable>
    <Section>
      {switch (top) {
        | Some(t) => t
        | None => React.null
      }}
    </Section>
    <Content>
      {children}
    </Content>
    <Section>
      {switch (bottom) {
        | Some(b) => b
        | None => React.null
      }}
    </Section>
  </Scrollable>
}