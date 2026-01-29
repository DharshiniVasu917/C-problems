# include <stdio.h>
int main(){
    int t,attempt;
    scanf("%d%d",&attempt,&t);
    switch(attempt){
        case 1:
       if(t>=80)
        printf("Excellent");
        break ;
        case 2:
        if(t>=60)
        printf("Good");
        break ;
        case 3:
        if(t<=59)
        printf("Needs Improvement");
        break ;
        
    }
    return 0;
}