open BsStorybook;

module Boxes = {
  [@react.component]
  let make = () => {
    <Example title="Box">
      <Box width="240" height="80" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Box", module_)->(add("Box", () => <Boxes />)));
