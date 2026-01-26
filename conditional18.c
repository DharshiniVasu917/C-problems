# include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>=48 && c<=57)
    printf("Digit");
    else
    printf("special characters");
    return 0;
}