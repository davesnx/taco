module HR = [%styled.div
  "
  height: 1px;
  width: 100%;
  background-color: rgba(0, 0, 0, 0.5);
  "
];

module Root = [%styled.div
  "
  padding: 32px;
  border: 1px solid rgba(0, 0, 0, 0.5);
  "
];

[@react.component]
let make = (~title, ~children) => {
  <div
    className=[%css
      "
      display: flex;
      flex-direction: column;
      justify-content: center;
      max-width: 800px;
      width: 100%;
      margin: 0 auto;
      "
    ]>
    <Spacer bottom=`M> <Text weight=`Semibold> title </Text> </Spacer>
    <Root> children </Root>
  </div>;
};
