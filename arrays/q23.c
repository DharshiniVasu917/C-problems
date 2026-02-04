#include<stdio.h>
int main(){
    int size,min=-1;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
   for(int j=0;j<size;j++){
        if(arr[j]>0){
            if(min==-1||arr[j]<min)        
               min=arr[j];
        }

    }
    if(min==-1){
        printf("-1");
    }
    else{
    printf("%d",min);}
    return 0;
}