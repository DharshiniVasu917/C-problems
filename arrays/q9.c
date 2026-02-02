#include<stdio.h>
int main(){
    int size,max=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",arr[i]);
    }
    for(int i=size-1;i>=0;i--){
            if(arr[i]>=max){
                max=arr[i];
                printf("%d",max);
            
            }

    }
    return 0;
}