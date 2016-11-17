game.exe

This game is similar to Hang Man. A word is selected at random from a text file, then you have a number of guesses in which to find the word. The game is started by executing game.exe followed by the name of the text file and the number of guesses you would like to take to find the word. For example:

game.exe text.txt 20

would mean you would like to guess the word selected at random from file text.txt within 20 guesses.

NOTE text.txt must be in the same directory as game.txt and must only contain words with no other characters seperated by a space or new line.

When the game is started you will be presented with a number of hash symbols to represent each letter of the chosen word. e.g. 'test' will be represented by '****'. 
You will then be promted to "Enter a guess". You will then enter an alphabetical letter (the game is not case sensitive). If the letter is present in the word, the hash symbols will be replaced by that letter.

e.g. (word is 'test')

****
Enter a guess
t
t**t

Repeat this process until you find all the missing letters until your number of guesses run out. If you guess all the letters before your number of guesses run out, you will bepresent with a message "Well Done". If your don't find all the letters before your number of guesses run out, you will be presented with the message "Hard Luck".
