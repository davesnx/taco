open BsStorybook;

module Text = {
  [@react.component]
  let make = () => {
    <Stack gap=10>
    <Component title="Text" description="Text component is the used to render text and paragraphs within an interface. It abstracts you from the details of rendering text">
      <Stack gap=8>
        <Stack gap=1>
          <Text weight=`Bold size=`XXLarge> "Inter" </Text>
          <Text weight=`Regular size=`Medium> "Designed by Rasmus Andersson" </Text>
        </Stack>
      <Usage>
        {|
          <Text weight=`Bold size=`XXLarge> "Inter" </Text>
          <Text weight=`Regular size=`Medium> "Designed by Rasmus Andersson" </Text>
        |}
      </Usage>
      </Stack>
    </Component>
    <Prop name="size" typing="[ | `XSmall | `Small | `Medium | `Large | `XLarge | `XXLarge | `XXXLarge]">
      <Stack gap=4>
        <Text weight=`Semibold size=`XSmall> "Let's focus on details." </Text>
        <Text weight=`Semibold size=`Small> "Let's focus on details." </Text>
        <Text weight=`Semibold size=`Medium> "Let's focus on details." </Text>
        <Text weight=`Semibold size=`Large> "Let's focus on details." </Text>
        <Text weight=`Semibold size=`XLarge> "Let's focus on details." </Text>
        <Text weight=`Semibold size=`XXLarge> "Let's focus on details." </Text>
        <Text weight=`Semibold size=`XXXLarge> "Let's focus on details." </Text>
      </Stack>
    </Prop>
    <Prop name="weight" typing="[ | `Thin | `Light | `Regular | `Medium | `Semibold | `Bold | `Extrabold | `Black ]">
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
    </Prop>
    </Stack>
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Text", module_)->(add("Text", () => <Text />)));
