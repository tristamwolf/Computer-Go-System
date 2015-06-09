# Computer-Go-System
# Developed by John Waters
# Last updated:  6/9/15
Hey everybody!
This project is still very much in development, but my plan is to develop a Computer Go system.
For now, my goal is focused on developing a system by which the computer can see and understand the basic data on the board.
I have successfully implemented a Go board which can place Black and White stones on the board, and can even allow for Handicap games.
This board is not complete, however.  The following improvements need to be made before the board can be considered complete:
The board needs to be able to track Liberties of a group
The board needs to be able to determine that a group is dead, and remove it from the board
The board needs to be able to count each player's territory at the end of the game.

Once this is complete, it will be time to implement the Go bot proper.  There's a lot of work to be done here as well,
but I don't want to go too far into detail on my plans for it until I finish the Go board tracking class.  I may even
split these into two separate repositories so that others can make use of my Go board once it is completed.  I hope to keep
that portion of the program reasonably usable as a standalone.

P.S:  The Main.cpp is just a test case file with no logical purpose right now.  You can safely ignore it.
