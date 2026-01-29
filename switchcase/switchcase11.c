# include<stdio.h>
# include<stdio.h>
int main(){
    int ptype;
    scanf("%d",&ptype);
    float data;
    scanf("%f",&data);
    switch(ptype){
        case 1:
        if(data<=1)
        printf("Normal speed");
        else if(data>1){
        printf("speed Reduced");}
        break;
        case 2:
         if(data<=2)
        printf("Normal speed");
        else if(data>2){
        printf("Extra charges applied");}
        break;
        default:
        printf("Extra charges applied");
        break;
        
    }
    return 0;
}