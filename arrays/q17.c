#include<stdio.h>
int main(){
    int size,pal;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);}
        for(int j=size;j>=0;j--){
            if(arr[j]!=arr[size-1-j]){
                pal=0;
            }
        }
            if(pal=1){
                printf("Yes\n");
            }
            else{
                printf("no");
            }
        
    
    return 0;
}