# include<stdio.h>
int main(){
    // int n;
    // scanf("%d",&n);
    int marks;
    scanf("%d",&marks);
    switch(marks/10){
        case 9:
        printf("Grade A");
        break;
        case 8:
            printf("Grade B");
            break;
        case 7:
            printf("Grade C");
            break;
         
         case 6:
            printf("Grade D");
            break;
         
         case 5:
            printf("Grade E");
            break;
         
         case 4:
            printf("Grade F");
            break;
         
         case 3:
            printf("Supplementry");
            break;
         case 2:
         printf("Fail");
        
    }
    return 0;
}