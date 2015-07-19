#include <stdio.h>  /*printf()*/

typedef struct {
    int number;
    char *string;
    char character;
} datatype;
//ISO C++11 does not allow conversion from string literal to 'char*'
int main()
{
    datatype t = {
        .number = 10,
        .string = "string",
        .character = 'a'
    };

    printf("type I - number:%d, string:%s, character:%c\n", t.number, t.string, t.character);

};

