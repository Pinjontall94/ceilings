 Another useful practice for bit manipulation is setting bits as flags.
 This is especially useful when processing lists of something and storing
 the states of the entries, e.g. a list of numbers and for each prime
 number a flag is set.
 As an example, let's take the Pangram exercise from Exercism:
 https://exercism.org/tracks/zig/exercises/pangram
 A pangram is a sentence using every letter of the alphabet at least once.
 It is case insensitive, so it doesn't matter if a letter is lower-case
 or upper-case. The best known English pangram is:
           "The quick brown fox jumps over the lazy dog."
 There are several ways to select the letters that appear in the pangram
 (and it doesn't matter if they appear once or several times).
 For example, you could take an array of bool and set the value to 'true'
 for each letter in the order of the alphabet (a=0; b=1; etc.) found in
 the sentence. However, this is neither memory efficient nor particularly
 fast. Instead we take a simpler way, very similar in principle, we define
 a variable with at least 26 bits (e.g. u32) and also set the bit for each
 letter found at the corresponding position.
 Zig provides functions for this in the standard library, but we prefer to
 solve it without these extras, after all we want to learn something.
