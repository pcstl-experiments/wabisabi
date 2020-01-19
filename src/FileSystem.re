[@bs.module "fs"]
  external readFileSync_internal: (string, Js.Dict.t(string)) => string = "readFileSync";

[@bs.module "fs"]
  external writeFileSync: (string, string) => unit = "writeFileSync";

let readUtf8FileSync = (filePath: string) =>
  readFileSync_internal(
    filePath,
    Js.Dict.fromArray([| ("encoding", "utf8") |])
  );
