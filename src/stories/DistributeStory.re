open BsStorybook;

module Header = {
  [@react.component]
  let make = (~title) => {
    <Spacer bottom=2>
      <Align>
        <Text>title</Text>
      </Align>
    </Spacer>
  };
};

module Stacks = {
  [@react.component]
  let make = () => {
    <Stack gap=3>
      <Component
        title="Stack"
        description="Stack distribute a list of elements on the Y axis, one on top of the other. Adds consistent spacing between and align them horizontally or vertically. It's an abstraction over flexbox, providing a set of features">
        <Stack align=`Center distribute=`Center gap=2>
          <Box background=Colors.Pink.dirty height="30" width="100" />
          <Box background=Colors.Pink.dirty height="30" width="100" />
          <Box background=Colors.Pink.dirty height="30" width="100" />
          <Box background=Colors.Pink.dirty height="30" width="100" />
          <Box background=Colors.Pink.dirty height="30" width="100" />
        </Stack>
        <Spacer bottom=10 />
        <Usage>
          {|
    <Stack align=`Center distribute=`Between gap=2>
      <Box background=Colors.Pink.dirty height="30" width="300" />
      <Box background=Colors.Pink.dirty height="30" width="300" />
      <Box background=Colors.Pink.dirty height="30" width="300" />
      <Box background=Colors.Pink.dirty height="30" width="300" />
      <Box background=Colors.Pink.dirty height="30" width="300" />
    </Stack>
          |}
        </Usage>
      </Component>
      <Spacer bottom=4 />
      <Prop name="distribute" typing="[ `Around | `Between | `Evenly | `Start | `Center | `End ]">
        <Spacer top=4 />
        <Row align=`Center distribute=`Around gap=10>
          <Box>
            <Header title="Around" />
            <Box
              background=Colors.pink
              border={`One(Colors.Pink.dirty)}
              height="100"
              width="80">
              <Stack align=`Center distribute=`Around gap=2>
                <Box background=Colors.Pink.dirty height="10" width="30" />
                <Box background=Colors.Pink.dirty height="10" width="30" />
                <Box background=Colors.Pink.dirty height="10" width="30" />
              </Stack>
            </Box>
          </Box>
          <Box>
            <Header title="Between" />
            <Box
              background=Colors.pink
              border={`One(Colors.Pink.dirty)}
              height="100"
              width="80">
              <Stack align=`Center distribute=`Between gap=2>
                <Box background=Colors.Pink.dirty height="10" width="30" />
                <Box background=Colors.Pink.dirty height="10" width="30" />
                <Box background=Colors.Pink.dirty height="10" width="30" />
              </Stack>
            </Box>
          </Box>
          <Box>
            <Header title="Evenly" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Evenly gap=2>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
            <Header title="Start" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Start gap=2>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
            <Header title="Center" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
            <Header title="End" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`End gap=2>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
        </Row>
      </Prop>
      <Spacer bottom=6 />
      <Prop name="align" typing="[ `Start | `End | `Center ]">
        <Row distribute=`Center gap=15>
          <Box>
          <Header title="Start" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Start distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
          <Header title="Center" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
          <Header title="End" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`End distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
        </Row>
      </Prop>
      <Spacer bottom=4 />
      <Prop name="gap" typing="int">
        <Spacer top=4 />
        <Row align=`Center distribute=`Around gap=5>
          <Box>
            <Header title="1" />
            <Box
              background=Colors.pink
              border={`One(Colors.Pink.dirty)}
              height="100"
              width="80">
              <Stack align=`Center distribute=`Center gap=1>
                <Box background=Colors.Pink.dirty height="10" width="30" />
                <Box background=Colors.Pink.dirty height="10" width="30" />
                <Box background=Colors.Pink.dirty height="10" width="30" />
              </Stack>
            </Box>
          </Box>
          <Box>
            <Header title="2" />
            <Box
              background=Colors.pink
              border={`One(Colors.Pink.dirty)}
              height="100"
              width="80">
              <Stack align=`Center distribute=`Center gap=2>
                <Box background=Colors.Pink.dirty height="10" width="30" />
                <Box background=Colors.Pink.dirty height="10" width="30" />
                <Box background=Colors.Pink.dirty height="10" width="30" />
              </Stack>
            </Box>
          </Box>
          <Box>
            <Header title="3" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Center gap=3>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
            <Header title="4" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Center gap=4>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
            <Header title="5" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Center gap=5>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
            <Header title="6" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Center gap=6>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
            <Header title="7" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Center gap=7>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
          <Box>
            <Header title="8" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="100"
            width="80">
            <Stack align=`Center distribute=`Center gap=8>
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
              <Box background=Colors.Pink.dirty height="10" width="30" />
            </Stack>
          </Box>
          </Box>
        </Row>
      </Prop>
    </Stack>;
  };
};

