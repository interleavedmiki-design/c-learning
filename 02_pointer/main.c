/*
【課題2 ポインタ】

int型の変数を1つ用意し、
その変数をポインタで操作してください。

条件
・int型変数を宣言して100を代入する
・その変数を指すポインタを作る
・ポインタを使って値を表示する
・ポインタを使って値を200に変更する
・変更後の値を表示する

実行例

変更前：100
変更後：200
*/

#include <stdio.h>

int main(void)
{
    int value = 100;
    int *p_value;

    p_value = &value;

    printf("valueの値は%dです。\n", *p_value);

    *p_value = 200;

    printf("valueの値は%dです。\n", *p_value);

    return 0;
}