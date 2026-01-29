#include <stdio.h>
int main(){
    int num,count,sum=0;
    scanf("%d",&num);
    for(count=1;count<num;count++)
    {
        if(num%count==0){
        // printf("%d\n",count);
        sum=sum+count;
        }
    }
    if(sum==num)
        printf("yes");
        else
        printf("No");
    
    return 0;
}