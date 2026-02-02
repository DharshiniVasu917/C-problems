#include<stdio.h>
int main(){
    int size,x1=0,total=0,n;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    x1=x1+arr[i];
}
    total=(n*(n+1))/2;
    printf("%d",total-x1);
  return 0;
    
}