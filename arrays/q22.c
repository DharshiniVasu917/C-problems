#include<stdio.h>
int main(){
    int size,peakh=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<size-1;i++){
        if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) ){
            peakh++;
        }
    }
    printf("%d",peakh);
    return 0;
}