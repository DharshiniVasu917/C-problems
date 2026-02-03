# include<stdio.h>
int main(){
    int n,n1,datapack,sum=0;
    scanf("%d%d",&datapack,&n);
    int overused=0,days=0;
    while(n--){
        scanf("%d",&n1);
       sum=sum+n1;
        if(sum<=datapack){
            days++;
        }
    
        sum=sum-datapack;
        overused=1;
        days++;
         break;
    
    }
    if(days>n){
    printf("Exhausted Day:Not exhausted\n");
    printf("Overused Data:%d",overused);}
    else{
    printf("Exhausted Day:%d\n",days);
    printf("Overused Data:%d",overused);}


    return 0;
}