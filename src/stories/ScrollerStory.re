open BsStorybook;

module Scrollers = {
  [@react.component]
  let make = () => {
    <Example title="Scroller">
      <Box background={Colors.white} width="120" height="240">
        <Scroller top={<Box background={Colors.Pink.dirty} width="120" height="16" />}
        bottom={<Box background={Colors.Pink.dirty} width="120" height="16" />}>
          <Stack gap=1>
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
            <Box background={Colors.pink} width="120" height="16" />
          </Stack>
        </Scroller>
      </Box>
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Scroller", module_)->(add("Scroller", () => <Scrollers />)));
