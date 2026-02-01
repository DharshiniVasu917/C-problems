# include<stdio.h>
int main(){
    int n,n1;
    scanf("%d",&n);
    int overtime=0,burnout=0;
    while(n--){
        scanf("%d",&n1);
        overtime=overtime+n1;
        if(n1>4){
            burnout++;
        }
    }
    printf("Total overtime : %d\n",overtime);
    printf("Burnout Days : %d",burnout);
    return 0;
}