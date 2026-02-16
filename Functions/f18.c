#include<stdio.h>
int greatest(int n,int m){
    int gcd=0;
    for(int i=1;i<=n && i<=m ;i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }

    }
    printf("%d",gcd);
    return 0;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    greatest(n,m);
    return 0;
}