# include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>=65 && a<=90)
    printf("Upper case letter");
    else {
        printf("Not a upper case letter");
    }
    return 0;
}