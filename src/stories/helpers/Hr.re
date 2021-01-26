module HR = [%styled.div
  "
  height: 1px;
  width: 100%;
  background-color: rgba(0, 0, 0, 0.5);
  "
];

[@react.component]
let make = (~children) => {
  <HR>children</HR>
}