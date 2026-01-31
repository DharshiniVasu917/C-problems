# include<stdio.h>
int main(){
    int i,j,k,space;
    for(i=1;i<=4;i++)
    {    
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(space=i*2;space<4*2;space++){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
