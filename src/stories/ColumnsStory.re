open BsStorybook;

module Columnes = {
  [@react.component]
  let make = () => {
    <Stack gap=3>
      <Component title="Columns" description="Columns provide a solid way to formalize the structure of content where some parts are fixed and some parts are fluid. Columns only specifies the space between them and Column only cares about it's width: Can be a percentage of the parent (Pct), ocupy the rest of the space (Fluid) or based on it's content (Auto).">
        <Stack gap=4>
          <Columns gap=4>
            <Column width={`Pct(1. /. 2.)}>
              <Box
                width="100%"
                height="50px"
                border={`One(Colors.Black.alpha2)}
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
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
                background=Colors.pink
                padding=4>
                <Align x=`Center y=`Center>
                  <Text size=`XSmall weight=`Bold> "2/5" </Text>
                </Align>
              </Box>
            </Column>
            <Column width=`Auto>
              <Box
                width="100%"
                height="50px"
                border={`One(Colors.Black.alpha2)}
                background=Colors.pink
                padding=4>
                  <Align x=`Center y=`Center>
                    <Text size=`XSmall weight=`Bold>
                      "Auto - based on the content"
                    </Text>
                  </Align>            </Box>
            </Column>
            <Column width=`Fluid>
              <Box
                width="100%"
                height="50px"
                border={`One(Colors.Black.alpha2)}
                background=Colors.pink
                padding=4>
                  <Align x=`Center y=`Center>
                    <Text size=`XSmall weight=`Bold> "Fluid" </Text>
                  </Align>
              </Box>
            </Column>
            <Column width=`Fluid>
              <Box
                width="100%"
                height="50px"
                border={`One(Colors.Black.alpha2)}
                background=Colors.pink
                padding=4>
                  <Align x=`Center y=`Center>
                    <Text size=`XSmall weight=`Bold> "Fluid" </Text>
                  </Align>
              </Box>
            </Column>
          </Columns>
        </Stack>
      </Component>
      <Usage>
        {|
          <Columns gap=4>
            <Column width={`Pct(2. /. 5.)}><Box /></Column>
            <Column width=`Auto><Box /></Column>
            <Column width=`Fluid><Box /></Column>
            <Column width=`Fluid><Box /></Column>
          </Columns>
        |}
      </Usage>
      <Spacer bottom=4 />
      <Prop name="Columns" typing="gap=int">
        <Columns>
        <Column width=`Auto>
          <Stack gap=5>
            <Box padding=4><Align><Text>"1"</Text></Align></Box>
            <Box padding=4><Align><Text>"2"</Text></Align></Box>
            <Box padding=4><Align><Text>"3"</Text></Align></Box>
            <Box padding=4><Align><Text>"4"</Text></Align></Box>
            <Box padding=4><Align><Text>"5"</Text></Align></Box>
          </Stack>
        </Column>
        <Column>
        <Stack gap=5>
          <Columns gap=1>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
          </Columns>
          <Columns gap=2>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
          </Columns>
          <Columns gap=3>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
          </Columns>
          <Columns gap=4>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
          </Columns>
          <Columns gap=5>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
            <Column>
              <Box width="100%" height="50" background={Colors.Black.alpha2} />
            </Column>
          </Columns>
        </Stack>
        </Column>
        </Columns>
      </Prop>
      <Spacer bottom=4 />
      <Prop name="Column" typing="width=[ `Pct(float) | `Fluid | `Auto ]">
        <Stack gap=5>
          <Columns gap=2>
            <Column width=`Pct(1. /. 3.)>
              <Box width="100%" height="50" background={Colors.Black.alpha2}>
                <Align>
                  <Text>"Pct(1. /. 3.)"</Text>
                </Align>
              </Box>
            </Column>
            <Column width=`Auto>
              <Box padding=2 width="100%" height="50" background={Colors.Black.alpha2}>
                <Align>
                  <Text>"Auto"</Text>
                </Align>
              </Box>
            </Column>
            <Column width=`Fluid>
              <Box width="100%" height="50" background={Colors.Black.alpha2}>
                <Align>
                  <Text>"Fluid"</Text>
                </Align>
              </Box>
            </Column>
            <Column width=`Fluid>
              <Box width="100%" height="50" background={Colors.Black.alpha2}>
                <Align>
                  <Text>"Fluid"</Text>
                </Align>
              </Box>
            </Column>
          </Columns>
        </Stack>
      </Prop>
    </Stack>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Columns", module_)->(add("Columns", () => <Columnes />)));
