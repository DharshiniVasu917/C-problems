# include<stdio.h>
int main(){
    int walletb,n,n1;
    scanf("%d%d",&walletb,&n);
    int purchase=0,sum=0,x=0;
    while(n--){
        scanf("%d",&n1);
        if(walletb>=n1){
        walletb=walletb-n1;
        purchase++;}
        else{
            break;
        }
         
    }
    printf("Successful purchase: %d\n",purchase);
    printf("Final Balance : %d",walletb);
    return 0;

}