[@genType]
type align = [ `Start | `Center | `End ];

let inline = [%css {|
  display: inline-flex;
  flex-wrap: wrap;
  /* outline: none; */
|}];

[@genType "Inline"]
[@react.component]
let make = (~align=`Center, ~children) => {
  let className = Cn.make([
    inline,
    switch (align) {
      | `Start => [%css "align-items: flex-start"]
      | `Center => [%css "align-items: center"]
      | `End => [%css "align-items: flex-end"]
      }
  ]);

  <DataAttribute name="Inline">
    <span className>
      children
    </span>
  </DataAttribute>
}