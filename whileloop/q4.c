#include<stdio.h>
int main(){
    int n,n1;
        scanf("%d",&n);
    int sorder=0,corder=0,i=0;
    while(i<n){
        scanf("%d",&n1);
        if(n1==0)
        corder++;
        else{
            sorder++;
        }
        i++;
    }
    printf("Successful :%d \n",sorder);
    printf("cancelled: %d",corder);
        if(sorder>corder){
            printf("\nStatus : Safe \n");
        }
        else{
            printf("\nstatus : Risk\n");
        }
        return 0;
    }