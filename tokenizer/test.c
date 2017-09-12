#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "mytoc.h"

/* compare function for 2 strings */
int myStrCmp(char *a, char *b){
  while(*a && *b && *a == *b){
    a++;
    b++;
  }
  return (unsigned char) (*a) - (unsigned char) (*b);
}

int main(int argc, char **argv){

  char str[1024];
  char delim = ' ';
  char **tokens;

  printf("Program started.\n");
  printf("To exit program type 'exit'.\n");
  
  while(1){
    
    write(0,"$ ",2);

    fgets(str, 1024, stdin);

    if(myStrCmp(str,"exit\n") == 0){ //If input == exit
      printf("Goodbye!\n");
      return 0;
    }
    
    tokens = mytoc(str, delim); 

    while(*tokens != 0){ //Print tokens
      printf("%s\n",*tokens);
      tokens++;
    }
  }
  
  return 0;
}
