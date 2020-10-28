open BsStorybook;

module Spacers = {
  [@react.component]
  let make = () => {
    <Example title="Spacer">
      <Spacer bottom=`M> <Box width="120" height="40" /> </Spacer>
      <Box width="120" height="120" />
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Spacer", module_)->(add("Spacer", () => <Spacers />)));
