#include <stdio.h>

int main() {
    int x;
    printf("enter: ");
    scanf("%d", &x);
    int a = x/1000; //thousands
    int b = (x/100)%10; //hundreds
    int c = (x/10)%10; //tens
    int d = x%10;
    int n=a+b+c+d; //finding summary
    if (n<25) 
    {
    printf("smaller than 25.");
    } 
    else if (n==25)
    {
    printf("equal to 25.");
    }
    else
    {
    printf("bigger than 25.");
    }
    return 0;
}