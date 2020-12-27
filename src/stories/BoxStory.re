open BsStorybook;

module Boxes = {
  [@react.component]
  let make = () => {
    <Stack gap=10>
      <Component title="Box" description="Box is the basic element of taco, it's an abstraction over div with only capabilities about it's surroundings. It's used as a container, setting width/height, borders, background and padding. It doesn't care how the childrens are positioned.">
          <Spacer top=5 bottom=10>
            <Align x=`Center y=`Center>
              <Box
                width=`Fixed(160)
                height=`Fixed(80)
                border={`Two(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Align>
          </Spacer>
          <Usage>
            {|
              <Box
                width=`Fixed(160)
                height=`Fixed(80)
                border={`Two(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            |}
          </Usage>
        </Component>
        <Prop name="border" typing="[`Zero | `One(Color) | `Two(Color) ]" derivatives=[| "borderTop", "borderBottom", "borderLeft", "borderRight" |]>
          <Columns gap=5>
            <Column>
              <Box
                width=`Full
                height=`Fixed(80)
                borderTop={`Two(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Column>
            <Column>
              <Box
                width=`Full
                height=`Fixed(80)
                borderLeft={`Two(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Column>
            <Column>
              <Box
                width=`Full
                height=`Fixed(80)
                borderBottom={`Two(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Column>
            <Column>
              <Box
                width=`Full
                height=`Fixed(80)
                borderRight={`Two(Colors.Black.alpha2)}
                borderRadius=`Zero
                background=Colors.pink
              />
            </Column>
          </Columns>
        <Spacer bottom=4 />
        <Columns gap=5>
          <Column>
            <Box
              width=`Full
              height=`Fixed(80)
              borderTop={`Two(Colors.Black.alpha2)}
              borderBottom={`Two(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Column>
          <Column>
            <Box
              width=`Full
              height=`Fixed(80)
              borderLeft={`Two(Colors.Black.alpha2)}
              borderRight={`Two(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Column>
          <Column>
            <Box
              width=`Full
              height=`Fixed(80)
              borderLeft={`Two(Colors.Black.alpha2)}
              borderBottom={`Two(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Column>
          <Column>
            <Box
              width=`Full
              height=`Fixed(80)
              borderRight={`Two(Colors.Black.alpha2)}
              borderTop={`Two(Colors.Black.alpha2)}
              borderRadius=`Zero
              background=Colors.pink
            />
          </Column>
        </Columns>
        </Prop>
        <Prop name="borderRadius" typing="[ `Zero | `Rounded | `Full ]">
          <Row gap=5>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.dirty
              borderRadius=`Zero
            >
            </Box>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.dirty
              borderRadius=`Rounded
            >
            </Box>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.dirty
              borderRadius=`Full
            >
            </Box>
          </Row>
        </Prop>
        <Prop name="shadow" typing="[`Zero | `Small | `Medium | `Large ]">
          <Row gap=5>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
              shadow=`Small
            >
            </Box>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
              shadow=`Medium
            >
            </Box>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
              shadow=`Large
            >
            </Box>
          </Row>
        </Prop>
        <Prop name="background" typing="Colors">
          <Row gap=5>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
            >
            </Box>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.pink
            >
            </Box>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.dirty
            >
            </Box>
          </Row>
        </Prop>
        <Prop name="backgroundHover" typing="Colors">
          <Row gap=5>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
              backgroundHover=Colors.pink
            >
            </Box>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.pink
              backgroundHover=Colors.Pink.dirty
            >
            </Box>
            <Box
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.dirty
              backgroundHover=Colors.Pink.dark
            >
            </Box>
          </Row>
        </Prop>
        <Prop name="padding" derivatives=[|"paddingTop", "paddingLeft", "paddingRight", "paddingBottom" |] typing="int">
          <Row gap=5>
            <Box
              padding=2
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
            >
              <Box width=`Full height=`Full background=Colors.Pink.dirty></Box>
            </Box>
            <Box
              padding=4
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
            >
              <Box width=`Full height=`Full background=Colors.Pink.dirty></Box>
            </Box>
            <Box
              padding=6
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
            >
              <Box width=`Full height=`Full background=Colors.Pink.dirty></Box>
            </Box>
          </Row>
        </Prop>
        <Prop name="width" typing="[ `Pct(float) | `Full | `Fixed(int) | `Auto ]">
          <Row gap=5>
            <Box
              padding=2
              width=`Fixed(240)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
            >
              <Align>
                <Text>"Fixed(240)"</Text>
              </Align>
            </Box>
            <Box
              padding=4
              width=`Fixed(100)
              height=`Fixed(80)
              background=Colors.Pink.alpha8
            >
              <Align>
                <Text>"Fixed(100)"</Text>
              </Align>
            </Box>
            <Box
              padding=6
              width=`Auto
              height=`Fixed(80)
              background=Colors.Pink.alpha8
            >
              <Align>
                <Text>"Auto"</Text>
              </Align>
            </Box>
          </Row>
        </Prop>
        <Prop name="height" typing="[ `Pct(float) | `Full | `Fixed(int) | `Auto ]">
          <Row gap=5>
            <Box
              padding=2
              width=`Fixed(80)
              height=`Fixed(240)
              background=Colors.Pink.alpha8
            >
              <Align>
                <Text>"Fixed(240)"</Text>
              </Align>
            </Box>
            <Box
              padding=4
              width=`Fixed(80)
              height=`Fixed(100)
              background=Colors.Pink.alpha8
            >
              <Align>
                <Text>"Fixed(100)"</Text>
              </Align>
            </Box>
            <Box
              padding=6
              width=`Fixed(80)
              height=`Auto
              background=Colors.Pink.alpha8
            >
              <Align>
                <Text>"Auto"</Text>
              </Align>
            </Box>
          </Row>
        </Prop>
    </Stack>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Box", module_)->(add("Box", () => <Boxes />)));
