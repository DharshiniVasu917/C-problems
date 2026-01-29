# include<stdio.h>
int main(){
    int plan,paymode,c;
    scanf("%d%d",&plan,&paymode);
    switch(plan)
    {
        case 1:
        if(paymode==11||paymode==12){
        c=(199-20);
        printf("%d",c);
        }
        else if(paymode==13)
        printf("199");
        break;
        case 2:
         if(paymode==11||paymode==12){
        c=(399-20);
        printf("%d",c);
        }
        else if(paymode==13)
        printf("399");
        break;
    }
    return 0;
}