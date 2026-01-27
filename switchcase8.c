# include<stdio.h>
int main(){
    int attendance,marks;
    scanf("%d%d",&attendance,&marks);
    if(attendance>=75){
        if(marks>=75)
        printf("Distinction");
        else if(marks>=50 && marks<=74)
        printf("Pass");
        else
        printf("Fail");
    }
    else{
        printf("Fail");
    }
  return 0;}