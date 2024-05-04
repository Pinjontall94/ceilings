 Sometimes you know that a variable might hold a value or
 it might not. Zig has a neat way of expressing this idea
 called Optionals. An optional type just has a '?' like this:
     var foo: ?u32 = 10;
 Now foo can store a u32 integer OR null (a value storing
 the cosmic horror of a value NOT EXISTING!)
     foo = null;
     if (foo == null) beginScreaming();
 Before we can use the optional value as the non-null type
 (a u32 integer in this case), we need to guarantee that it
 isn't null. One way to do this is to THREATEN IT with the
 "orelse" statement.
     var bar = foo orelse 2;
 Here, bar will either equal the u32 integer value stored in
 foo, or it will equal 2 if foo was null.
 Blast from the past:
 Optionals are a lot like error union types which can either
 hold a value or an error. Likewise, the orelse statement is
 like the catch statement used to "unwrap" a value or supply
 a default value:
    var maybe_bad: Error!u32 = Error.Evil;
    var number: u32 = maybe_bad catch 0;
