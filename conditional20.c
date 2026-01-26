# include<stdio.h>
int main(){
    int a,b,l;
    scanf("%d%d",&a,&b);
    int k;
    scanf("%d",&k);
    switch(k){
        case 1:
         l=a+b;
        printf("Result = %d",l);
        break;
        case 2:
        l=a-b;
        printf("Result = %d",l);
        break;
        case 3:
         l=a*b;
        printf("Result = %d",l);
        break;
        case 4:
         l=a/b;
        printf("Result = %d",l);
        break;


    }
    return 0;
}