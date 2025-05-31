/* 6. Implement a C program to delete a file named "delete_me.txt"? */
#include <stdio.h>
int main(){
    const char* file = "delete_me.txt";
    if(remove(file)==0){
        printf("File '%s' is successfully deleted", file);
    }else{
        perror("Error deleting the file");
    }
    return 0;
}