___
// Oh no, we forgot to #include our stdio header file, so C doesn't know what
// "printf" means! Note that printf will never print a newline by itself; see
// what happens when you change the n in \n to some other letter. How would
// you print "Hello world!" surrounded by double quotes? How would you put a
// tab in between "Hello" and "world!"?


int main(void)
{
    printf("Hello world!\n");  // We can also make single-line comments with
    return 0;                  // What does changing this do? Try `echo $?`
}
