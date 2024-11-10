// A quick aside that will matter later:
//
// Technically when you run `gcc some_file.c` you're conveniently combining
// FOUR things into one command. It's less common to split out pre-processing
// and assembling, but you'll often run into projects with separate compiling
// and *linking*. I'm glossing over for brevity, but compiling turns `.c` files
// into `.o` ("object") files, while linking makes a runnable program. You can
// sort of think of objects as these as bare functions assembled into a
// machine-readable binary file, but without all the actual addresses to
// functions figured out. 
//
// GCC with the `-c` flag will compile or assemble C, but won't link it.
// Why would you do this? We'll get into multi-file projects later, but
// for now all you need to know is that compiling cares about source code,
// while linking cares about definitions and libraries. If you want a function
// in one C file to be used by another, you need both a `.c` (source) file and a
// `.h` ("header") file for that function.
//
// I promise this will make sense later, mostly this is because C is HIGHLY
// backwards compatible with compilers dating all the way back to the 70s.
// I leave it up to you if that's awesome or terrifying ;)
//
// [Your assignment]: compile the code below both ways, in one shot and with
// separate compiling and linking with the -c and -o flags!

int main(void)
{
    return 0;
}

