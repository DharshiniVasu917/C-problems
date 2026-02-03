#include<stdio.h>
int main(){
    int size,none=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                none=1;
                break;
            }
        }
     if(none)break;
    }

   if(!none) {
        printf("-1");
    }
    return 0;
}