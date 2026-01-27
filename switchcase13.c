# include<stdio.h>
int main(){
    int loan,creditscore;
    scanf("%d%d",&loan,&creditscore);
    
    switch(loan){
        case 1:
        if(creditscore>=100)
        printf("Approved");
        else if(creditscore>=650 && creditscore<=699){
        printf("Manual Review");}
            // else if(trip>=11 && trip <=30){
            //   printf("₹800") ; 
            // }
        break;
        
        case 2:
        if(creditscore>=700)
        printf("Approved");
        else if(creditscore<700){
        printf("Rejected");}
     
        
        
    }
    return 0;
}