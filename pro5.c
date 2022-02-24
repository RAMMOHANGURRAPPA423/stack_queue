#include <stdio.h>
struct employee{
    int id;
    char name[5];
    float salary;
}var;
int main(){
    printf("%d",sizeof(var));
}
