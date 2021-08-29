/*
 * @Author: your name
 * @Date: 2021-08-28 17:22:13
 * @LastEditTime: 2021-08-28 18:20:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \02_webpack_loader_plugin\webapck.config.js
 */
const path = require("path");
const { CleanWebpackPlugin } = require("clean-webpack-plugin");

module.exports = {
  mode: "development",
  devtool: "source-map",
  entry: "./src/index.js",
  output: {
    path: path.resolve(__dirname, "./dist"),
    filename: "bundle.js",
  },
  module: {
    rules: [
      {
        test: /\.(css|less)$/,
        use: ["style-loader", "css-loader", "less-loader"],
      },
      // {
      //   test: /\.(jpe?g|png)$/i,
      //   use: {
      //     loader: "file-loader",
      //     options: {
      //       name: "imgs/[name]_[hash:7].[ext]",
      //     },
      //   },
      // },
      {
        test: /\.(jpe?g|png)$/i,
        type: "asset",
        generator: {
          filename: "imgs/[name]_[hash:6].[ext]",
        },
      },
    ],
  },
  plugins: [new CleanWebpackPlugin()],
};
