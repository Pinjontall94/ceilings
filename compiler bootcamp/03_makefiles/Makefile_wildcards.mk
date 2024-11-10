# These files are okay and all, but there's a lot of duplicated writing when
# often only the extension is different, right? Or especially if you had a lot
# `.c` and `.o` files to keep track of when all you really need is to tell the
# compiler, "hey, just build all the C files into objects, and link them into
# an executable, okay?"
#
# Luckily, both variables and wildcards come in handy here, and while makefiles
# could *easily* be their own course, we're gonna call it right here and get on
# to the good stuff: C! This will be our template makefile for now, and once
# completed, will serve well for most small C programs.
#
# [Your assignment]: Complete this makefile using the right single symbols
# in place of the "_"s
#
# Hint: check https://makefiletutorial.com if you're stuck!

CC := gcc
CFLAGS := -Wall -Wextra -g -std=c2x  # we'll explain these next

all: app2

app2: _.o
	$(CC) -o $_ $_

_.o: _.c
	$(CC) $(CFLAGS) -c -o $_ $<

clean:
	rm *.o app2
