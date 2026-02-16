#include<stdio.h>
int perfect(int n){
    int a=0,b=1,c=0;
   for(int i=0;i<n;i++){
    if(i<=1){
        c=i;
    }else{
     c=a+b;
     a=b;
     b=c;
    }
    printf("%d ",c);
   }
   return n;
}
int main(){
    int n;
    scanf("%d",&n);
    perfect(n);
}