module Rows = {
  [@react.component]
  let make = () => {
    <Stack gap=3>
      <Component
        title="Row"
        description="Row distribute a list of elements on the X axis, one on the right of the other. Adds consistent spacing between and align them horizontally or vertically. It's an abstraction over flexbox, providing a set of features">
        <Row align=`Center distribute=`Center gap=2>
          <Box background=Colors.Pink.dirty height="100" width="30" />
          <Box background=Colors.Pink.dirty height="100" width="30" />
          <Box background=Colors.Pink.dirty height="100" width="30" />
          <Box background=Colors.Pink.dirty height="100" width="30" />
          <Box background=Colors.Pink.dirty height="100" width="30" />
        </Row>
        <Spacer bottom=10 />
        <Usage>
          {|
    <Row align=`Center distribute=`Between gap=2>
      <Box background=Colors.Pink.dirty height="30" width="300" />
      <Box background=Colors.Pink.dirty height="30" width="300" />
      <Box background=Colors.Pink.dirty height="30" width="300" />
      <Box background=Colors.Pink.dirty height="30" width="300" />
      <Box background=Colors.Pink.dirty height="30" width="300" />
    </Row>
          |}
        </Usage>
      </Component>
      <Spacer bottom=4 />
      <Prop name="distribute" typing="[ `Around | `Between | `Evenly | `Start | `Center | `End ]">
        <Spacer top=4 />
        <Row align=`Center distribute=`Around gap=10>
          <Box>
            <Header title="Around" />
            <Box
              background=Colors.pink
              border={`One(Colors.Pink.dirty)}
              height="80"
              width="100">
              <Row align=`Center distribute=`Around gap=2>
                <Box background=Colors.Pink.dirty height="30" width="10" />
                <Box background=Colors.Pink.dirty height="30" width="10" />
                <Box background=Colors.Pink.dirty height="30" width="10" />
              </Row>
            </Box>
          </Box>
          <Box>
            <Header title="Between" />
            <Box
              background=Colors.pink
              border={`One(Colors.Pink.dirty)}
              height="80"
              width="100">
              <Row align=`Center distribute=`Between gap=2>
                <Box background=Colors.Pink.dirty height="30" width="10" />
                <Box background=Colors.Pink.dirty height="30" width="10" />
                <Box background=Colors.Pink.dirty height="30" width="10" />
              </Row>
            </Box>
          </Box>
          <Box>
            <Header title="Evenly" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
              width="100">
            <Row align=`Center distribute=`Evenly gap=2>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
          <Box>
            <Header title="Start" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
              width="100">
            <Row align=`Center distribute=`Start gap=2>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
          <Box>
            <Header title="Center" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
              width="100">
            <Row align=`Center distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
          <Box>
            <Header title="End" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
              width="100">
            <Row align=`Center distribute=`End gap=2>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
        </Row>
      </Prop>
      <Spacer bottom=6 />
      <Prop name="align" typing="[ `Start | `End | `Center ]">
        <Row distribute=`Center gap=15>
          <Box>
          <Header title="Start" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
            width="100">
            <Row align=`Start distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
          <Box>
          <Header title="Center" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
            width="100">
            <Row align=`Center distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
          <Box>
          <Header title="End" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
            width="100">
            <Row align=`End distribute=`Center gap=2>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
        </Row>
      </Prop>
      <Spacer bottom=4 />
      <Prop name="gap" typing="int">
        <Spacer top=4 />
        <Row align=`Center distribute=`Around gap=5>
          <Box>
            <Header title="1" />
            <Box
              background=Colors.pink
              border={`One(Colors.Pink.dirty)}
              height="80"
              width="100">
              <Row align=`Center distribute=`Center gap=1>
                <Box background=Colors.Pink.dirty height="30" width="10" />
                <Box background=Colors.Pink.dirty height="30" width="10" />
                <Box background=Colors.Pink.dirty height="30" width="10" />
              </Row>
            </Box>
          </Box>
          <Box>
            <Header title="2" />
            <Box
              background=Colors.pink
              border={`One(Colors.Pink.dirty)}
              height="80"
              width="100">
              <Row align=`Center distribute=`Center gap=2>
                <Box background=Colors.Pink.dirty height="30" width="10" />
                <Box background=Colors.Pink.dirty height="30" width="10" />
                <Box background=Colors.Pink.dirty height="30" width="10" />
              </Row>
            </Box>
          </Box>
          <Box>
            <Header title="3" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
            width="100">
            <Row align=`Center distribute=`Center gap=3>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
          <Box>
            <Header title="4" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
            width="100">
            <Row align=`Center distribute=`Center gap=4>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
          <Box>
            <Header title="5" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
            width="100">
            <Row align=`Center distribute=`Center gap=5>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
          <Box>
            <Header title="6" />
          <Box
            background=Colors.pink
            border={`One(Colors.Pink.dirty)}
            height="80"
            width="100">
            <Row align=`Center distribute=`Center gap=6>
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
              <Box background=Colors.Pink.dirty height="30" width="10" />
            </Row>
          </Box>
          </Box>
        </Row>
      </Prop>
    </Stack>;
  };
};

let module_ = [%bs.raw "module"];

Story.(
  storiesOf("Distribute", module_)
  ->(add("Stack", () => <Stacks />))
  ->(add("Row", () => <Rows />))
);
