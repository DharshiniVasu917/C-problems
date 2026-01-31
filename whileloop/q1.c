#include<stdio.h>
int main(){
    int n,nl;
    scanf("%d",&n);
    int v=0;
    int cs=0,ls=0;
    while(n>0){
        scanf("%d",&nl);
        if(nl>70)
        v++;
        cs++;
        if(cs>ls){
            ls=cs;
        }
        else{
            cs=0;

        }n--;
    }
        printf("Noise Violations:%d",ls);
        printf("\n");
        printf("Longest Violation Streak:%d",v);
     return 0;
}