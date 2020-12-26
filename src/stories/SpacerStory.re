open BsStorybook;

module Spacers = {
  [@react.component]
  let make = () => {
    <Component title="Spacer" description="Spacer provides a unified way to draw space between elements. It could be just by itself (<Spacer top=1 />) or wrapping other elements.">
      <Spacer bottom=4>
        <Box background=Colors.pink width="120" height="40" />
      </Spacer>
      <Box background=Colors.pink width="120" height="120" />
    </Component>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Spacer", module_)->(add("Spacer", () => <Spacers />)));
