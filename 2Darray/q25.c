#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++){
        int min,max,total;
        for(int j=0;j<c;j++){
          if(j==0){
            min=arr[i][j];
            max=arr[i][j];

          }
          else{
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
          }
        }
        total=max-min;
        if((total)<=1000){
            count++;
        }

    }
    printf("%d",count);
    return 0;
}