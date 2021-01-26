let spaceDirectionStyles = (prop, direction, unit) => {
  if (unit != 0) {
    Emotion.css([
      Emotion.unsafe(prop ++ "-" ++ direction, Theme.unitize(unit))
    ])
  } else {
    Emotion.css([]);
  }
};

let spaceStyles = (prop, unit) => {
  if (unit != 0) {
    Emotion.css([
      Emotion.unsafe(prop, Theme.unitize(unit))
    ])
  } else {
    Emotion.css([]);
  }
};

[@react.component]
let make =
    (
      ~children=?,
      ~top=0,
      ~left=0,
      ~right=0,
      ~bottom=0,
      ~all=0,
      ~inner=false,
    ) => {
  let className =
    Cn.make([
      spaceDirectionStyles(inner ? "margin" : "padding", "top", top),
      spaceDirectionStyles(inner ? "margin" : "padding", "bottom", bottom),
      spaceDirectionStyles(inner ? "margin" : "padding", "left", left),
      spaceDirectionStyles(inner ? "margin" : "padding", "right", right),
      spaceStyles(inner ? "margin" : "padding", all),
    ]);

  <DataAttribute name="Spacer">
    <div className>
      {switch (children) {
      | None => React.null
      | Some(c) => c
      }}
    </div>
  </DataAttribute>
};
