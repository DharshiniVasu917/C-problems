#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
   int total=0;
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
        total+=arr[i];}
    int left=0;
    int result=-1;
    for (int i=0;i<size;i++) {
        int right=total-left-arr[i];
        if (left==right) {
            result=i;
            break;
        } 
        left+=arr[i];
    }
    printf("%d\n",result);
    return 0;
}
