#include<stdio.h>
int amstrong(int n){
    int t=n;
    int ams=0,rem;
    for(int i=n;n!=0;n=n/10){
        rem=n%10;
        ams=(rem*rem*rem)+ams;

    }
    if(t==ams){
        printf("Amstrong");
    }
    else{
        printf("Not Amstrong");
    }
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    amstrong(n);
    return 0;
}