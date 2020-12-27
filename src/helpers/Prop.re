[@react.component]
let make = (~name=?, ~typing=?, ~derivatives=?, ~description=?, ~children=?) => {
  <Container>
    <Spacer bottom=4>
      <Row align=`Center distribute=`Start gap=5>
        {switch (name) {
          | Some(n) => <Text size=`Large weight=`Semibold> n </Text>
          | None => React.null
        }}
        {switch (typing) {
          | Some(t) => <Box paddingRight=5 paddingLeft=5 padding=1 background=Colors.Black.alpha2><Text size=`Small weight=`Medium> t </Text></Box>
          | None => React.null
        }}
      </Row>
    </Spacer>
    {switch (derivatives) {
      | Some(der) => der->Array.map(derivative => {
        <Text size=`Medium weight=`Medium> derivative </Text>
      })->React.array
      | None => React.null
    }}
    <Spacer top=4 />
    {switch (description) {
      | Some(desc) => <Spacer bottom=6> <Text size=`Medium weight=`Medium> desc </Text> </Spacer>
      | None => React.null
    }}
    {switch (children) {
      | Some(c) => c
      | None => React.null
    }}
  </Container>;
};
