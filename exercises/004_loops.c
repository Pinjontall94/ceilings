#include <stdio.h>

// C has two looping constants you've almost certainly seen before:
//   - while loops
//   - for loops
// aaand the less common do-while

int main()
{
    int counter = 5;
    ____ (counter < 20)
    {
        // How would you make this complete in half the number of steps?
        ____;
        printf("while loop counter: %i\n", counter);
    }

    for (int i = 0; i <= 20; i += 2)  // what if this line is `for (;;)`?
    {
	printf("for loop counter: %i\n", counter);
        ____;
    }

    ____ {
	// [challenge]: change loop to print this line only once!
	printf("do whiles are weird! counter: %i\n", counter);
	____;
    } ____ (counter > 0);
    
    return counter;
}
