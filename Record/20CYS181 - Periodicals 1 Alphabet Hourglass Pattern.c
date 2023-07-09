#include <stdio.h>
int main() {
    int i,j,k,a,con;
    scanf("%d",&a);
    con=a*2-1;
    for(i=a;i>0;i--){
        printf(" ");
        for(j=0;j<a*2-i*2;j++){
            printf(" ");
        }
        int val=68;
        for(k=0;k<con;k++){
            printf("%c ",val);
            val++;
        }
        con=con-2;
        printf("\n");
    }
    
    con=con+4;
    for(i=0;i<a-1;i++){
        for(j=0;j<(a*2-i*2)-3;j++){
            printf(" ");
        }
        int val=68;
        for(k=0;k<con;k++){
            printf("%c ",val);
            val++;
        }
        printf("\n");
        con=con+2;
    }
}