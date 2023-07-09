#include <stdio.h>

struct shape{
    union dimensions{
        float length[2];
        float radius;
    }d;
    enum type{
        circle,rectangle
    }e;
}s;

int main(){
    int a;
    float ans;
    scanf("%d",&a);
    if(0<a && a<3){
        switch (a){
            case 1:
                scanf("%f",&s.d.radius);
                ans=3.14*s.d.radius*s.d.radius;
                printf("Area of the circle: %.4f units",ans);
                break;
            case 2:
                scanf("%f",&s.d.length[0]);
                scanf("%f",&s.d.length[1]);
                ans=s.d.length[0]*s.d.length[1];
                printf("Area of the rectangle: %.4f units",ans);
                break;
        }
    }
    else{
        printf("Invalid choice!");
    }
}