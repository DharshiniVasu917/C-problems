# include<stdio.h>
int main(){
    int n,t,rem,arms=0;
    scanf("%d",&n);
    t=n;
    for(int i=n;n!=0;n=n/10){
        rem=n%10;
        arms=(rem*rem*rem)+arms;

    }
    if(t==arms){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}