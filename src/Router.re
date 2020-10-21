let useRouter = () => ReasonReactRouter.useUrl()->Route.fromUrl;

let push = route => ReasonReactRouter.push(route->Route.toString);

module Link = {
  [@react.component]
  let make = (~route: Route.t', ~children) => {
    let location = Route.toString(route);

    <a
      href=location
      onClick={event =>
        if (!event->ReactEvent.Mouse.defaultPrevented
            && event->ReactEvent.Mouse.button == 0
            && !event->ReactEvent.Mouse.altKey
            && !event->ReactEvent.Mouse.ctrlKey
            && !event->ReactEvent.Mouse.metaKey
            && !event->ReactEvent.Mouse.shiftKey) {
          ReactEvent.Mouse.preventDefault(event);
          ReasonReactRouter.push(location);
        }
      }>
      children
    </a>;
  };
};
