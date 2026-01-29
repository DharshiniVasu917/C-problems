# include<stdio.h>
int main(){
    int n,i,dec=0,wt=1;
        scanf("%d",&n);
        for(i=n;n!=0;n=n/10){
            int rem=n%10;
            dec=dec+rem*wt;
            wt=wt*2;

        }printf("%d",dec);
        return 0;
}