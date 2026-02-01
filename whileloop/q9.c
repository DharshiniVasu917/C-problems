# include<stdio.h>
int main(){
    int n,n1,fuel;
    scanf("%d%d",&fuel,&n);
    int i=0,trip=0;
    while(i<n){
        scanf("%d",&n1);
       if (fuel>=n1){
        fuel=fuel-n1;
        trip++;}
         else{
          break;
         }
      i++;
    }
    printf("Completed Trips:%d\n",trip);
    printf("Remaining Fuel:%d",fuel);

    return 0;
    
}