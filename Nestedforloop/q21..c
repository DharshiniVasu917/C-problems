#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int size=2*n-1;
    for (int row=0;row<size;row++) {
        for (int col=0;col<size;col++) {
            int top=row;
            int bottom=size-1-row;
            int left=col;
            int right=size-1-col;
            int min=top;
            if (bottom<min)min=bottom;
            if (left<min)min=left;
            if (right<min)min=right;

            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}