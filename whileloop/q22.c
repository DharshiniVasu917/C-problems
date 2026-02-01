#include <stdio.h>

int main() {
    int n, n1;
    scanf("%d", &n);

    int i=0,totalFailures=0,currentStreak=0,lockAttempt=-1;
    while (i<n) {
        scanf("%d",&n1);
        if (n1==0) {
            totalFailures++;
            currentStreak++;
            if (currentStreak==3 && lockAttempt==-1) {
                lockAttempt=i+1;
            }
        } else {
            currentStreak=0;
        }
        i++;}
    if (lockAttempt!=-1) {
        printf("Lock Triggered At Attempt: %d\n",lockAttempt);
    } else {
        printf("Lock Triggered At Attempt: Not Locked\n");
    }
    printf("Total Failed Attempts: %d",totalFailures);
    return 0;
}
