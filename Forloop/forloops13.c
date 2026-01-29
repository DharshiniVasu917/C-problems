#include<stdio.h>
int main(){
    int n,m,i,sum=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++){
        if(i%n==0){
            sum=sum+i;
        }
    }printf("%d",sum);
     return 0;
}