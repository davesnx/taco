open BsStorybook;

module Stacks = {
  [@react.component]
  let make = () => {
    <Example
      title="Stack"
      description="Stack distribute a list of elements on the Y axis, one on top of the other. Adds consistent spacing between and align them horizontally or vertically. It's an abstraction over flexbox, providing just a set of features">
      <Row align=`Center distribute=`Center gap=10>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          height="200"
          width="120">
          <Stack align=`Center distribute=`Center gap=2>
            <Box background=Colors.Pink.dirty height="30" width="30" />
            <Box background=Colors.Pink.dirty height="30" width="30" />
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Stack>
        </Box>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          height="200"
          width="120">
          <Stack align=`Center distribute=`Around gap=2>
            <Box background=Colors.Pink.dirty height="30" width="30" />
            <Box background=Colors.Pink.dirty height="30" width="30" />
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Stack>
        </Box>
        <Box
          background=Colors.pink
          border={`One(Colors.Pink.dirty)}
          height="200"
          width="120">
          <Stack align=`Center distribute=`Between gap=2>
            <Box background=Colors.Pink.dirty height="30" width="30" />
            <Box background=Colors.Pink.dirty height="30" width="30" />
            <Box background=Colors.Pink.dirty height="30" width="30" />
          </Stack>
        </Box>
      </Row>
    </Example>;
  };
};

module Rows = {
  [@react.component]
  let make = () => {
    <>
      <Example
        title="Row"
        description="Row distribute a list of elements on the X axis, one on the side of the other. Adds consistent spacing between and align them horizontally or vertically. It's an abstraction over flexbox, providing just a set of features.">
        <Stack align=`Center distribute=`Center gap=10>
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="120"
            width="200">
            <Row align=`Center distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="30" width="30" />
              <Box background=Colors.Pink.dirty height="30" width="30" />
              <Box background=Colors.Pink.dirty height="30" width="30" />
            </Row>
          </Box>
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="120"
            width="200">
            <Row align=`Center distribute=`Around gap=2>
              <Box background=Colors.Pink.dirty height="30" width="30" />
              <Box background=Colors.Pink.dirty height="30" width="30" />
              <Box background=Colors.Pink.dirty height="30" width="30" />
            </Row>
          </Box>
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="120"
            width="200">
            <Row align=`Center distribute=`Between gap=2>
              <Box background=Colors.Pink.dirty height="30" width="30" />
              <Box background=Colors.Pink.dirty height="30" width="30" />
              <Box background=Colors.Pink.dirty height="30" width="30" />
            </Row>
          </Box>
        </Stack>
      </Example>
    </>;
  };
};

let module_ = [%bs.raw "module"];

Story.(
  storiesOf("Distribute", module_)
  ->(add("Stack", () => <Stacks />))
  ->(add("Row", () => <Rows />))
);
