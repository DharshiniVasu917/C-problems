# include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=100 && a>90)
    printf("Grade A");
    else if(a<=90 && a>=75 )
    printf("Grade B");
    else if(a<=50 && a>=74 )
    printf("Grade C");
    else 
    printf("Fail");
    return 0;
}