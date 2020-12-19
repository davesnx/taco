module HR = [%styled.div
  "
  height: 1px;
  width: 100%;
  background-color: rgba(0, 0, 0, 0.5);
  "
];

module Body = [%styled.div
  "
  padding: 32px;
  border: 1px solid rgba(0, 0, 0, 0.5);
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
    <Spacer bottom=3> <Text weight=`Semibold> title </Text> </Spacer>
    {switch (description) {
      | Some(desc) => <Spacer bottom=6 top=2> <Text weight=`Medium size=`Small> desc </Text> </Spacer>
      | None => React.null
    }}
    <Body> children </Body>
  </Main>;
};
