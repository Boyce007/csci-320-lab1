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
    char* exploedtring ='\0';
    int length = strlen(input);
    int explodedLength = (length*(length+1))/2 +1;
    char* resultptr = (unsigned char*) malloc(explodedLength* sizeof(char));
    



    // void *memcpy(void *dest, void *src, size_t count);
    // char *strcat(char *dest, const char *src)

}


