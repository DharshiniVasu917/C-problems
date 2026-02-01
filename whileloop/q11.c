#include<stdio.h>
int main(){
    int n,n1;
    scanf("%d",&n);
    int i=0,delays=0,days=0,sum=0;
    while(i<n){
        scanf("%d",&n1);
        if(n1>2){
            days++;
        }
        delays=delays+n1;
        i++;
    }
    printf("Total Delay : %d\n",delays);
    printf("Delayed Days : %d",days);
}