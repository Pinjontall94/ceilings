#include <stddef.h>
#include <stdio.h>
void splitString(char **output_buffer, char *str, char delimiter);

// Arrays! Finally something approaching a recognizable collection/list type!
// Well, we're still very much in pointer land, and not just because of the
// equivalence between an array and the pointer to the first element. It *is* a
// related point, though!

int main(void)
{
    // Arrays are declared like a type would be, but take a number argument in
    // square brackets to determine the number of elements it can hold.
    // In case it wasn't already clear from other languages, arrays can only
    // hold ONE type per array!
    int some_nums[_];
    some_nums[0] = 4;
    some_nums[1] = 8;
    some_nums[2] = 15;
    some_nums[3] = 16;

    printf("the first element of some_nums is: %d\n", some_nums[_]);
    // [Challenge]: populate some_nums with a loop 1 to 10, skipping all
    // even numbers (Hint: you don't need to use modulo 2 == 0 ;P)

    // Much like with simple datatypes, though, it's best to initialize arrays
    // with a known value, otherwise there'll be garbage (try printing an
    // element of some_nums before it's populated to see).
    // 
    // In old-timey C the only way to do this was doing something like:
    // 
    //   int some_nums[6] = {0, 0, 0, 0, 0, 0};
    //
    // But nowadays we have an array initializer for arbitrarily long arrays,
    // as well as inferred lengths, but they're an either/or deal:
    // 
    //   int some_other_nums[6] = {0}; <- all elements initialized as 0
    //   char strs_are_just_char_arrays[] = "check it out";
    //   double my_float[] = {0}; <- ILLEGAL (Because like, how would that
    //                                        even work at compile time?)
    return 0;
}
