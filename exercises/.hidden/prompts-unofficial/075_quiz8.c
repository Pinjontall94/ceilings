THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Quiz Time!
 Let's revisit the Hermit's Map from Quiz 7.
 Oh, don't worry, it's not nearly as big without all the
 explanatory comments. And we're only going to change one part
 of it.
 Remember how we didn't have to declare the numeric type of the
 place_count because it is only used at compile time? That
 probably makes a lot more sense now. :-)
 Okay, so as you may recall, we had to create each Path struct
 by hand and each one took 5 lines of code to define:
    Path{
        .from = &a, // from: Archer's Point
        .to = &b,   //   to: Bridge
        .dist = 2,
    },
 Well, armed with the knowledge that we can run code at compile
 time, we can perhaps shorten this a bit with a simple function
 instead.
 Please fill in the body of this function!
 Using our new function, these path definitions take up considerably less
 space in our program now!
 But is it more readable? That could be argued either way.
 We've seen that it is possible to parse strings at compile
 time, so the sky's really the limit on how fancy we could get
 with this.
 For example, we could create our own "path language" and
 create Paths from that. Something like this, perhaps:
    a -> (b[2])
    b -> (a[2] d[1])
    c -> (d[3] e[2])
    ...
 Feel free to implement something like that as a SUPER BONUS EXERCISE!
