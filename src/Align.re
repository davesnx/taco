type align =
  [ `Start
  | `Center
  | `End
  ];

[@react.component]
let make =
    (
      ~x: align=`Center,
      ~y: align=`Center,
      ~children,
    ) => {
  let className =
    Cn.make([
      [%css "display: flex; height: 100%; width: 100%;"],
      switch (x) {
      | `Start => [%css "justify-content: flex-start"]
      | `Center => [%css "justify-content: center"]
      | `End => [%css "justify-content: flex-end"]
      },
      switch (y) {
      | `Start => [%css "align-items: flex-start"]
      | `Center => [%css "align-items: center"]
      | `End => [%css "align-items: flex-end"]
      }
    ]);

  <div className> children </div>;
};
