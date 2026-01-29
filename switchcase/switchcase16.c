# include <stdio.h>
int main(){
    int w,age;
    scanf("%d%d",&w,&age);
    switch(w){
        case 1:
        if(age<=5)
        printf("₹1500");
        else if(age>5)
        printf("₹2500");
        break;
        case 2:
        if(age<=5)
        printf("₹4000");
        else if(age>5)
        printf("₹6000");
        break ;
        
    }
    return 0;
}