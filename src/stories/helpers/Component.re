[@react.component]
let make = (~title, ~description=?, ~children) => {
  <Container>
    <Spacer bottom=3> <Text size=`XXLarge weight=`Bold> title </Text> </Spacer>
    {switch (description) {
      | Some(desc) => <Spacer bottom=6 top=2> <Text size=`Medium weight=`Medium > desc </Text> </Spacer>
      | None => React.null
    }}
    <Box border={`One(Colors.Black.alpha2)} padding=10> children </Box>
  </Container>;
};
