//Question: Write a C program to create a new text file and write "Hello, World!" to it?

#include <stdio.h>
int main(){
    FILE* fd = fopen("hello.txt", "w");
    if(fd == NULL){
        perror("File not found/ Creation failed");
        return 1;
    }
    fprintf(fd,"Hello World\n");
    fclose(fd);
    printf("file created successfully");
    return 0;
}