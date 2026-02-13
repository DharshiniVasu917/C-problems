#include<stdio.h>
void large(int arr[],int size){
     int max=0;
    int *p=arr;
    for(int i=0;i<size;i++){
    if(*(p+i)>max){
        max=*(p+i);
      }
    }
    printf("%d",max);
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
     large(arr,size);
     
    return 0;
}