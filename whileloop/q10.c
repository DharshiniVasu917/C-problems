# include<stdio.h>
int main(){
    int n,n1;
    scanf("%d",&n);
    int i=0,inactive=0,r=3;
    while(i<n){
        scanf("%d",&n1);
         if(n1==0)
         inactive++;  
         i++;     
    }
         printf("Inactive Weeks :%d\n",inactive); 
      if(inactive>=r)
         
           printf("Risk Status :High");
        else
            printf("Risk Status :Low");
       return 0;    
}