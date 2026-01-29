# include <stdio.h>
int main(){
    int c,e;
    scanf("%d%d",&e,&c);
    switch(e){
        case 1:
       if(c<=30)
        printf("Eligible");
        else if(c>30)
        printf("Eligible with extra fee");
        break ;
        case 2:
        if(c<=30)
        printf("Eligible");
        else if(c>30)
        printf("Not Eligible");
        break ;
         case 3:
        if(c<=30)
        printf("Eligible");
        break ;
        
    }
    return 0;
}
