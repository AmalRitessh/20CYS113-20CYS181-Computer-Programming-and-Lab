#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    double p_root,n_root;
    printf("enter value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);
    printf("enter value of c: ");
    scanf("%d",&c);
    
    //sqrt,pow 
    
    p_root = (-b + sqrt((pow(b,2)-4*a*c)))/2*a;
    n_root = (-b - sqrt((pow(b,2)-4*a*c)))/2*a;
    
    printf("the positive root is %lf and negative root is %lf ",p_root,n_root);
    return 0;
}