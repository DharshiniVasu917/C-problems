# include<stdio.h>
int main(){
    int m,a=0,b=1,c;
    scanf("%d",&m);
    printf("\n%d\n%d",a,b);
    for( int i=3;i<=m;i++){ 
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    return 0;
}