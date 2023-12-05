#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>

void prompt(); // Function to display the shell prompt
char *read_command(); // Function to read user input
void execute_command(char *command); // Function to execute the command
void handle_errors(); // Function to handle errors

#endif
