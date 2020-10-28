open BsStorybook;

module Spacers = {
  [@react.component]
  let make = () => {
    /* let bottom =
         int_of_float(Knobs.number(~label="bottom", ~defaultValue=10., ()));
       let top = int_of_float(Knobs.number(~label="top", ~defaultValue=0., ()));
       let left =
         int_of_float(Knobs.number(~label="left", ~defaultValue=0., ()));
       let right =
         int_of_float(Knobs.number(~label="right", ~defaultValue=0., ()));
       let x = int_of_float(Knobs.number(~label="x", ~defaultValue=0., ()));
       let y = int_of_float(Knobs.number(~label="y", ~defaultValue=0., ()));
       let all = int_of_float(Knobs.number(~label="all", ~defaultValue=0., ())); */
    <Example title="Spacer">
      <Spacer bottom=`L> <Box width="24" height="24" /> </Spacer>
      <Box width="24" height="24" />
    </Example>;
  };
};

let module_ = [%bs.raw "module"];

Story.(storiesOf("Spacer", module_)->(add("Spacer", () => <div />)));
