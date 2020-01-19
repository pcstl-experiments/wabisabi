type markdownConverter;

[@bs.new] [@bs.module "showdown"]
  external converter: unit => markdownConverter = "Converter";

[@bs.send]
  external makeHtml: (markdownConverter, string) => string = "makeHtml";

let output = converter() -> makeHtml("# Hello, markdown!");
