#include <stdio.h>  /*printf()*/
#include <stdlib.h> /*malloc()*/
#include <string.h> /*strdup(), strcpy()*/

struct A{
  char *name;
};

int main()
{
    char *str=(char *)malloc(sizeof(char));
    strcpy(str, "bbbbb");

    struct A *p = (struct A *)malloc(sizeof(struct A));
    p->name=str;
    //p->name="imana";      /*do not assign a dedicate string to char *, use stycpy instead
    printf("the string is%s", p->name);
    return 0;
}
