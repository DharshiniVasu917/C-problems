# include<stdio.h>
int main(){
    int size,i,j;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
      scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        int dup=0;
        for(j=0;j<i;j++){
        if(arr[i]==arr[j]){
            dup=1;
            break;
        }
    }
    if(dup==0){
        printf("%d",arr[i]);
    }
}
    return 0;
}
