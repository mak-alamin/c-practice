#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float SumTwo(){
    float a;
    float b;

    printf("First Number: ");
    scanf("%f", &a);

    printf("Second Number: ");
    scanf("%f", &b);

    return a + b;
}

int version_check() {

    if (__STDC_VERSION__ >=  201710L){
        printf("We are using C18!\n");
    } else if (__STDC_VERSION__ >= 201112L){
        printf("We are using C11!\n");
    } else if (__STDC_VERSION__ >= 199901L){
        printf("We are using C99!\n");
    } else {
        printf("We are using C89/C90!\n");
    }

  return 0;
}

char *rev_str(char *str){
    int g;
    int leng = strlen(str);

    char mystr[leng];

// This will find the length of your string with the help of strlen() function of string.h header file
    leng = strlen(mystr);

// iterate through each and every character of the string for printing it backwards or reverse direction
    for(g = leng - 1; g >= 0; g--) {
        //printf("%c", g);
        mystr[g] = str;
    }
    return mystr;
}

int main()
{
    printf("Hello C World!\n");

    //printf("Total: %0.2f\n", SumTwo());

    version_check();

    char *x = "abc";
    rev_str(x);

    printf("%s", x);

    return 0;
}
