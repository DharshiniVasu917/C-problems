#include<stdio.h>
int main(){
    int capacity, n,n1;
    scanf("%d%d",&capacity,&n);
    int safe=0,failure=0;
    while(n--){
        scanf("%d",&n1);
        if(n1<capacity){
            safe++;
        }
        else{
            failure++;
        }
    }
    printf("Safe Hours :%d\n",safe);
    printf("Failure Count:%d",failure);
    return 0;
}