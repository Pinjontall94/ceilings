THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

    "We live on a placid island of ignorance in the midst
     of black seas of infinity, and it was not meant that
     we should voyage far."
     from The Call of Cthulhu
       by H. P. Lovecraft
 Zig has at least four ways of expressing "no value":
 * undefined
       var foo: u8 = undefined;
       "undefined" should not be thought of as a value, but as a way
       of telling the compiler that you are not assigning a value
       _yet_. Any type may be set to undefined, but attempting
       to read or use that value is _always_ a mistake.
 * null
       var foo: ?u8 = null;
       The "null" primitive value _is_ a value that means "no value".
       This is typically used with optional types as with the ?u8
       shown above. When foo equals null, that's not a value of type
       u8. It means there is _no value_ of type u8 in foo at all!
 * error
       var foo: MyError!u8 = BadError;
       Errors are _very_ similar to nulls. They _are_ a value, but
       they usually indicate that the "real value" you were looking
       for does not exist. Instead, you have an error. The example
       error union type of MyError!u8 means that foo either holds
       a u8 value OR an error. There is _no value_ of type u8 in foo
       when it's set to an error!
 * void
       var foo: void = {};
       "void" is a _type_, not a value. It is the most popular of the
       Zero Bit Types (those types which take up absolutely no space
       and have only a semantic value. When compiled to executable
       code, zero bit types generate no code at all. The above example
       shows a variable foo of type void which is assigned the value
       of an empty expression. It's much more common to see void as
       the return type of a function that returns nothing.
 Zig has all of these ways of expressing different types of "no value"
 because they each serve a purpose. Briefly:
   * undefined - there is no value YET, this cannot be read YET
   * null      - there is an explicit value of "no value"
   * errors    - there is no value because something went wrong
   * void      - there will NEVER be a value stored here
 Please use the correct "no value" for each ??? to make this program
 print out a cursed quote from the Necronomicon. ...If you dare.