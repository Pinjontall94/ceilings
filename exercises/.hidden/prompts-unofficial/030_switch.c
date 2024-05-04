THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 The "switch" statement lets you match the possible values of an
 expression and perform a different action for each.
 This switch:
     switch (players) {
         1 => startOnePlayerGame(),
         2 => startTwoPlayerGame(),
         else => {
             alert();
             return GameError.TooManyPlayers;
         }
     }
 Is equivalent to this if/else:
     if (players == 1) startOnePlayerGame();
     else if (players == 2) startTwoPlayerGame();
     else {
         alert();
         return GameError.TooManyPlayers;
     }
