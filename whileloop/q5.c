#include <stdio.h>

int main() {
    int mw, n, w, pass=0, i=0, s=0, ov=0;
    scanf("%d %d", &mw, &n);
    while (i<n) {
        scanf("%d", &w);
        if (s+w <=mw) {
            s=s+w;
            pass++;
        } else {
            ov = 1;
        }
        i++;
    }
    printf("Passengers Allowed: %d\n", pass);
    if (ov == 1) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }
    return 0;
}
