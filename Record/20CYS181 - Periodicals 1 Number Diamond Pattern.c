#include <stdio.h>
int main(){
    int a,i,j,k,con=1,val;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a*2-i*2;j++){
            printf(" ");
        }
        val=9;
        for(k=0;k<con;k++){
            printf("%d ",val);
            val--;
        }
        printf("\n");
        con=con+2;
    }
    
    con=con-4;
    
    for(i=a-2;i>=0;i--){
        for(j=0;j<a*2-i*2;j++){
            printf(" ");
        }
        val=9;
        for(k=0;k<con;k++){
            printf("%d ",val);
            val--;
        }
        printf("\n");
        con=con-2;
    }
}