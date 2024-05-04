 Let's revisit the very first error exercise. This time, we're going to
 look at an error-handling variation of the "if" statement.
     if (foo) |value| {
         // foo was NOT an error; value is the non-error value of foo
     } else |err| {
         // foo WAS an error; err is the error value of foo
     }
 We'll take it even further and use a switch statement to handle
 the error types.
     if (foo) |value| {
         ...
     } else |err| switch(err) {
         ...
     }
 This time we'll have numberMaybeFail() return an error union rather
 than a straight error.
