#include<stdio.h>
int main(){
    int n,maxweight,n1;
    scanf("%d%d",&maxweight,&n);
    int people=0,overload=0,sum=0;
    while(n--){
        scanf("%d",&n1);
        if(overload+n1<maxweight)
        { overload=overload+n1;
        people++;}
         else{
             overload=1;
         }
    }
        printf("People Entered : %d\n",people);
        if(overload==1)
        printf("Overload Status : Yes");
        else
        {
        printf("Overload status : No");
        }
        return 0;
}