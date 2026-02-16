#include<stdio.h>
int leapyear(int n){
    if(n%400==0 || (n%4==0 && n%100!=0)){
        printf("Leap year");

    }
    else{
        printf("Not Leap Year");
    }
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    leapyear(n);
    return 0;
}