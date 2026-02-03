#include<stdio.h>
int main(){
    int size,count=0;
    float sum=0,average;
   scanf("%d",&size);
   int arr[size];
   for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
   } 
   average=sum/size;
   for(int i=0;i<size;i++){
    if(arr[i]>average){
        count++;
    }

   }
   printf("%d",count);
   return 0;
}