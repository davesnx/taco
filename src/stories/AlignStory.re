open BsStorybook;

module Grid = [%styled.div
  {|
  display: flex;
  flex-wrap: wrap;
  justify-content: space-around;

  & > * {
    margin-bottom: 16px;
  }
|}
];

module Algins = {
  [@react.component]
  let make = () => {
    <>
    <Example
      title="Align"
      description="Align will center the children element on the X axis and Y axis. It's designed to only align one element.">
      <Grid>
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
      </Grid>
    </Example>
    <Text>
      "<Align x=`Start y=`Start>"
    </Text>
    </>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Algin", module_)->(add("Algin", () => <Algins />)));
