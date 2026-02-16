#include<stdio.h>
int power(int n,int m){
    int b=1;
    for(int i=1;i<=m;i++)
        b=b*n;
     printf("%d",b);
     return b;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    power(n,m);
    return 0;
}