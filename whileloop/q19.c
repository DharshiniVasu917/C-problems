#include<stdio.h>
int main(){
    int maxcapacity, n,n1;
    scanf("%d%d",&maxcapacity,&n);
    int rejected=0,treat=0;
    while(n--){
        scanf("%d",&n1);
        if(treat+n1<=maxcapacity){
          treat=treat+n1;
        }
        else{
            rejected=rejected+n1;
        }
    }
    printf("Treated patients :%d\n",treat);
    printf("Rejected patients :%d",rejected);
    return 0;
}