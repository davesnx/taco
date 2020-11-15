open BsStorybook;

module Text = {
  [@react.component]
  let make = () => {
    <Example title="Text">
      <Text weight=`Black> "Black" </Text>
      <Text weight=`Extrabold> "Extrabold" </Text>
      <Text weight=`Bold> "Bold" </Text>
      <Text weight=`Semibold> "Semibold" </Text>
      <Text weight=`Medium> "Medium" </Text>
      <Text weight=`Regular> "Regular" </Text>
      <Text weight=`Light> "Light" </Text>
      <Text weight=`Thin> "Thin" </Text>
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Text", module_)->(add("Text", () => <Text />)));
