type px = int;
type rem = float;
type ratio = float;

module Typography = {
  type kind = [ |`S | `M | `L | `XL | `XXL ];

  type size = {
    s: rem,
    m: rem,
    l: rem,
    xl: rem,
    xxl: rem
  };

  type config = {
    size: size,
    font: list(string)
  };

  let view = (size: size, k: kind): rem => {
    switch (k) {
      |`S => size.s
      |`M => size.m
      |`L => size.l
      |`XL => size.xl
      |`XXL => size.xxl
    }
  };

  let make = (~increment: ratio, ~baseSize: rem, ~font: string): config => {
    {
      font: [font, "sans"],
      size: {
        s: baseSize /. incremenet,
        m: baseSize,
        l: baseSize *. incremenet,
        xl: baseSize *. incremenet *. incremenet,
        xxl: l *. incremenet *. incremenet *. incremenet),
      }
    }
  };
};

module Spacing = {
  type kind = [ |`S | `M | `L | `XL | `XXL ];

  type config = {
    s: rem,
    m: rem,
    l: rem,
    xl: rem,
    xxl: rem
  };

  let view = (size: size, k: kind): rem => {
    switch (k) {
      |`S => size.s
      |`M => size.m
      |`L => size.l
      |`XL => size.xl
      |`XXL => size.xxl
    }
  };

  let make = (~increment: ratio, ~baseUnit: rem, ~font: string): config => {
    {
        s: baseUnit /. incremenet,
        m: baseUnit,
        l: baseUnit *. incremenet,
        xl: baseUnit *. incremenet *. incremenet,
        xxl: l *. incremenet *. incremenet *. incremenet),
    }
  };
};

module Border = {
  module Size = {
    type kind = [ |`Zero | `S | `M | `L];

    type config = {
      zero: rem,
      small: rem,
      medium: rem,
      large: rem,
    };

    let view = (size: size, k: kind): rem => {
      switch (k) {
        | `Zero => size.zero
        | `S => size.small
        | `M => size.medium
        | `L => size.large
      }
    };

    let make = (baseUnit: ratio): config => {
      {
        zero: 0,
        small: baseUnit,
        medium: baseUnit *. 2,
        large: baseUnit *. baseUnit
      }
    };
  };

  module Radius = {
    type kind = [ |`Zero | `S | `M | `L | `Full];

    type config = {
      zero: rem,
      small: rem,
      medium: rem,
      large: rem,
      full: rem,
    };

    let view = (size: size, k: kind): rem => {
      switch (k) {
        | `Zero => size.zero
        | `S => size.small
        | `M => size.medium
        | `L => size.large
        | `Full => size.full
      }
    };

    let make = (baseUnit: rem): config => {
      {
        zero: 0,
        small: baseUnit,
        medium: baseUnit *. 2,
        large: baseUnit *. baseUnit,
        full: full,
      }
    };
  };

  let viewRadii = Radius.view;
  let viewSize = Size.view;

  let make = (~baseSize: rem, ~baseRadii: rem) => {
    {
      radii: Radius.make(~baseRadii),
      size: Size.make(~baseSize),
    }
  }
};

type colors = {
  /*
    TODO: Create a way to handle colors:

    As a user I want to handle different scales of colors on a base of given colors.

    Generate x states of each color with a specific scale.
    blue -> #730080 #68009F #5000BF #2D00DF #0000FF #222EFF #445AFF #6681FF #88A6FF #AAC5FF #CCE0FF
    green -> #008073 #009F68 #00BF50 #00DF2D #00FF00 #2EFF22 #5AFF44 #81FF66 #A6FF88 #C5FFAA #E0FFCC
    red -> #FF0000 #FF222E #FF445A #FF6681 #FF88A6 #FFAAC5 #FFCCE0

    Based on:
    https://hihayk.github.io/scale/#4/6/50/80/-51/25/20/14/2D525F/45/82/95
   */
  hex: string
}

type screens;

type t = {
  typography: Typography.t,
  spacing: spacing,
  border: border,
  colors: colors,
  screens: screens,
  isDarkMode: bool
}