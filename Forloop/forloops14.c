# include<stdio.h>
int main(){
    int n,i,count=0,rem;
    scanf("%d",&n);
    for(i=n;n!=0;n=n/10){
     rem=n%10;
    if(rem%2==0){
    count++;}}
    printf("%d",count);
    return 0;
}