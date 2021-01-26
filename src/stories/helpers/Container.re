module Main = [%styled.div
  {|
  display: flex;
  flex-direction: column;
  justify-content: center;
  max-width: 800px;
  width: 100%;
  margin: 0 auto;
|}
];

[@react.component]
let make = (~children) => {
  <Main>children</Main>
}