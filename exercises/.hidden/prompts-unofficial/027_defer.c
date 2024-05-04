 You can assign some code to run _after_ a block of code exits by
 deferring it with a "defer" statement:
     {
         defer runLater();
         runNow();
     }
 In the example above, runLater() will run when the block ({...})
 is finished. So the code above will run in the following order:
     runNow();
     runLater();
 This feature seems strange at first, but we'll see how it could be
 useful in the next exercise.
