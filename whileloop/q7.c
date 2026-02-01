#include<stdio.h>
int main(){
    int n,n1,capacity;
    scanf("%d%d",&capacity,&n);
    int criticalhours=0,i=0,sum=0;
    while(i<n){
        scanf("%d",&n1);
        sum=sum+n1;
        if(sum> (capacity*90)/100){
           criticalhours++;

        }
        i++;
    }
    printf("Final Occupied Beds:%d\n",sum);
    printf("Critical Hours:%d\n",criticalhours);
}