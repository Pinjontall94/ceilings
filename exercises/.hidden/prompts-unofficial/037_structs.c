 Being able to group values together lets us turn this:
     point1_x = 3;
     point1_y = 16;
     point1_z = 27;
     point2_x = 7;
     point2_y = 13;
     point2_z = 34;
 into this:
     point1 = Point{ .x=3, .y=16, .z=27 };
     point2 = Point{ .x=7, .y=13, .z=34 };
 The Point above is an example of a "struct" (short for "structure").
 Here's how that struct type could have been defined:
     const Point = struct{ x: u32, y: u32, z: u32 };
 Let's store something fun with a struct: a roleplaying character!
 We'll use an enum to specify the character role.
 Please add a new property to this struct called "health" and make
 it a u8 integer type.
