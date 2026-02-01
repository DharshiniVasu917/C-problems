# include<stdio.h>
int main(){
    int n,n1;
    scanf("%d",&n);
    int i=0,emi=0,count=0;
    while(i<n){
        scanf("%d",&n1);
        if(n1==0){
            count++;
        }
        if(count>emi){
            emi= count;
        }
        else {
            count=0;
        }
        i++;
    }
    printf("Longest Default Streak:%d\n",emi);
    return 0;
}