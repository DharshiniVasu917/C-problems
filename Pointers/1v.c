#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    scanf("%d",&index);
    int *p=arr;
    for(int i=index;i<size;i++){
        printf("%d ",*(p+i));

    }
    return 0;
}