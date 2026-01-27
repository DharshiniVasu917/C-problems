# include<stdio.h>
int main(){
    int orderamt,delivery;
    scanf("%d%d",&orderamt,&delivery);
    switch(delivery){
        case 1:
        printf("50");
        break;
        case 2:
        if(orderamt<1000)
        printf("Delivery ₹100");
        else if(orderamt>=1000)
        printf("Free Delivery");
    }
    return 0;
}