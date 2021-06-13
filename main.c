#include <stdio.h>
#include <stdlib.h>

float SumTwo(){
    float a;
    float b;

    printf("First Number: ");
    scanf("%f", &a);

    printf("Second Number: ");
    scanf("%f", &b);

    return a + b;
}

int main()
{
    printf("Hello C World!\n");

    printf("Total: %0.2f", SumTwo());

    return 0;
}
