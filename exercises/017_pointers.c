#include <stdio.h>
void print_int_array(int*, size_t);

// Woah, woah, woah: pointers?? Don't you think we should get familiar with 
// arrays or structs or something before we tackle The Hard Part™?
// 
// We definitely will get to those (and enums and unions, too!), but
// there's a reason we're doing this now and it relates to the last
// exercise, functions. Namely, unlike most higher-level languages,
// C's functions have a "small mouth" for values. This isn't any
// official designation, but I find it helpful all the same. As a general
// rule, C functions can't accept a collection of values as an input.
// 
// What?! That can't possibly be right, I skipped ahead and saw that
// CLI arguments are taken with the main function arranged as:
// 
// int main(int argc, char *argv[])
//                              ^--There's an array parameter right there!
// 
// True, but if you *did* skip ahead, you've likely also seen that second
// parameter with the signature `char ** argv`, and those are *equivalent*.
// There's another dirty secret of C: anytime you "pass an array" to a
// function, under the hood you're only ever passing a pointer to the array's
// first element!
//
// Let's get started then...

int main(void)
{
    // Really, pointers aren't complicated; what they are is in the name!
    // Some variables store an int, others a char, and pointers just
    // store an *address in memory* where another bit of data lives.
    //
    // Crucially, when you declare a pointer, you gotta use C's weird syntax
    // for it: the infamous "*" operator. But remember! All a pointer is, is
    // just a program's way of saying "I know a guy"

    int a_guy = 69;
    int *i_know_a_guy = &a_guy;

    //  int *<name> means: 
    //    "I declare a pointer called <name> that points to an int"
    //
    //  &<another_name> means: 
    //    "fetch me the physical address in RAM where <another_name> lives"
    //
    //  And you can verify this with the following

    printf(
        "Your pointer at address %p knows a guy who's value is %d\n", 
        &i_know_a_guy, *i_know_a_guy
    );

    // Note that *<some_variable> means something VERY different depending on
    // where it's used (as in the case three lines up).
    //
    // Case 1, "*" to declare a pointer:
    //   double *my_num = 5800.8;
    //
    // Case 2, "*" as the dereference operator:
    //   char cool_letter = *my_favorite_letter_or_whatever;
    //
    // Easiest way to remember it is usually:
    //   - '*' to the left of '=':  makes a pointer
    //   - else: grabs the value it's pointing to

    int wise_guys[6] = {2, 0, 4, 5, 1, 2};
    int _get_a_loada_these = _wise_guys[_]; // [Challenge]: assign var to the
                                            // address of wise_guys first
                                            // element

    // Knowing what you do now, print the wise_guys array with the provided
    // function with both array and pointer syntax. Note that under the hood,
    // these are truly the same!
    print_int_array(____, 6);

    return 0;
}


// Don't touch below this line
void print_int_array(int *some_array, size_t length)
{
    printf("{");
    if (length < 1)
        return;
    else if (length == 1)
        printf("%d", some_array[0]);
    else {
        for (size_t i = 0; i < length; i++) {
            if (i != length - 1)
                printf("%d, ", some_array[i]);
            else
                printf("%d", some_array[i]);
        }
    }
    printf("}\n");
}
