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
    char *getVal[ARRAY_SIZE] = {NULL};
    enterWord(getVal);

    // Open the file to be searched
    FILE *fileHandle;
    fileHandle = fopen("movieReviews.txt", "r");
    char oneLine[MAX_LINE_LENGTH];

    // Search for the entered word
    int reviewVal = 0;
    char* reviewWord[MAX_LINE_LENGTH];
    while(fgets(oneLine, MAX_LINE_LENGTH, fileHandle) != NULL)
    {
        
    }
    



    fclose(fileHandle);


    
}
