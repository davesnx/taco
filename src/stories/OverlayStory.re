open BsStorybook;

module Overlays = {
  [@react.component]
  let make = () => {
    let (isOpen, setIsOpen) = React.useState(_ => false);

    <Example title="Overlay" description="">
      <button onClick={_event => setIsOpen(_ => true)}>
        <Text size=`XSmall> "Open" </Text>
      </button>
      <Overlay isOpen>
        <Align x=`Center y=`Center>
          <button onClick={_event => setIsOpen(_ => false)}>
            <Text size=`XSmall> "Close" </Text>
          </button>
        </Align>
      </Overlay>
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Overlay", module_)->(add("Overlay", () => <Overlays />)));
