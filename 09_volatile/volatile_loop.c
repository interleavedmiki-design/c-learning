/*
【課題28 volatileとループ】

volatile変数を使ってください。

条件

・volatile int flag = 0; を宣言する

・int型の変数countを0で初期化する

・while文を使う

・flagが0の間、countを1ずつ増やす

・countが5になったらflagに1を代入する

・ループ終了後にcountを表示する

実行例

count = 5
*/

#include <stdio.h>

int main(void)
{
    volatile int flag = 0;
    int count = 0;

    while(flag == 0)
    {
        count++;

        if(count == 5)
        {
            flag = 1;
        }
    }

    printf("%d\n", count);

    return 0;
}