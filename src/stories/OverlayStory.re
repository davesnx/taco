open BsStorybook;

module Overlays = {
  [@react.component]
  let make = () => {
    let (isOpen, setIsOpen) = React.useState(_ => false);

    <Stack gap=10>
      <Component title="Overlay" description="Overlay ocupies all the space of the screen in the background, it's used as a layer under modals or dialogs in order to give more pressence to those elements and being a little transparent gives a sense of context from where you were before.">
        <button onClick={_event => setIsOpen(_ => true)}>
          <Text size=`XSmall> "Open" </Text>
        </button>
        <Overlay isOpen>
          <Align x=`Center y=`Start>
            <button onClick={_event => setIsOpen(_ => false)}>
              <Text size=`XSmall> "Close" </Text>
            </button>
          </Align>
        </Overlay>
        <Spacer bottom=10 />
        <Usage>
          {|
            let (isOpen, setIsOpen) = React.useState(_ => false);

            <Overlay isOpen>
              <Align x=`Center y=`Start>
                <button onClick={_event => setIsOpen(_ => false)}>
                  <Text size=`XSmall> "Close" </Text>
                </button>
              </Align>
            </Overlay>
          |}
        </Usage>
      </Component>
      <Prop name="isOpen" typing="bool" />
    </Stack>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Overlay", module_)->(add("Overlay", () => <Overlays />)));
