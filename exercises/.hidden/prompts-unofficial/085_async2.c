THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 So, 'suspend' returns control to the place from which it was
 called (the "call site"). How do we give control back to the
 suspended function?
 For that, we have a new keyword called 'resume' which takes an
 async function invocation's frame and returns control to it.
     fn fooThatSuspends() void {
         suspend {}
     }
     var foo_frame = async fooThatSuspends();
     resume foo_frame;
 See if you can make this program print "Hello async!".
