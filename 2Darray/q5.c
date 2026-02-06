#include<stdio.h>
int main(){
    int r,c,index=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int avg,min;
    for(int i=0;i<r;i++){
        int sum=0;
        int count=0;
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
             count++;
            
        }
        avg=sum/count;
        if(avg<min){
            min=avg;
            index=i;

        }
    } 
    printf("%d",index);

}