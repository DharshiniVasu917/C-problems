  # include<stdio.h>
int main(){
    int n,i,count=0,total=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if( n%i==0){
            count++;
        } 
        if(i<n){
            i++;
        }
    else
    if (count==2){
        total++;}
        n++;
        i=1;
        count=0;
    

}printf("%d",total);
return 0;
}
  
