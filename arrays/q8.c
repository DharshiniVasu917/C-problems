# include<stdio.h>
int main(){
    int size,i,j,k;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
      scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=k;i<size;i++){
       printf("%d ",arr[i]);
    }
        for(j=0;j<k;j++){
        //  printf("%d",arr[i]);
          printf("%d ",arr[j]);}
    
    return 0;
}