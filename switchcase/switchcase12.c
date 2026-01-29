# include<stdio.h>
# include<stdio.h>
int main(){
    int trip,vtype;
    scanf("%d%d",&vtype,&trip);
    
    switch(vtype){
        case 1:
        if(trip==1)
        printf("₹100");
        else if(trip>=2 && trip<=10){
        printf("₹800");}
            else if(trip>=11 && trip <=30){
              printf("₹800") ; 
            }
        break;
        
        case 2:
         if(trip==1)
        printf("₹240");
     
        
        
    }
    return 0;
}