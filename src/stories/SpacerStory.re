open BsStorybook;

module Spacers = {
  [@react.component]
  let make = () => {
    <Example title="Spacer">
      <Spacer bottom=4> <Box background={Colors.pink} width="120" height="40" /> </Spacer>
      <Box background={Colors.pink} width="120" height="120" />
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Spacer", module_)->(add("Spacer", () => <Spacers />)));
