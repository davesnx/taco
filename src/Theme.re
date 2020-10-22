/* Including Provider here would make users of Theme, only need to
open Theme at the top of the file, and no need to open Provider. */
include Provider;

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

  let view = (size, k) => {
    switch (k) {
      |`S => size.s
      |`M => size.m
      |`L => size.l
      |`XL => size.xl
      |`XXL => size.xxl
    }
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

  let view = (size, k): rem => {
    switch (k) {
      | `S => size.s
      | `M => size.m
      | `L => size.l
      | `XL => size.xl
      | `XXL => size.xxl
    }
  };

  let make = (~increment: ratio, ~baseUnit: rem): config => {
    {
      s: baseUnit /. increment,
      m: baseUnit,
      l: baseUnit *. increment,
      xl: baseUnit *. increment *. increment,
      xxl: baseUnit *. increment *. increment *. increment,
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

    let view = (size: config, k: kind): rem => {
      switch (k) {
        | `Zero => size.zero
        | `S => size.small
        | `M => size.medium
        | `L => size.large
      }
    };

    let make = (baseUnit: ratio): config => {
      {
        zero: 0.,
        small: baseUnit,
        medium: baseUnit *. 2.,
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

    let view = (size, k): rem => {
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
        zero: 0.,
        small: baseUnit,
        medium: baseUnit *. 2.,
        large: baseUnit *. baseUnit,
        full: 999.,
      }
    };
  };

  type config = {
    radii: Radius.config,
    size: Size.config,
  }
};

type colors; /* TODO */
type elevations; /* TODO */
type responsive; /* TODO */

type theme = {
  typography: Typography.config,
  spacing: Spacing.config,
  border: Border.config,
  isDarkMode: bool
}