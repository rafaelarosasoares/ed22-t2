#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    char* data;
    struct list * next;
} List;

List* create_list (List* l);
