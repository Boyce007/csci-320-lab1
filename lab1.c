#include <string.h>
#include <stdio.h>
#include "lab1.h"

char* readString(char* filename) {

    FILE* file =  fopen(filename,"r");
    if (file == NULL) {
        fprintf(stderr ,"No file is found");
    }
    char* str = (char*) malloc(MAX_LINE_LEN *sizeof(char));
    if (str != NULL) {
        fgets(str,MAX_LINE_LEN,file);
        fclose(file);
    }
    return str;

}

char* explode(char* input) {
    int length = strlen(input);
    int explodedLength = (length*(length+1))/2 +1;
    char* exploedString = (char*) malloc(explodedLength* sizeof(char));
    if (exploedString==NULL) {
        fprintf(stderr, "No input is found");
    }
    for(int i = 0;i<length;i++) {
        strncpy(exploedString,input,i);
    }
    return exploedString;
}


