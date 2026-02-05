#include<stdio.h>
int main(){
    int r,c,min=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0,avg,count;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
             count++;
             avg=sum/count;
             min=i;
        }
    } 
    printf("%d",min);

}