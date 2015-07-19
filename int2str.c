/*The compilers error message is very clear.*/
/*Then return value of calloc is void*. You are assigning it to a variable of type int*.*/
/*This is ok with a C program, but not with a C++ program.*/
/*You can change that line to*/
/*int* numberArray = (int*)calloc(n, sizeof(int));*/

#include <stdio.h>
#include <stdlib.h>     /*malloc()*/

void int2str(int, char *);

int main()
{
    int i=123;
    char *s = (char *)malloc(sizeof(char));     //remember cast malloc output (char *)
    int2str(i, s);
    printf("%s\n", s);
    return 0;
}

void int2str(int i, char *s){
    sprintf(s, "%d", i);
}
