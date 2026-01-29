# include<stdio.h>
int main(){
    int n,i,sum=0,fact=1,rem;
    scanf("%d",&n);
    for(i=n;n!=0;n=n/10){
        rem=n%10;
        fact=fact*rem;
        sum=sum+fact;
    }
        if(n==sum)
            printf("yes %d",sum);
        else
        printf("No %d",sum);
    
    return 0;
}