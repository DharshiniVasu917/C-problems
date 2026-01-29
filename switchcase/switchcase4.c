#include<stdio.h>
int main(){
    int coach,age,c;
    scanf("%d%d",&coach,&age);
    switch(coach){
        case 1:
        if(age<=18){
            c=300-(300*0.5);

        printf("%d",c);}
        else if(age>=60){
            c=300-(300*0.33);
        printf("%d",c);}
        else{
            printf("300");
        }
        break;

        case 2:
        if(age<=12){
            c=((1000*0.5)-300);
            printf("%d",c);
        }
        else{
             printf("1000");
             break;
        }
    
    }
    return 0;
}