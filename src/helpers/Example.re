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
let make = (~title, ~children) => {
  <Main>
    <Spacer bottom=`M> <Text weight=`Semibold> title </Text> </Spacer>
    <Body> children </Body>
  </Main>;
};
