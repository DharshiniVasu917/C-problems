# include<stdio.h>
int main(){
    int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
     if(a==b==c)
     printf("Equilateral Triangle");
     else if(a==b!=c)
     printf("Isosles Triangle");
     else
     printf("Not a tringle");
    return 0;
}