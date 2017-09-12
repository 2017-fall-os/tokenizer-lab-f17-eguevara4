# Compiling and Running

To compile and run the program use the make command in the tokenizer diretory. The make command also runs the test program right away.
To run the program again after it was already compiled use the ./test command.

# Using the program

Once the program is running the program will prompt you that it has started and how to exit the program.
The program will also prompt you to enter a keyboard input using the '$' symbol. Once the '$' symbol is there you can start entering strings.
Once a string is entered the program will use the function mytoc() to return a double pointer containing all the tokens in the input string.
This double pointer is then printed to the screen.
Once the program is done printing the '$' will display again saying that you can enter a new input.
To exit the program enter 'exit'.

# Files in directory

test.c

Contains the functions myStrCmp() and main(). This c file has the while loop that drives the program until it is prompted to exit. This file includes the mytoc.h file to use the mytoc function.
The function myStrCmp() was derived from code found at https://stackoverflow.com/questions/22973670/creating-my-own-strcmp-function-in-c. 

mytoc.c

Contains the fnctions subStr(), getNumberOfTokens(), and mytoc().
The function subStr() was derived from code found in strcopy.c found in the directory printDemo. subStr() returns a copy of a substing.
The function getNumberOfTokens() looks through the input string and counts the number of tokens in that string. This function is used to know how much space to allocate.
The function mytoc() breaks the input string into into several char arrays each array being one token.

mytoc.h

Header file that contains the function mytoc().

Makefile

Makefile used to compile and run the program.



