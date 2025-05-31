/* Question: Write a C program to check if a file named "sample.txt" exists in the current directory?*/
#include <stdio.h>
int main(){
    const char* filename = "sample.txt";

    FILE* fd = fopen("sample.txt", "r");

    if(fd == NULL){
        printf("file '%s' is not present in the directory", filename);
    }
    else{
        printf("file '%s' is present in the directory", filename);
    }
    return 0;
}