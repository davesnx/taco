open BsStorybook;

module Columnes = {
  [@react.component]
  let make = () => {
    <Example title="Columns">
      <Stack gap=4>
        <Columns gap=4>
          <Column width={`Pct(1. /. 2.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/2" </Text>
              </Align>
            </Box>
          </Column>
          <Column width={`Pct(1. /. 2.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/2" </Text>
              </Align>
            </Box>
          </Column>
        </Columns>
        <Columns gap=4>
          <Column width={`Pct(1. /. 3.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/3" </Text>
              </Align>
            </Box>
          </Column>
          <Column width={`Pct(1. /. 3.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/3" </Text>
              </Align>
            </Box>
          </Column>
          <Column width={`Pct(1. /. 3.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/3" </Text>
              </Align>
            </Box>
          </Column>
        </Columns>
        <Columns gap=4>
          <Column width={`Pct(1. /. 4.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/4" </Text>
              </Align>
            </Box>
          </Column>
          <Column width={`Pct(1. /. 4.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/4" </Text>
              </Align>
            </Box>
          </Column>
          <Column width={`Pct(1. /. 4.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/4" </Text>
              </Align>
            </Box>
          </Column>
          <Column width={`Pct(1. /. 4.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/4" </Text>
              </Align>
            </Box>
          </Column>
        </Columns>
        <Columns gap=4>
          <Column width={`Pct(1. /. 3.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "1/3" </Text>
              </Align>
            </Box>
          </Column>
          <Column>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "Fluid" </Text>
              </Align>
            </Box>
          </Column>
        </Columns>
        <Columns gap=4>
          <Column width={`Pct(2. /. 5.)}>
            <Box
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "2/5" </Text>
              </Align>
            </Box>
          </Column>
          <Column width=`Auto>
            <Box
              padding=4
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold>
                  "Auto - based on the content"
                </Text>
              </Align>
            </Box>
          </Column>
          <Column width=`Fluid>
            <Box
              padding=4
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "Fluid" </Text>
              </Align>
            </Box>
          </Column>
          <Column width=`Fluid>
            <Box
              padding=4
              width="100%"
              height="50px"
              border={`One(Colors.Black.alpha2)}
              background=Colors.pink>
              <Align x=`Center y=`Center>
                <Text size=`XSmall weight=`Bold> "Fluid" </Text>
              </Align>
            </Box>
          </Column>
        </Columns>
      </Stack>
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Columns", module_)->(add("Columns", () => <Columnes />)));
