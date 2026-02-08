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
    int max=0,min=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j==0){
                max=arr[i][j];
                min=arr[i][j];

            }
            else{
                if(arr[i][j]>max)
                max=arr[i][j];
                if(arr[i][j]<min)
                min=arr[i][j];
            }
        }
    }
        int diff=0;
        for(int y=0;y<r;y++){
            for(int x=0;x<c;x++){
                if(y!=x){
                    int difft=max-min;
                    if(difft<0){
                        difft=-difft;
                    }
                    if(difft>diff){
                        diff=difft;
                    }
                }
            }
        }
      printf("%d",diff);   
}