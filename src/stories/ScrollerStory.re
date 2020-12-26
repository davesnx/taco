open BsStorybook;

module Scrollers = {
  [@react.component]
  let make = () => {
    <Component title="Scroller" description="Scoller adds the possibility to have a set of elements under scroll, with the capacity to stick an element on top and bottom.">
      <Box background=Colors.white width="120" height="240">
        <Scroller
          top={<Box background=Colors.Pink.dirty width="120" height="16" />}
          bottom={<Box background=Colors.Pink.dirty width="120" height="16" />}>
          <Stack gap=1>
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
            <Box background=Colors.pink width="120" height="16" />
          </Stack>
        </Scroller>
      </Box>
    </Component>;
  };
};

let module_ = [%bs.raw "module"];

Story.(
  storiesOf("Scroller", module_)->(add("Scroller", () => <Scrollers />))
);
