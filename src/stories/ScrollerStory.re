open BsStorybook;

module ScrollerExample = {
  [@react.component]
  let make = (~top=<Box borderRadius=`Zero background=Colors.Pink.dirty width=`Fixed(120) height=`Fixed(16) />, ~bottom=<Box borderRadius=`Zero background=Colors.Pink.dirty width=`Fixed(120) height=`Fixed(16) />) => {
    <Box background=Colors.white width=`Fixed(120) height=`Fixed(240)>
      <Scroller
        top
        bottom>
        <Stack gap=1>
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
          <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
        </Stack>
      </Scroller>
    </Box>
  }
}

module Scrollers = {
  [@react.component]
  let make = () => {
    <Stack gap=8>
    <Component title="Scroller" description="Scoller adds the possibility to have a set of elements under scroll, with the capacity to stick an element on top and bottom.">
      <Align>
        <ScrollerExample />
      </Align>
      <Spacer bottom=8 />
      <Usage>
        {|
          <Scroller
            top={<Box background=Colors.Pink.dirty width=`Fixed(120) height=`Fixed(16) />}
            bottom={<Box background=Colors.Pink.dirty width=`Fixed(120) height=`Fixed(16) />}>
            <Stack gap=1>
              <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
              <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
              <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
              <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
              <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
              <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
              <Box background=Colors.pink width=`Fixed(120) height=`Fixed(16) />
              /* [...] */
            </Stack>
          </Scroller>
        |}
      </Usage>
    </Component>
    <Prop name="top" typing="React.Element">
      <ScrollerExample top={<Box background=Colors.Black.alpha9><Align><Text color=Colors.white>"Top element"</Text></Align></Box>} bottom={React.null} />
    </Prop>
    <Prop name="bottom" typing="React.Element">
      <ScrollerExample bottom={<Box background=Colors.Black.alpha9><Align><Text color=Colors.white>"Bottom element"</Text></Align></Box>} top={React.null} />
    </Prop>
    </Stack>;
  };
};

let module_ = [%bs.raw "module"];

Story.(
  storiesOf("Scroller", module_)->(add("Scroller", () => <Scrollers />))
);
