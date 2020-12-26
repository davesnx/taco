[@react.component]
let make = (~name=?, ~typing=?, ~description=?, ~children) => {
  <Container>
    {switch (name) {
      | Some(n) => <Spacer bottom=3> <Text size=`Large weight=`Semibold> n </Text> </Spacer>
      | None => React.null
    }}
    {switch (typing) {
      | Some(t) => <Spacer bottom=3 top=2> <Text size=`Medium weight=`Medium > t </Text> </Spacer>
      | None => React.null
    }}
    {switch (description) {
      | Some(desc) => <Spacer bottom=6 top=2> <Text size=`Medium weight=`Medium > desc </Text> </Spacer>
      | None => React.null
    }}
    children
  </Container>;
};
