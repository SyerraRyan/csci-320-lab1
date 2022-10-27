/*
 * Implement your solution in this file
 *
 */
#include "lab1.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX_LINE_LEN 100

char* readString(char* fileName){
    FILE* textfile;
    char* readAll;

    readAll = malloc(MAX_LINE_LEN*sizeof(char())+1);

    textfile = fopen(fileName,"r");

    strcpy(readAll, fgets(readAll, MAX_LINE_LEN,textfile));

    fclose(textfile);

    return readAll;

}

char* mysteryExplode(const char* word){

    int sizeOfWord = strlen(word)-1;

    int explodeSize = ((sizeOfWord*(sizeOfWord +1))/2);

    char* memAlloc = calloc(explodeSize + 1,1);



    for(int i = 0; i < sizeOfWord; i++){
        for(int j = 0; j <= i; j++){
            strcpy(memAlloc, strncat(memAlloc,&word[i],1));
        }

    }

    return memAlloc;


}
