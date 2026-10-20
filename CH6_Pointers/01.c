#include<stdio.h>

int main()
{
    int i = 72;
    int* j = &i;
    printf("%p, %u, %d, %p, %u, %d\n", &i, &i, &i, j, j, j);

    printf("The value at j (%p) = (*j) -> %d or (*&i) -> %d or (**&j) -> %d\n", j, *j, *&i, **&j);
    printf("(*&j) -> %d = (j) -> %d\n", *&j, j);
    return 0;
}