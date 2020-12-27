open BsStorybook;

module Boxes = {
  [@react.component]
  let make = () => {
    <Stack gap=8>
    <Component title="Box" description="Box is the basic element of taco, it's an abstraction over div with only capabilities about it's surroundings. It's used as a container, setting width/height, borders, background and padding. It doesn't care how the childrens are positioned.">
        <Spacer top=5 bottom=10>
          <Align x=`Center y=`Center>
            <Box
              width="160"
              height="80"
              border={`Twoo(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Align>
        </Spacer>
        <Usage>
          {|
            <Box
              width="160"
              height="80"
              border={`Twoo(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          |}
        </Usage>
        </Component>
          <Prop name="border" typing="[`Zero | `One(Color) | `Twoo(Color) ]" derivatives=[| "borderTop", "borderBottom", "borderLeft", "borderRight" |]>
          <Columns gap=5>
            <Column>
              <Box
                width="100%"
                height="80"
                borderTop={`Twoo(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Column>
            <Column>
              <Box
                width="100%"
                height="80"
                borderLeft={`Twoo(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Column>
            <Column>
              <Box
                width="100%"
                height="80"
                borderBottom={`Twoo(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Column>
            <Column>
              <Box
                width="100%"
                height="80"
                borderRight={`Twoo(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Column>
          </Columns>
        <Spacer bottom=4 />
        <Columns gap=5>
          <Column>
            <Box
              width="100%"
              height="80"
              borderTop={`Twoo(Colors.Black.alpha2)}
              borderBottom={`Twoo(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Column>
          <Column>
            <Box
              width="100%"
              height="80"
              borderLeft={`Twoo(Colors.Black.alpha2)}
              borderRight={`Twoo(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Column>
          <Column>
            <Box
              width="100%"
              height="80"
              borderLeft={`Twoo(Colors.Black.alpha2)}
              borderBottom={`Twoo(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Column>
          <Column>
            <Box
              width="100%"
              height="80"
              borderRight={`Twoo(Colors.Black.alpha2)}
              borderTop={`Twoo(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Column>
        </Columns>
        </Prop>
        <Prop name="shadow" typing="[`Zero | `Small | `Medium | `Large ]">
        <Row gap=5>
          <Box
            width="240"
            height="80"
            background=Colors.white
            shadow=`Small
          >
          </Box>
          <Box
            width="240"
            height="80"
            background=Colors.white
            shadow=`Medium
          >
          </Box>
          <Box
            width="240"
            height="80"
            background=Colors.white
            shadow=`Large
          >
          </Box>
        </Row>
      </Prop>
    </Stack>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Box", module_)->(add("Box", () => <Boxes />)));
