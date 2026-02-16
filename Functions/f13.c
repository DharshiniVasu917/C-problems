#include<stdio.h>
int power(int n,int p){
    int b=1;
    for(int i=1;i<=p;i++)
    b=b*n;
    printf("%d",b);
   return b;
}
int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    power(n,p);
    return 0;
}