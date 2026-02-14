#include<stdio.h>
int main(){
    int size,index=-1;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int *p=arr;
    for(int i=0;i<size;i++){
        if(x==*(p+i)){
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}