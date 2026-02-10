#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
   fgets(str,sizeof(str),stdin);
   int n = 0;
   while(str[n] != '\0'){
      n++;
   }
      if(n >= 'A' || n <= 'Z')
      {
        printf ("Strong password");
      }
      else 
      {
        printf ("Not a strong Password");
      }
    return 0;

}
