#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int j=0;j<size;j++){
        if(arr[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even count:%d\n",even);
    printf("Odd count:%d",odd);
    return 0;
}