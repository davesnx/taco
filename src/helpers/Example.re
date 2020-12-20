module HR = [%styled.div
  "
  height: 1px;
  width: 100%;
  background-color: rgba(0, 0, 0, 0.5);
  "
];

module Main = [%styled.div
  {|
  display: flex;
  flex-direction: column;
  justify-content: center;
  max-width: 800px;
  width: 100%;
  margin: 0 auto;
|}
];

[@react.component]
let make = (~title, ~description=?, ~children) => {
  <Main>
    <Spacer bottom=3> <Text size=`Large weight=`Semibold> title </Text> </Spacer>
    {switch (description) {
      | Some(desc) => <Spacer bottom=6 top=2> <Text size=`Medium weight=`Medium > desc </Text> </Spacer>
      | None => React.null
    }}
    <Box padding=4 border={`One(Colors.Black.alpha4)} borderRadius=`Rounded> children </Box>
  </Main>;
};
