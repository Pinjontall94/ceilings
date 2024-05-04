THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Struct types are always "anonymous" until we give them a name:
     struct {};
 So far, we've been giving struct types a name like so:
     const Foo = struct {};
 * The value of @typeName(Foo) is "<filename>.Foo".
 A struct is also given a name when you return it from a
 function:
     fn Bar() type {
         return struct {};
     }
     const MyBar = Bar();  // store the struct type
     const bar = Bar() {}; // create instance of the struct
 * The value of @typeName(Bar()) is "Bar()".
 * The value of @typeName(MyBar) is "Bar()".
 * The value of @typeName(@TypeOf(bar)) is "Bar()".
 You can also have completely anonymous structs. The value
 of @typeName(struct {}) is "struct:<position in source>".
 This function creates a generic data structure by returning an
 anonymous struct type (which will no longer be anonymous AFTER
 it's returned from the function).
 Perhaps you remember the "narcissistic fix" for the type name
 in Ex. 065? We're going to do the same thing here: use a hard-
 coded slice to return the type name. That's just so our output
 looks prettier. Indulge your vanity. Programmers are beautiful.
 The above would be an instant red flag in a "real" program.
