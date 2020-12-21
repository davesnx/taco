module.exports = {
  webpackFinal: async (config, { configType: _ }) => {
    config.optimization = {
      minimize: false,
      minimizer: [],
    };

    return config;
  },
  stories: ["../src/stories/*.bs.js"],
  addons: [
    "@storybook/addon-actions",
    "@storybook/addon-links",
    "@storybook/addon-knobs",
  ],
};
