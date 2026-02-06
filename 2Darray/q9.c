#include<stdio.h>
int main(){
    int r,c,balance=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int ec=0,oc=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]%2==0){
                ec++;
              
            }
            else{
                oc++;
            }
        }
        if(ec==oc){
            balance++;
        }
    }
    printf("%d",balance);
    return 0;
}