#include <stdio.h>
int main() {
    int n,count;
    scanf("%d",&n);
    int i=0,totalMinutes=0,currentStreak=0,longestStreak=0;
    while (i<n) {
        scanf("%d",&count);
        if (count>20) {
            totalMinutes++;
            currentStreak++;
            if (currentStreak>longestStreak) {
                longestStreak=currentStreak;
            }
        } else {
            currentStreak=0;
        }
        i++;
    }
    printf("Congestion Minutes: %d\n",totalMinutes);
    printf("Longest Congestion Streak: %d\n",longestStreak);

    return 0;
}
