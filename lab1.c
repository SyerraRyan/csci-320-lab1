/*
 * Implement your solution in this file
 *
 */
#include "lab1.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char* readString(char* fileName){
    char* readWord = malloc(MAX_LINE_LEN*sizeof(char));
    FILE* txtfile = fopen(fileName,"r");

    strcpy(readWord, fgets(readWord, MAX_LINE_LEN-1,txtfile));
    fclose(txtfile);
    
    return readWord;

}

char* mysteryExplode(const char* str){

    int stringLength = strlen(word)-1;
    int sizeString = ((stringLength*(stringLength+1))/2);
    char* memSpace = calloc(sizeString,1);

    for(int i = 0; i < stringLength; i++){
        for(int j = 0; j <= i; j++){
            strcpy(memSpace, strncat(memSpace,&str[i],1));
        }
    }

    return memSpace;


}
