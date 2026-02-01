# include<stdio.h>
int main(){
    int n,n1,atm;
    scanf("%d%d",&atm,&n);
    int i=0,withdrawls=0,rem=0;
    while(i<n){
    scanf("%d",&n1);
    if(atm>=n1){
        atm=atm-n1;
        withdrawls++;
    }
    else{
        break;
    }
     i++;

   }
   printf("Successful Withdrawls:%d\n",withdrawls);
   printf("Remaining cash:%d",atm);
  return 0;
}