THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 We've absorbed a lot of information about the variations of types
 we can use in Zig. Roughly, in order we have:
                          u8  single item
                         *u8  single-item pointer
                        []u8  slice (size known at runtime)
                       [5]u8  array of 5 u8s
                       [*]u8  many-item pointer (zero or more)
                 enum {a, b}  set of unique values a and b
                error {e, f}  set of unique error values e and f
      struct {y: u8, z: i32}  group of values y and z
 union(enum) {a: u8, b: i32}  single value either u8 or i32
 Values of any of the above types can be assigned as "var" or "const"
 to allow or disallow changes (mutability) via the assigned name:
     const a: u8 = 5; // immutable
       var b: u8 = 5; //   mutable
 We can also make error unions or optional types from any of
 the above:
     var a: E!u8 = 5; // can be u8 or error from set E
     var b: ?u8 = 5;  // can be u8 or null
 Knowing all of this, maybe we can help out a local hermit. He made
 a little Zig program to help him plan his trips through the woods,
 but it has some mistakes.
 *************************************************************
 *                A NOTE ABOUT THIS EXERCISE                 *
 *                                                           *
 * You do NOT have to read and understand every bit of this  *
 * program. This is a very big example. Feel free to skim    *
 * through it and then just focus on the few parts that are  *
 * actually broken!                                          *
 *                                                           *
 *************************************************************
 The grue is a nod to Zork.
 Let's start with the Places on the map. Each has a name and a
 distance or difficulty of travel (as judged by the hermit).
 Note that we declare the places as mutable (var) because we need to
 assign the paths later. And why is that? Because paths contain
 pointers to places and assigning them now would create a dependency
 loop!
           The hermit's hand-drawn ASCII map
  +---------------------------------------------------+
  |         * Archer's Point                ~~~~      |
  | ~~~                              ~~~~~~~~         |
  |   ~~~| |~~~~~~~~~~~~      ~~~~~~~                 |
  |         Bridge     ~~~~~~~~                       |
  |  ^             ^                           ^      |
  |     ^ ^                      / \                  |
  |    ^     ^  ^       ^        |_| Cottage          |
  |   Dogwood Grove                                   |
  |                  ^     <boat>                     |
  |  ^  ^  ^  ^          ~~~~~~~~~~~~~    ^   ^       |
  |      ^             ~~ East Pond ~~~               |
  |    ^    ^   ^       ~~~~~~~~~~~~~~                |
  |                           ~~          ^           |
  |           ^            ~~~ <-- short waterfall    |
  |   ^                 ~~~~~                         |
  |            ~~~~~~~~~~~~~~~~~                      |
  |          ~~~~ Fox Pond ~~~~~~~    ^         ^     |
  |      ^     ~~~~~~~~~~~~~~~           ^ ^          |
  |                ~~~~~                              |
  +---------------------------------------------------+
 We'll be reserving memory in our program based on the number of
 places on the map. Note that we do not have to specify the type of
 this value because we don't actually use it in our program once
 it's compiled! (Don't worry if this doesn't make sense yet.)
 Now let's create all of the paths between sites. A path goes from
 one place to another and has a distance.
 By the way, if the following code seems like a lot of tedious
 manual labor, you're right! One of Zig's killer features is letting
 us write code that runs at compile time to "automate" repetitive
 code (much like macros in other languages), but we haven't learned
 how to do that yet!
 Once we've plotted the best course through the woods, we'll make a
 "trip" out of it. A trip is a series of Places connected by Paths.
 We use a TripItem union to allow both Places and Paths to be in the
 same array.
 The Hermit's Notebook is where all the magic happens. A notebook
 entry is a Place discovered on the map along with the Path taken to
 get there and the distance to reach it from the start point. If we
 find a better Path to reach a Place (shorter distance), we update the
 entry. Entries also serve as a "todo" list which is how we keep
 track of which paths to explore next.
 +------------------------------------------------+
 |              ~ Hermit's Notebook ~             |
 +---+----------------+----------------+----------+
 |   |      Place     |      From      | Distance |
 +---+----------------+----------------+----------+
 | 0 | Archer's Point | null           |        0 |
 | 1 | Bridge         | Archer's Point |        2 | < next_entry
 | 2 | Dogwood Grove  | Bridge         |        1 |
 | 3 |                |                |          | < end_of_entries
 |                      ...                       |
 +---+----------------+----------------+----------+
 Remember that trips will be a series of alternating TripItems
 containing a Place or Path from the destination back to the start.
 The remaining space in the trip array will contain null values, so
 we need to loop through the items in reverse, skipping nulls, until
 we reach the destination at the front of the array.
 Going deeper:
 In computer science terms, our map places are "nodes" or "vertices" and
 the paths are "edges". Together, they form a "weighted, directed
 graph". It is "weighted" because each path has a distance (also
 known as a "cost"). It is "directed" because each path goes FROM
 one place TO another place (undirected graphs allow you to travel
 on an edge in either direction).
 Since we append new notebook entries at the end of the list and
 then explore each sequentially from the beginning (like a "todo"
 list), we are treating the notebook as a "First In, First Out"
 (FIFO) queue.
 Since we examine all closest paths first before trying further ones
 (thanks to the "todo" queue), we are performing a "Breadth-First
 Search" (BFS).
 By tracking "lowest cost" paths, we can also say that we're
 performing a "least-cost search".
 Even more specifically, the Hermit's Notebook most closely
 resembles the Shortest Path Faster Algorithm (SPFA), attributed to
 Edward F. Moore. By replacing our simple FIFO queue with a
 "priority queue", we would basically have Dijkstra's algorithm. A
 priority queue retrieves items sorted by "weight" (in our case, it
 would keep the paths with the shortest distance at the front of the
 queue). Dijkstra's algorithm is more efficient because longer paths
 can be eliminated more quickly. (Work it out on paper to see why!)
