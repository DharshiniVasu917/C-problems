#include<stdio.h>
int multiplication(int n){
   int  m=1;
   for(int i=1;i<=10;i++){
    m=n*i;
    printf("%d x %d=%d\n",n,i,m);
   }
   return n;

}
int main(){
    int n;
    scanf("%d",&n);
    multiplication(n);
    return 0;
}