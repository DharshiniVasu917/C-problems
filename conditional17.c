# include<stdio.h>
int main(){
    int units;
    scanf("%d",&units);
    if(units>=100){
    units=units*5;
    printf("Bill amount = %d",units);}
    else{
     if(units<=100)
     printf("Bill amount = %d",units);}
    
    return 0;
}
