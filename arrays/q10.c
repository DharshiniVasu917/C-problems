#include<stdio.h>
int main(){
    int size,max=-1;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=size-1;i>=0;i--){
        int temp=arr[i];
        arr[i]=max;
        if(temp>max){
            max=temp;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);}
        printf("%d",max);
        return 0;
}