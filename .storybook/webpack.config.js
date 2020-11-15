const path = require('path');

module.exports = {
  module: {
    rules: [
      {
        test: /\.css$/,
        use: ['style-loader', 'css-loader'],
      },
      {
        test: /\.(png|jpg|woff|ttf)$/,
        use: 'url-loader',
      },
    ],
  },
};
