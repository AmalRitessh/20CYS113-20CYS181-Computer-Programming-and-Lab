#include <stdio.h>

struct complex_number{
    int real;
    int img;
}cn[4];

int main(){
    scanf("%d",&cn[0].real);
    scanf("%d",&cn[0].img);
    
    scanf("%d",&cn[1].real);
    scanf("%d",&cn[1].img);
    
    //addition
    cn[2].real=cn[0].real+cn[1].real;
    cn[2].img=cn[0].img+cn[1].img;
    
    //subbraction
    cn[3].real=cn[0].real-cn[1].real;
    cn[3].img=cn[0].img-cn[1].img;
    
    printf("%d+%di\n",cn[2].real,cn[2].img);
    printf("%d+%di",cn[3].real,cn[3].img);
}