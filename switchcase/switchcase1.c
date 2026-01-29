# include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k,bi;
    scanf("%d",&k);
    switch(n){
        case 1:
        if(k<=100){
          k=k*3;
          printf("Bill ₹%d",k) ;  
        }
        else{
        bi=((100*3)+(k-100)*5);
        printf(" Bill ₹%d",bi-80);}  
        break;
       
        case 2:
        if(k<=100){
        k=k*7;
        printf("Bill ₹%d",k);
        }
        else{
         bi=((100*7)+(k-100)*10);
        printf("Bill ₹%d",bi);
       
        break;
        }
    }
    return 0;
}