THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Anonymous struct literal syntax can also be used to compose an
 "anonymous list" with an array type destination:
     const foo: [3]u32 = .{10, 20, 30};
 Otherwise it's a "tuple":
     const bar = .{10, 20, 30};
 The only difference is the destination type.
