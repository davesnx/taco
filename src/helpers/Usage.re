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

module Code = [%styled.code "color: white;"];

[@react.component]
let make = (~children) => {
  <Main>
    <Box padding=4 background={Colors.Black.alpha9} borderRadius=`Rounded>
      <pre>
        <Code>
          {React.string(children)}
        </Code>
      </pre>
    </Box>
  </Main>
};
