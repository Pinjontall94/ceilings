# Run me with `make`!

# Unlike most programming we've seen so far, Makefiles are declarative.
# Anything touching the left margin followed by a ":" is a target, and all
# files after the ":" are that target's dependencies. Running `make [target]`
# will run the shell commands on the lines following the target and
# dependencies, usually to produce that file. E.g.:
#
# some_file.txt:
# 	touch some_file.txt
#
# The target "all" is special, though. If make is simply run as `make`, with no
# target, it will build the target "all" by default.
#
# [Your assignment]: See if you can make a rule called "run" that will run app0

all:
	gcc -o app0 app.c

clean:
	rm app0  # What happens if there's also a file called "clean"?

# When you're done here, finish and run Makefile_targets.mk
