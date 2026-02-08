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
   int max=0;
   int mfv=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           int  count=arr[i][j];
           int current=0;
            for(int x=0;x<r;x++){
                for(int y=0;y<c;y++){
                  if(arr[x][y]==count){
                  current++;
                  }
                }
            } 
            if(current>max){
                max=current;
                mfv=count;
            }
        }
    }
    printf("%d",mfv);
    return 0;
}