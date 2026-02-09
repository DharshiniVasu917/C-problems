#include<stdio.h>
int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    int n=0, count=0;
    while(str[n]!='\0'){
        n++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            int rep=0;
            for(int k=i;k<j;k++){
                if(str[j]==str[k]){
                    rep=1;
                    break;
                }
            }
            if(rep==1){
                break;
            }
             else{   
          int tcount=j-i+1;
           if(tcount>count){
            count=tcount;
            } 
          }
        }
    }
      printf("%d\n",count);

}