/*5. Develop a C program to rename a file from "oldname.txt" to "newname.txt"?*/
#include <stdio.h>
int main(){
    const char* old_name = "hello.txt";
    const char* new_name = "newhello.txt";
    if(rename(old_name, new_name) == 0){
        printf("file renamed successfully from '%s' to '%s'\n", old_name, new_name);
    }
    else{
        perror("Error renaming the file");
    }
    return 0;
}
