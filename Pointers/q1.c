#include<stdio.h>

void swap(int *n,int *m){
    int temp=*n;
    *n=*m;
    *m=temp;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
     printf("Before swap:%d %d",a,b);
    swap(&a,&b);
    printf(" After swap:%d %d",a,b);
     
    return 0;
}