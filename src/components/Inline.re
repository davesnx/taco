[@genType]
type align = [ `Start | `Center | `End ];

let inline = [%cx {|
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
      | `Start => [%cx "align-items: flex-start"]
      | `Center => [%cx "align-items: center"]
      | `End => [%cx "align-items: flex-end"]
      }
  ]);

  <Wrapper name="Inline">
    <span className>
      children
    </span>
  </Wrapper>
}
