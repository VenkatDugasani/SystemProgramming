// Question: Develop a C program to open an existing text file and display its contents?
#include <stdio.h>
int main(){
    FILE* fp;
    fp = fopen("hello.txt", "r");
    if(fp == NULL){
        printf("file not found/ couldn't open");
        return 1;
    }
    char ch;
    while((ch = fgetc(fp))!= EOF){
        putchar(ch);
    }
    return 0;
}