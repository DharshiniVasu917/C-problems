#include<stdio.h>
int main(){
    int size,currentstreak=1,maxstreak=1;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<size;i++){
        if(arr[i]>arr[i-1]){
            currentstreak++; 
        }
        else{
            currentstreak=1;
        }
        if(currentstreak>maxstreak){
            maxstreak=currentstreak;
        }
    }
    printf("%d",maxstreak);
    return 0;
}