THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 One way to deal with error unions is to "catch" any error and
 replace it with a default value.
     foo = canFail() catch 6;
 If canFail() fails, foo will equal 6.
 Please provide the return type from this function.
 Hint: it'll be an error union.
