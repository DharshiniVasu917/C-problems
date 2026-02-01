#include <stdio.h>
int main() {
    int n,level;
    scanf("%d",&n);
    int i=0,unsafeCount=0,streak=0,breakdownPoint=-1;
    while (i<n) {
        scanf("%d",&level);
        if (level>70) {
            unsafeCount++;
            streak++;
            if (streak==3 && breakdownPoint==-1) {
                breakdownPoint=i+1; }
        } else {
            streak=0; }
        i++; }
    if (breakdownPoint!=-1) {
        printf("Breakdown At Reading: %d\n",breakdownPoint);
    } else {
        printf("Breakdown At Reading: Not Occurred\n");
    }
    printf("Unsafe Readings: %d", unsafeCount);

    return 0;
}
