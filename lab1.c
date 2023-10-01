#include <string.h>
#include <stdio.h>

char* readString(char* filename) {

    FILE* file =  fopen(filename,"r");
    



}
char* substring(char* input, int start, int end ) {
    int c = 0;
    char output; 

    char* outputptr;
    outputptr  = malloc((start- end)*sizeof(char));
    strcat(output,outputptr);
    while (c<start) {
    
    }

    
}
char* explode(char* input) {
    char* result ='\0';
    int length = strlen(input);
    int explodedLength = (length*(length+1))/2 +1;
    char* resultptr = (unsigned char*) malloc(explodedLength* sizeof(char));
    



    // void *memcpy(void *dest, void *src, size_t count);
    // char *strcat(char *dest, const char *src)

}


