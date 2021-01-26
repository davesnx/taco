module Grid = [%styled.div
  {|
  display: flex;
  flex-wrap: wrap;
  justify-content: space-around;

  & > * {
    margin-bottom: 16px;
  }
|}
];

[@react.component]
let make = (~children) => {
  <Grid>children</Grid>
}