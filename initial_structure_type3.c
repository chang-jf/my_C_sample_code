#include <string.h>
#include <stdio.h>
typedef struct     {
  int number;
  char *name;
} patient;

patient *createPatient(int number, char *name) {

  // Allocate memory for the pointers themselves and other elements
  // in the struct.
  patient *p = malloc(sizeof(struct patient));

  p->number = number; // Scalars (int, char, etc) can simply be copied

  // Must allocate memory for contents of pointers.  Here, strdup()
  // creates a new copy of name.  Another option:
  // p->name = malloc(strlen(name)+1);
  // strcpy(p->name, name);
  p->name = strdup(name);
  return p;
}

int main()
{
    patient *p = createPatient(5, "abc");
    printf("number%d\n", p->number);
    printf("name:%s\n", p->name);
    return 0;
}
