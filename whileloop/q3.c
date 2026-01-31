# include<stdio.h>
int main(){
    int n,fstreak=0,n1,count=0;
    int i=0;
    scanf("%d",&n);
   while(i<n){
    scanf("%d",&n1);
      if(n1==0)
      count++;
        if(count>fstreak){
        fstreak=count;}
        else{
          count=0;
        }
         i++;
   }

   printf("Longest Failure Streak:%d",fstreak);
    return 0;
}