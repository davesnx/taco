[@react.component]
let make = (~play=false, ~children) => {

  if (play) {
    children
  } else {
    React.null
  };
};