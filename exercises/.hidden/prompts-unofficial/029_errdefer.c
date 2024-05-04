THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Another common problem is a block of code that could exit in multiple
 places due to an error - but that needs to do something before it
 exits (typically to clean up after itself).
 An "errdefer" is a defer that only runs if the block exits with an error:
     {
         errdefer cleanup();
         try canFail();
     }
 The cleanup() function is called ONLY if the "try" statement returns an
 error produced by canFail().
