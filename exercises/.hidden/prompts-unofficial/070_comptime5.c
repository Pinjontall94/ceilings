 Being able to pass types to functions at compile time lets us
 generate code that works with multiple types. But it doesn't
 help us pass VALUES of different types to a function.
 For that, we have the 'anytype' placeholder, which tells Zig
 to infer the actual type of a parameter at compile time.
     fn foo(thing: anytype) void { ... }
 Then we can use builtins such as @TypeOf(), @typeInfo(),
 @typeName(), @hasDecl(), and @hasField() to determine more
 about the type that has been passed in. All of this logic will
 be performed entirely at compile time.
 Let's define three structs: Duck, RubberDuck, and Duct. Notice
 that Duck and RubberDuck both contain waddle() and quack()
 methods declared in their namespace (also known as "decls").
 This function has a single parameter which is inferred at
 compile time. It uses builtins @TypeOf() and @hasDecl() to
 perform duck typing ("if it walks like a duck and it quacks
 like a duck, then it must be a duck") to determine if the type
 is a "duck".
