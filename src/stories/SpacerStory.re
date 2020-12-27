open BsStorybook;

module Spacers = {
  [@react.component]
  let make = () => {
    <Stack gap=6>
    <Component title="Spacer" description="Spacer provides a unified way to draw space between elements. Can wrap a component or be a self closing element.">
      <Spacer bottom=4>
        <Box background=Colors.pink width=`Fixed(120) height=`Fixed(40) />
      </Spacer>
      <Box background=Colors.pink width=`Fixed(120) height=`Fixed(120) />
      <Spacer bottom=6 />
      <Usage>
        {|
          <Spacer bottom=4>
            <Box background=Colors.pink width=`Fixed(120) height=`Fixed(40) />
          </Spacer>
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(120) />
        |}
      </Usage>
    </Component>
    <Prop name="top" typing="int" />
    <Prop name="bottom" typing="int" />
    <Prop name="right" typing="int" />
    <Prop name="left" typing="int" />
    <Prop name="all" typing="int" />
    </Stack>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Spacer", module_)->(add("Spacer", () => <Spacers />)));
