# include <stdio.h>
int main(){
    int r,time;
    scanf("%d%d",&r,&time);
    switch(r){
        case 1:
        printf("Full Access");
        break ;
        
        case 2:
        if (time >= 9 && time <= 20) {
            printf("Limited Access\n");
        } else {
            printf("Access Denied\n");
            }
        break ;
        
    }
    return 0;
}