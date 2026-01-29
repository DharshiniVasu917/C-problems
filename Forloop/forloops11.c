# include<stdio.h>
int main(){
    int n,sum=0,digit;
    scanf("%d",&n);
    for(int i=n;n!=0;n=n/10){
        digit=n%10;
        sum=sum+digit;
        
    }printf("%d",sum);
    return 0;
}