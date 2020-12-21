open BsStorybook;

module Algins = {
  [@react.component]
  let make = () => {
    <Stack gap=8>
    <Example
      title="Align"
      description="Align will center the children element on the X axis and Y axis. It's designed to only align one element.">
      <Grid>
      <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`Start y=`Start>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
        <Text align=`Center size=`XSmall>
            "x=`Start y=`Start"
          </Text>
        </Stack>
        <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`Center y=`Start>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
          <Text align=`Center size=`XSmall>
            "x=`Center y=`Start"
          </Text>
        </Stack>
              <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`End y=`Start>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
        <Text align=`Center size=`XSmall>
            "x=`Center y=`Start"
          </Text>
        </Stack>
              <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`Start y=`Center>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
        <Text align=`Center size=`XSmall>
            "x=`Center y=`Start"
          </Text>
        </Stack>
              <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`Center y=`Center>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
        <Text align=`Center size=`XSmall>
            "x=`Center y=`Start"
          </Text>
        </Stack>
              <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`End y=`Center>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
        <Text align=`Center size=`XSmall>
            "x=`Center y=`Start"
          </Text>
        </Stack>
              <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`Start y=`End>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
        <Text align=`Center size=`XSmall>
            "x=`Center y=`Start"
          </Text>
        </Stack>
              <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`Center y=`End>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
        <Text align=`Center size=`XSmall>
            "x=`Center y=`Start"
          </Text>
        </Stack>
              <Stack align=`Center distribute=`Center gap=2>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          padding=2
          height="120"
          width="200">
          <Align x=`End y=`End>
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Align>
        </Box>
        <Text align=`Center size=`XSmall>
            "x=`Center y=`Start"
          </Text>
        </Stack>
      </Grid>
    </Example>
    <Usage>
      "<Align x=`Start y=`Start>
  /* one children */
</Align>
      "
    </Usage>
    </Stack>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Algin", module_)->(add("Algin", () => <Algins />)));
