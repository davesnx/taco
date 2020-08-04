module App = {
  [@react.component]
  let make = () => {
    let route = Router.useRouter();

    switch (route) {
    | Some(Home) => <Page_Home name="styled-ppx" />
    | None => <Page_NotFound />
    };
  };
};

ReactDOMRe.renderToElementWithId(<App />, "root");
