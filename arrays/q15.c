#include<stdio.h>
int main(){
    int size,min=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
    if(arr[i]!=0){
        printf("%d ",arr[i]);
        min++;
    }
    }
    for(int j=0;j<(size-min);j++){
        printf("0 ");
    }

    return 0;
}