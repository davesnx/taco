type px = int;
type rem = float;
type ratio = float;

module Typography = {
  type kind = [ | `S | `M | `L | `XL | `XXL];

  type size = {
    s: rem,
    m: rem,
    l: rem,
    xl: rem,
    xxl: rem,
  };

  type config = {
    size,
    font: list(string),
  };

  let view = (size, k) => {
    switch (k) {
    | `S => size.s
    | `M => size.m
    | `L => size.l
    | `XL => size.xl
    | `XXL => size.xxl
    };
  };

  let make = (~increment: ratio, ~baseSize: rem, ~font: string) => {
    {
      font: [font, "sans"],
      size: {
        s: baseSize /. increment,
        m: baseSize,
        l: baseSize *. increment,
        xl: baseSize *. increment *. increment,
        xxl: baseSize *. increment *. increment *. increment,
      },
    };
  };
};

module Spacing = {
  type kind = [ | `Zero | `S | `M | `L | `XL | `XXL];

  type config = {
    s: rem,
    m: rem,
    l: rem,
    xl: rem,
    xxl: rem,
  };

  let view = (size, k): rem => {
    switch (k) {
    | `Zero => 0.
    | `S => size.s
    | `M => size.m
    | `L => size.l
    | `XL => size.xl
    | `XXL => size.xxl
    };
  };

  let make = (~increment: ratio, ~baseUnit: rem): config => {
    {
      s: baseUnit /. increment,
      m: baseUnit,
      l: baseUnit *. increment,
      xl: baseUnit *. increment *. increment,
      xxl: baseUnit *. increment *. increment *. increment,
    };
  };
};

module Border = {
  module Size = {
    type kind = [ | `Zero | `S | `M | `L];

    type config = {
      zero: rem,
      small: rem,
      medium: rem,
      large: rem,
    };

    let view = (size: config, k: kind): rem => {
      switch (k) {
      | `Zero => size.zero
      | `S => size.small
      | `M => size.medium
      | `L => size.large
      };
    };

    let make = (~baseUnit: ratio): config => {
      {
        zero: 0.,
        small: baseUnit,
        medium: baseUnit *. 2.,
        large: baseUnit *. baseUnit,
      };
    };
  };

  module Radius = {
    type kind = [ | `Zero | `S | `M | `L | `Full];

    type config = {
      zero: rem,
      small: rem,
      medium: rem,
      large: rem,
      full: rem,
    };

    let view = (size, k): rem => {
      switch (k) {
      | `Zero => size.zero
      | `S => size.small
      | `M => size.medium
      | `L => size.large
      | `Full => size.full
      };
    };

    let make = (~baseUnit: rem): config => {
      {
        zero: 0.,
        small: baseUnit,
        medium: baseUnit *. 2.,
        large: baseUnit *. baseUnit,
        full: 999.,
      };
    };
  };

  type config = {
    radii: Radius.config,
    size: Size.config,
  };
};

type colors; /* TODO */
type elevations; /* TODO */
type responsive; /* TODO */

type theme = {
  typography: Typography.config,
  spacing: Spacing.config,
  border: Border.config,
  isDarkMode: bool,
};

let make = value => {
  {
    typography:
      Typography.make(
        ~increment=value##typography##increment,
        ~baseSize=value##typography##size,
        ~font=value##typography##font,
      ),
    spacing:
      Spacing.make(
        ~increment=value##space##increment,
        ~baseUnit=value##space##unit,
      ),
    border: {
      radii: Border.Radius.make(~baseUnit=value##border##radii),
      size: Border.Size.make(~baseUnit=value##border##size),
    },
    isDarkMode: false,
  };
};

module Provider = {
  /* TODO:
       Create a ThemeProvider
         - [https://github.com/Hehk/reason-react-context](https://github.com/Hehk/reason-react-context)
         - [https://dev.to/margaretkrutikova/reason-react-context-explained-in-action-5eki](https://dev.to/margaretkrutikova/reason-react-context-explained-in-action-5eki)
     */
  [@react.component]
  let make = () => ();
};

let defaultTheme =
  make({
    "typography": {
      "increment": 1.125,
      "size": 15.,
      "font": "Inter",
    },
    "space": {
      "increment": 4.,
      "unit": 8.,
    },
    "border": {
      "radii": 4.,
      "size": 2.,
    },
  });

let context = React.createContext(defaultTheme);

let useTheme = () => React.useContext(context);
