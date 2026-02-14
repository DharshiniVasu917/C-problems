#include<stdio.h>
int main(){
    int size,temp;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int*p=arr;
    int *s=arr+size-1;
    for(int i=0;i<size/2;i++){
        temp=*(p+i);
        *(p+i)=*(s-i);
        *(s-i)=temp;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}