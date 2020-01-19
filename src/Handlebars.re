[@bs.module "handlebars"]
  external compileTemplate: string => (. Js.Dict.t(string)) => string = "compile"

