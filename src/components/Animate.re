[@react.component]
let make = (~play=false, ~children) => {

  if (play) {
    <DataAttribute name="Animate">
      children
    </DataAttribute>
  } else {
    React.null
  };
};