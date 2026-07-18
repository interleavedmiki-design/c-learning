#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main(void)
{
    int a = 10;
    int b = 20;
    int result;
    int (*func)(int, int);

    func = add;
    result = func(a, b);
    printf("add = %d\n", result);

    func = sub;
    result = func(a, b);
    printf("sub = %d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}