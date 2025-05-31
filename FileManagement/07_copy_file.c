/* 7. Write a C program to copy the contents of one file to another? */
#include <stdio.h>
int main(){
    FILE *src, *dest;
    int ch;

    char* sourceFile = "source.txt";
    char* destFile = "dest.txt";
    src = fopen(sourceFile, "r");
    if(src == NULL){
        perror("Error Opening source file");
        return 1;
    }

    dest = fopen(destFile, "w");
    if(dest == NULL){
        perror("Error creating destination file");
        fclose(src);
        return 1;
    }

    while((ch = fgetc(src)) != EOF){
        fputc(ch, dest);
    }

    printf("File copied successfully from source to destination");
    fclose(src);
    fclose(dest);
}