THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 With tagged unions, it gets EVEN BETTER! If you don't have a
 need for a separate enum, you can define an inferred enum with
 your union all in one place. Just use the 'enum' keyword in
 place of the tag type:
     const Foo = union(enum) {
         small: u8,
         medium: u32,
         large: u64,
     };
 Let's convert Insect. Doctor Zoraptera has already deleted the
 explicit InsectStat enum for you!
 Inferred enums are neat, representing the tip of the iceberg
 in the relationship between enums and unions. You can actually
 coerce a union TO an enum (which gives you the active field
 from the union as an enum). What's even wilder is that you can
 coerce an enum to a union! But don't get too excited, that
 only works when the union type is one of those weird zero-bit
 types like void!
 Tagged unions, as with most ideas in computer science, have a
 long history going back to the 1960s. However, they're only
 recently becoming mainstream, particularly in system-level
 programming languages. You might have also seen them called
 "variants", "sum types", or even "enums"!