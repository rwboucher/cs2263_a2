// sentiment1.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>
#define WORD_SIZE 20
#define MAX_LINE_LENGTH 500

int main(int argc, char ** argv)
{
    // Get the word to search for
    char* getWord[WORD_SIZE];
    printf("Please enter the word to search for: ");
    fgets(*getWord, WORD_SIZE, stdin);
    printf("Search word: %s", *getWord);
    printf("\n");
    
    // Open the file to be searched
    FILE* fileHandle;
    fileHandle = fopen(argv[1], "r");
    char oneLine[MAX_LINE_LENGTH];

    // Initialize variables
    int reviewVal = 0, same = 99;
    char* tokenized[80];
    int reviewTotal = 0, hits = 0, reviewAvg = 0;

    while((fgets(oneLine, sizeof(oneLine), fileHandle)) != NULL)
    //printf("%s\n", oneLine);
    {
        int i = 0;
        tokenized[i] = strtok(oneLine, " ");
        reviewVal = atoi(tokenized[i]);
        
        while(tokenized[i] != NULL)
        {
            i++;
            tokenized[i] = strtok(NULL, " ");
            if(tokenized[i] != NULL)
            {
                same = strcasecmp(*getWord, tokenized[i]);
                printf("getWord: %s\n", *getWord);
                printf("same: %d\n", same);
                printf("tokenized: %s\n\n", tokenized[i]);
                if(same == 0)
                {
                    hits++;
                    reviewTotal+=reviewVal;                    
                }
            }
                    
        } 
    }
    
    printf("%s appeared %d times\n", *getWord, hits);
    fclose(fileHandle);   
}
