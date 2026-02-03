#include<stdio.h>
int main(){
    int size,dup=0,count=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        dup=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                dup=1;
            }
        }
        if(dup==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}