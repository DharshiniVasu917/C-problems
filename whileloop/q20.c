#include <stdio.h>

int main() {
    int n,current,previous;
    scanf("%d",&n);
    int i=1,totalDrops=0,consecutiveDrops=0,crashDay=-1;
    scanf("%d", &previous);
    while (i<n){
        scanf("%d",&current);
        if (current<previous) {
            totalDrops++;
            consecutiveDrops++;
            if (consecutiveDrops==3 && crashDay==-1){
                crashDay=i+1;
            }
        } else {
        consecutiveDrops = 0;
        }
        previous = current;
        i++;
    }
    if (crashDay != -1) {
        printf("Crash Day:%d\n",crashDay);
    } else {
        printf("Crash Day: Not Detected\n");}
    printf("Total Drops:%d\n",totalDrops);
    return 0;
}
