# include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    
    switch(age){
        case 1:
        if(age<= 5)
        printf("5000");
        else if(age>5){
            printf("3000");
        break;}
        case 2:
        if(age<=5)
        printf("9000");
        else if(age>5){
        printf("7000");}
        break;
        
        
    }
    return 0;
}