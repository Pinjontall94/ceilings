THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Until now, we've only been printing our output in the console,
 which is good enough for fighting alien and hermit bookkeeping.
 However, many other task require some interaction with the file system,
 which is the underlying structure for organizing files on your computer.
 The File System provide a hierarchical structure for storing files
 by organizing files into directories, which hold files and other directories,
 thus creating a tree structure for navigating.
 Fortunately, zig standard library provide a simple api for interacting
 with the file system, see the detail documentation here
 https://ziglang.org/documentation/master/std/#std.fs
 In this exercise, we'll try to
   - create a new directory
   - open a file in the directory
   - write to the file.
 import std as always
 to check if you actually write to the file, you can either,
 1. open the file on your text editor, or
 2. print the content of the file in the console with command
    >> cat ./output/zigling.txt
 More on Creating files
 notice in:
 ... try output_dir.createFile("zigling.txt", .{});
                                              ^^^
                 we passed this anonymous struct to the function call
 this is the struct `CreateFlag` with default fields
 {
      read: bool = false,
      truncate: bool = true,
      exclusive: bool = false,
      lock: Lock = .none,
      lock_nonblocking: bool = false,
      mode: Mode = default_mode
 }
 Question:
   - what should you do if you want to also read the file after opening it?
   - go to documentation of the struct `std.fs.Dir` here
     https://ziglang.org/documentation/master/std/#std.fs.Dir
       - can you find a function for opening a file? how about deleting a file?
       - what kind of option can you uses with those function?
