#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


char ** parse_args( char * line ){

  char ** args = calloc(100, sizeof(char *));
  char * sep;
  int i = 0;

  while ( line != NULL ){
    sep = strsep(&line, " ");
    args[i] = calloc(10, sizeof(char *));
    args[i] =  sep;
    i++;
}

  args[i] = NULL;
  return args;
}


int main(int argc, char *argv[]){

  char line[] = "ls -a -l";
  char ** args = parse_args(line);
  execvp(args[0], args);

 return 0;
  
}

    
