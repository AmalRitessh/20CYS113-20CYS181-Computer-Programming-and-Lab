#include <stdio.h>
int main() {
    int a,j;
    scanf("%d",&a);
    printf("*\n");
    for(int i=1;i<a+1;i++){
        printf("*");
        for(j=1;j<i+1;j++){
            printf("%d",j);
        }
        if(j!=2){
            j=j-1;
            do{
                j=j-1;
                printf("%d",j);
            }while(j!=1);
        }
        printf("*\n");
    }
    
    for(int i=a;i>1;i--){
        printf("*");
        for(j=1;j<i;j++){
            printf("%d",j);
        }
        if(j!=2){
            j=j-1;
            do{
                j=j-1;
                printf("%d",j);
            }while(j!=1);
        }
        printf("*\n");
    }
    printf("*");
}