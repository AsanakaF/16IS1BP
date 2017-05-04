#include <stdlib.h>
#include <stdio.h>
int main () {
    int a;
    typedef struct list {
        int field; // поле данных
        struct list *next; // указатель на следующий элемент
    } list;
    struct list *init(int a); // а- значение первого узла
        struct list *lst;
        // выделение памяти под корень списка
        lst = (struct list *) malloc(sizeof(struct list));
        lst->field = a;
        lst->next = NULL; // это последний узел списка
    while (init != NULL)
    {
        printf("%d\t", init -> filed);
        init = init -> next;
    }
    return 0;
}
