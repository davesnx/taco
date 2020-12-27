open BsStorybook;

module Text = {
  [@react.component]
  let make = () => {
    <Stack gap=8>
    <Component title="Text" description="Texts abstracts you from the details of writting content, with strong defaults over regular HTML text.">
      <Stack gap=4>
        <Text size=`Large weight=`Black> "Black" </Text>
        <Text size=`Large weight=`Extrabold> "Extrabold" </Text>
        <Text size=`Large weight=`Bold> "Bold" </Text>
        <Text size=`Large weight=`Semibold> "Semibold" </Text>
        <Text size=`Large weight=`Medium> "Medium" </Text>
        <Text size=`Large weight=`Regular> "Regular" </Text>
        <Text size=`Large weight=`Light> "Light" </Text>
        <Text size=`Large weight=`Thin> "Thin" </Text>
      </Stack>
    </Component>
    <Prop name="size" typing="[ | `XSmall | `Small | `Medium | `Large | `XLarge | `XXLarge | `XXXLarge]" />
    <Prop name="weight" typing="[ | `Thin | `Light | `Regular | `Medium | `Semibold | `Bold | `Extrabold | `Black ]" />
    <Prop name="color" typing="Colors" />
    </Stack>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Text", module_)->(add("Text", () => <Text />)));
