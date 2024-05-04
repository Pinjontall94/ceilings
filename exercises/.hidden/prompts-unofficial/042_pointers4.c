THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Now let's use pointers to do something we haven't been
 able to do before: pass a value by reference to a function.
 Why would we wish to pass a pointer to an integer variable
 rather than the integer value itself? Because then we are
 allowed to *change* the value of the variable!
     +-----------------------------------------------+
     | Pass by reference when you want to change the |
     | pointed-to value. Otherwise, pass the value.  |
     +-----------------------------------------------+
 This function should take a reference to a u8 value and set it
 to 5.
