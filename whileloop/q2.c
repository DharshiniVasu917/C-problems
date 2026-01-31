# include<stdio.h>
int main(){
    int n,cbal,days,transaction,lbal=0;
    int i=0;
    scanf("%d%d",&n,&cbal);
    while(i<n){
        scanf("%d",transaction);
        cbal+=transaction;
        if(cbal<2000){
             lbal++;
        }i++;
         if(lbal>2){
            lbal=3;
         }
    }    printf("Final Balance:%d\n",cbal);
         printf("Low Balance Days:%d",lbal);
    

    return 0;
}