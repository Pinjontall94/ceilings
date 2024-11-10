# Run me with `make -f [filename]`
#
# [Your assignment]: Using what you know of both C compilation & linking, and
# Makefiles, complete this Makefile and run it

all: app1

app1: app._
	___

app._: app._
	___

run:
	./app1

clean:
	rm app1 *.o

# When you're finished, move on to Makefile_wildcards.mk
