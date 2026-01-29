# include <stdio.h>
int main(){
    int type,t,rate;
    scanf("%d%d",&type,&t);
    switch(type){
        case 1:
        rate =10;
        t=t*rate;
        printf("Parking Fee ₹%d",t);
        break ;
        case 2:
        rate =20;
        t=t*rate;
        printf("Parking Fee ₹%d",t);
        break ;
        default:
        rate =20;
        t=t*rate;
        printf("Parking Fee ₹%d",t);
        break ;
        
    }
    return 0;