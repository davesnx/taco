open BsStorybook;

module Inlines = {
  [@react.component]
  let make = () => {
    <Example title="Inline">
      <Box>
      <Inline>
        <Text size=`XSmall>
          "Hello, experiment, I want to try Inline > Box"
        </Text>
        <Spacer left=2 right=2>
          <Box width="24" height="24" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Spacer>
        <Text size=`XSmall>
          "and will try as well, Inline > Spacer > Box, like an icon:"
        </Text>
        <Box width="24" height="24" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        <Text size=`XSmall>
          "If this is on the same line, it should work. Prod ready? Nah"
        </Text>
        </Inline>
      </Box>
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Inline", module_)->(add("Inline", () => <Inlines />)));