[@react.component]
let make = (~play=false, ~children) => {

  if (play) {
    <Wrapper name="Animate">
      children
    </Wrapper>
  } else {
    React.null
  };
};
