#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max1=0,max2=0;
    for(int j=0;j<size;j++){
        if(arr[j]>max1){
            max1=arr[j];
        }
        else if(arr[j]>max2 && arr[j]<max1)
        max2=arr[j];
    }
    printf("Second highest salary : %d",max2);
    return 0;
}