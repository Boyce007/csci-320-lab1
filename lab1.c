#include <string.h>
#include <stdio.h>
#include "lab1.h"
#include <stdlib.h>

char* readString(char* filename) {

    FILE* file =  fopen(filename,"r");
    if (file == NULL) {
        fprintf(stderr ,"No file is found");
    }
    char* str = (char*) malloc(MAX_LINE_LEN *sizeof(char));
    if (str != NULL) {
        fgets(str,MAX_LINE_LEN,file);
        fclose(file);
} else {
    free(str);
}

    return str;

}

char* mysteryExplode(const char* str) {
    int length = strlen(str);
    int explodedLength = (length*(length+1))/2 +1;
    char* explodedString = (char*) malloc(explodedLength* sizeof(char));
    if (explodedString==NULL) {
        fprintf(stderr, "No input is found");
    }
    for(int i = 0;i<length;i++) {
        strncpy(explodedString,str,i);
        fprintf("%s",explodedString);
    }
    return explodedString;
}


