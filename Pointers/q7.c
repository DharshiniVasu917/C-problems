#include <stdio.h>

int main() {
    char str[100];
    scanf("%s",&str);
    char *start=str;
    char *end=str;
    while (*end!='\0') {
        end++;
    }
    end--;
    int pal=1;
    while (start<end) {
        if (*start!=*end) {
            pal=0;
            break;
        }
        start++;
        end--;
    }
    if (pal==1) {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}
