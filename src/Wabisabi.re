let templateString = FileSystem.readUtf8FileSync("test/template.html.t");
let content = FileSystem.readUtf8FileSync("test/example.md");
let templateFun = Handlebars.compileTemplate(templateString);
let renderedContent = Showdown.converter() -> Showdown.makeHtml(content);
let templateOptions = Js.Dict.fromArray([| ("content", renderedContent) |]);
let post = templateFun(. templateOptions);
FileSystem.writeFileSync("test/output.html", post);
