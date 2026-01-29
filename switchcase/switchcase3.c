# include<stdio.h>
int main(){
    int acctype,balance,amount;
    scanf("%d \n %d \n %d",&acctype,&balance,&amount);
    switch(acctype){
        case 1:
        if(balance>=amount){
            printf("Transaction Successful");
        }
        else{
            printf("Insufficent Balance");
        }
        break;
        case 2:
        if(amount<=5000){
            printf("Transaction Successful");
        }
        else{
            printf("Limit Exceeds");
        }
        break;
    }
    return 0;
}