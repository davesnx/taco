open Taco;

[@react.component]
let make = (~name) => {
  <Container>
    <Spacer all=10>
      <Text>
        {React.string({j|👋 Welcome $name! You can edit me in |j})}
        <code> {React.string("src/components/Greet.re")} </code>
      </Text>
      <Link href="https://reasonml.github.io/reason-react/">
        {React.string("Learn Reason React")}
      </Link>
    </Spacer>
  </Container>;
};
