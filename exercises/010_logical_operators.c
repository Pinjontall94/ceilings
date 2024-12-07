int main(void)
{
    // Though C doesn't have native booleans (no seriously, it doesn't!), it
    // *does* come with the standard fare of relational and logical operators:
    //
    //     < <= > >= == != && ||

    int a = 1, b = 10, c = 100;

    int less = a __ b;
    int less_eq = a __ b;
    int great = c __ b;
    int great_eq = c __ 100;

    int equiv = a __ 1;
    int not_eq = a __ 2;
    int and = a __ 1;
    int or = a __ 0;
    
    // Note that the unary "!" can be used to convert a false value into a 1,
    // or a true into a 0, as in:
    //
    //   if (!truthy_value)
    //     this_will_run();
    //
    //  is equivalent to:
    //
    //   if(truthy_value == 0)
    //     this_will_run();

    if (less && less_eq && great && great_eq && equiv && not_eq && and && or)
        return 0;
}
