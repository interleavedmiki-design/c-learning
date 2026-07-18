/*
【課題27 volatile基本】

volatileを使ってください。

条件

・volatile int flag = 0; を宣言する

・flagに1を代入する

・flagの値を表示する

実行例

flag = 1
*/

#include <stdio.h>

int main(void)
{
    volatile int flag = 0;

    flag = 1;

    printf("%d\n", flag);

    return 0;
}