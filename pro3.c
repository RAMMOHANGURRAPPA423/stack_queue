#include <stdio.h>
#include<string.h>
struct student{
    int id;
    char name[20];
    float percentage;
};
void fun(struct student record);
int main(){
    struct student record;
    record.id=1;
    strcpy(record.name ,"raju");
    record.percentage=86.5;
   fun(record);
    return 0;
}
void fun(struct student record){
    printf("id is :%d\n",record.id);
    printf("name is %s\n",record.name);
    printf("percentage is %f\n",record.percentage);
}
