# include<stdio.h>
int main(){
    int code,exp,bonous,ts;
    scanf("%d%d",&code,&exp);
    switch(code){
        case 1:
        if(exp<=3)
        printf("50000");
        else{
        bonous=exp*5000;
        ts=50000+bonous;
        printf("%d",ts);}
        break;
        case 2:
        if(exp<=3)
        printf("35000");
        else{
        bonous=exp*5000;
        ts=35000+bonous;
        printf("%d",ts);
        }
    }
    return 0;
}