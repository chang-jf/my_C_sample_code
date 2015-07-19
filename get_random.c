#include <stdio.h>      /*printf()*/
#include <stdlib.h>     /*rand(), srand(), RAND_MAX*/
#include <time.h>       /*time(), clock()*/

int getrand();
int main()
{
    printf("%d\n", getrand());
    return 0;
}

int getrand(){
    srand(time(NULL));
    return rand()%20+20;    /*number generated from (0~19)+20=20~29*/
}
