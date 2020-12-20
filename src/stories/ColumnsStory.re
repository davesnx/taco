open BsStorybook;

module Columnes = {
  [@react.component]
  let make = () => {
    <Example title="Columns">
      <Stack gap=4>
      <Columns gap=4>
        <Column width=`Pct(1 / 2)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
        <Column width=`Pct(1 / 2)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
      </Columns>
      <Columns gap=4>
        <Column width=`Pct(1 / 3)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
        <Column width=`Pct(1 / 3)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
        <Column width=`Pct(1 / 3)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
      </Columns>
      <Columns gap=4>
        <Column width=`Pct(1 / 4)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
        <Column width=`Pct(1 / 4)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
        <Column width=`Pct(1 / 4)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
        <Column width=`Pct(1 / 4)>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
      </Columns>
      <Columns gap=4>
        <Column width=`Fluid>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
        <Column width=`Auto>
          <Box width="100%" height="50px" border={`One(Colors.Black.alpha2)} background={Colors.pink} />
        </Column>
      </Columns>
      </Stack>
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Columns", module_)->(add("Columns", () => <Columnes />)));
