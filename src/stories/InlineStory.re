open BsStorybook;

module Inlines = {
  [@react.component]
  let make = () => {
    <Component title="Inline" description="Inline provides the possibility to transform any element to inline, being able to fit it within text, for example.">
      <Box>
        <Inline>
          <Text size=`XSmall>
            "Hello, experiment, I want to try Inline > Box"
          </Text>
          <Spacer left=2 right=2>
            <Box
              width="24"
              height="24"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink
            />
          </Spacer>
          <Text size=`XSmall>
            "and will try as well, Inline > Spacer > Box, like an icon:"
          </Text>
          <Box
            width="24"
            height="24"
            border={`One(Colors.Black.alpha2)}
            background=Colors.pink
          />
          <Text size=`XSmall>
            "If this is on the same line, it should work."
          </Text>
        </Inline>
      </Box>
      <Spacer bottom=10 />
      <Usage>
        {|
          <Inline>
            <Text size=`XSmall>
              "Hello, experiment, I want to try Inline > Box"
            </Text>
            <Spacer left=2 right=2>
              <Box
                width="24"
                height="24"
                border={`One(Colors.Black.alpha2)}
                background=Colors.pink
              />
            </Spacer>
            <Text size=`XSmall>
              "and will try as well, Inline > Spacer > Box, like an icon:"
            </Text>
            <Box
              width="24"
              height="24"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink
            />
            <Text size=`XSmall>
              "If this is on the same line."
            </Text>
          </Inline>
        |}
      </Usage>
    </Component>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Inline", module_)->(add("Inline", () => <Inlines />)));
