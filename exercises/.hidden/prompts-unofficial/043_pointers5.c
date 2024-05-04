THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 As with integers, you can pass a pointer to a struct when you
 will wish to modify that struct. Pointers are also useful when
 you need to store a reference to a struct (a "link" to it).
     const Vertex = struct{ x: u32, y: u32, z: u32 };
     var v1 = Vertex{ .x=3, .y=2, .z=5 };
     var pv: *Vertex = &v1;   // <-- a pointer to our struct
 Note that you don't need to dereference the "pv" pointer to access
 the struct's fields:
     YES: pv.x
     NO:  pv.*.x
 We can write functions that take pointers to structs as
 arguments. This foo() function modifies struct v:
     fn foo(v: *Vertex) void {
         v.x += 2;
         v.y += 3;
         v.z += 7;
     }
 And call them like so:
     foo(&v1);
 Let's revisit our RPG example and make a printCharacter() function
 that takes a Character by reference and prints it...*and*
 prints a linked "mentor" Character, if there is one.
 Note how this function's "c" parameter is a pointer to a Character struct.
