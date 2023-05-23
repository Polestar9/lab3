#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b;
    int c;
    double y;
    printf("Input a value: ");
    scanf("%lf", &a);
    printf("Input b value: ");
    scanf("%lf", &b);
    printf("Input c value: ");
    scanf("%d", &c);
    if (c>0)
    if (b-a<0)
    {
    printf("I literally just cannot.");
    return 0;
    }
    else
    {
    y=sqrt(b-a)+2*sqrt(c);
    }
    else if (c==0) 
    if (c-6*a<=0)
    {
    printf("I literally just cannot.");
    return 0;
    }
    else
    {
    y=b/(c-6*a);
    }
    else if (c<0) 
    {
    y=b+12*c*c*c;
    }
    printf("y: %.2lf", y);
    return 0;
}