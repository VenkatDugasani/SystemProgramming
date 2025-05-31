/*Question: Implement a C program to create a new directory named "Test" in the current
directory? */
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(){
    int status;
    const char* dir_name = "Test";
    status = mkdir(dir_name, 0755);
    if(status == 0){
        printf("Directory '%s' is created successfully.\n", dir_name);
    }else{
        perror("mkdir failed");
    }
    return 0;
}
