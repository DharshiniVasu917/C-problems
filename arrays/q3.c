#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int assending=1;
     for(int j=1;j<n;j++){
       if(arr[j]>arr[j+1]){
        assending=0;
        break;
       }
    }
       if(assending)
       printf("Yes");
       else
       printf("No");

     
    return 0;

}