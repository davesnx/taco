let rem = v => v ++ "rem";
let px = v => v ++ "px";
let pct = v => v ++ "%";
let toPx = v => px(string_of_int(v));
let toRem = v => rem(string_of_int(v));