 Prerequisite :
    - exercise/106_files.zig, or
    - create a file {project_root}/output/zigling.txt
      with content `It's zigling time!`(18 byte total)
 Now there no point in writing to a file if we don't read from it am I right?
 let's wrote a program to read the content of the file that we just created.
 I am assuming you've created the appropriate files for this to work.
 Alright, bud, lean in close here's the game plan.
    - First, we open the {project_root}/output/ directory
    - Secondly, we open file `zigling.txt` in that directory
    - then, we initalize an array of character with all letter 'A', and print it
    - After that, we read the content of the file to the array
    - Finally, we print out the read content
