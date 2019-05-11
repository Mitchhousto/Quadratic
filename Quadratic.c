

#include<stdio.h>
#include<math.h>
int main()
{
    float a= 1.0, b=5.0, c=1.0;
    float Dtemp,D;
    float x0,x1; //The solution
    
    //D=b^2 - 4ac
    Dtemp = b*b-4*a*c;
    if(Dtemp > 0) { //2 unique solutions
        D= sqrtf(Dtemp);
        x0=(-b+D)/(2.0*a);
        x1=(-b-D)/(2.0*a);
        printf("Sloutions:%f %f\n",x0,x1);
    }
    else if(Dtemp==0) {
        printf("One solution: %f", (-b/(2.0*a)));
    }
    else {
        //Dtemp <0
        printf("no real solutions");
    }

}
