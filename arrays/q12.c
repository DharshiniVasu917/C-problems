#include<stdio.h>
int main(){
    int size,sum,f=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d %d\n",arr[i],arr[j]);
                f=1;
                break;
             }

        }
          if(f) break;
    }
     if(!f)
     printf("No pair");
     return 0;
}