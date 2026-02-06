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
    int pro2=0,index=-1;
    for(int i=0;i<r;i++){
        int pro1=1;
        for(int j=0;j<c;j++){
            pro1=pro1*arr[i][j];

        }
        if(pro1>pro2){
            pro2=pro1;
            index=i;
        }


    }
    printf("%d",index);
    return 0;
}