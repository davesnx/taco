open BsStorybook;

module Text = {
  [@react.component]
  let make = () => {
    <Example title="Text">
      <Spacer top=`M />
      <Text weight=`Black> "Black" </Text>
      <Spacer top=`M />
      <Text weight=`Extrabold> "Extrabold" </Text>
      <Spacer top=`M />
      <Text weight=`Bold> "Bold" </Text>
      <Spacer top=`M />
      <Text weight=`Semibold> "Semibold" </Text>
      <Spacer top=`M />
      <Text weight=`Medium> "Medium" </Text>
      <Spacer top=`M />
      <Text weight=`Regular> "Regular" </Text>
      <Spacer top=`M />
      <Text weight=`Light> "Light" </Text>
      <Spacer top=`M />
      <Text weight=`Thin> "Thin" </Text>
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Text", module_)->(add("Text", () => <Text />)));
