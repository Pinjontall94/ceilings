THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Using `catch` to replace an error with a default value is a bit
 of a blunt instrument since it doesn't matter what the error is.
 Catch lets us capture the error value and perform additional
 actions with this form:
     canFail() catch |err| {
         if (err == FishError.TunaMalfunction) {
             ...
         }
     };
 In this silly example we've split the responsibility of making
 a number just right into four (!) functions:
     makeJustRight()   Calls fixTooBig(), cannot fix any errors.
     fixTooBig()       Calls fixTooSmall(), fixes TooBig errors.
     fixTooSmall()     Calls detectProblems(), fixes TooSmall errors.
     detectProblems()  Returns the number or an error.
