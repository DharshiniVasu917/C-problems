#include<stdio.h>
int main(){
    int size,pos=1,neg=1;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
 
        for(int j=0;j<size;j++){
            if(arr[j]<0){
             neg=neg*arr[j];

            }
            else{
                pos=pos*arr[j];
              
            }
        }
        if(pos<neg){
           printf("%d\n",neg);
        }
        else{
             printf("%d\n",pos);
        }
    return 0;
}