#include "shell.h"

int main(int ac, char **argv){
  char *prompt = "(Root) $ ";
  char *lineptr;
  size_t n = 0; 

  (void)ac; (void)argv;

  printf("%s", prompt);
  getline(&lineptr, &n, stdin);
  printf("%s\n", lineptr);

    while (1){
      printf("%s", prompt);
      getline(&lineptr, &n, stdin);
      printf("%s\n", lineptr);

      /* checks if the getline function failed or reached EOF or user use CTRL + D */ 

        if (nchars_read == -1){
            printf("Exiting shell\n");
            return (-1);
    }

  free(lineptr);
  return (0);
}
