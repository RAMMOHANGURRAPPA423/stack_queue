#include<stdio.h>
#define N 2
#define M 3
int main(){
    int arr[N][M]={1,2,3,4,5,6};
    int i,j;
    int *p=&arr[0][0];
   
    for(p=&arr[0][0];p<=&arr[1][2];p++)
    printf("%d",*p);
}
