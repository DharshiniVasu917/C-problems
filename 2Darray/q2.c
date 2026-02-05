#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max1=0,max2=0,min1=0,min2=0,a,b;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          if(arr[i][j]>max1){
            max1=arr[i][j];
          }
          else if(arr[i][j]>max2){
            max2=arr[i][j];
          }
          else if(arr[i][j]<min1){
            min1=arr[i][j];
          }
          else if(arr[i][j]<min2){
            min2=arr[i][j];
          }

          
        }
    }
         a= max1*max2;
         b=min1*min2;
          if(a>b){
            printf("%d",a);
          }
          else{
            printf("%d",b);
          }
        return 0;
}