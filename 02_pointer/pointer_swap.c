/*
【課題3 ポインタ応用】

ポインタを使って、2つの変数の値を入れ替える関数を作成してください。

条件
・swapという関数を作成する
・引数はint型のポインタを2つ受け取る
・main関数でint型変数を2つ用意する
・swap関数を呼び出して値を入れ替える
・入れ替え前と入れ替え後を表示する

実行例

入れ替え前
a = 10
b = 20

入れ替え後
a = 20
b = 10

【学習ポイント】
・関数にポインタを渡す方法
・ポインタを使って関数内から変数の値を変更する方法
・値渡しとアドレス渡しの違い
・一時変数（temp）を使った値の交換
*/

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 10;
    int b = 20;

    printf("入れ替え前のaの値は:%d,bの値は%dです。\n", a, b);
    swap(&a, &b);
    printf("入れ替え後のaの値は:%d,bの値は%dです。\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}