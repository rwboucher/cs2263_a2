// sentiment1.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define ARRAY_SIZE 60
#define MAX_LINE_LENGTH 500


void enterWord(char* retVal[])
{
  char searchWord[ARRAY_SIZE];
  printf("Please enter the word to search for: ");
  fgets(searchWord, ARRAY_SIZE, stdin);
  *retVal = searchWord;
 }

int main(int argc, char ** argv)
{
    // Get the word to search for
    char* getVal[ARRAY_SIZE] = {NULL};
    enterWord(getVal);

    // Open the file to be searched
    FILE* fileHandle;
    fileHandle = fopen(argv[1], "r");
    char oneLine[MAX_LINE_LENGTH];

    // Search for the entered word
    int reviewVal = 0;
    char* reviewWord[MAX_LINE_LENGTH];
    char* tokenized[80];
    //while(
    fgets(oneLine, sizeof(oneLine), fileHandle);
    printf("%s", oneLine);
    tokenized[0] = strtok(oneLine, " ");
    tokenized[1] = strtok(NULL, " ");
    printf("Got the token.\n");
    printf("%s\n", tokenized[0]);
    printf("%s\n", tokenized[1]);
    // != NULL)
    
        
    
    



    fclose(fileHandle);


    
}
