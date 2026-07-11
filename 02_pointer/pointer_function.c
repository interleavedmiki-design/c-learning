/*
【課題5 ポインタ・配列・関数】

配列を関数に渡し、配列の合計値を求めて表示してください。

条件
・int型の配列を用意する
・合計値を求めるsum関数を作成する
・sum関数の引数は配列（ポインタ）と要素数を受け取る
・for文を使って全要素を加算する
・戻り値として合計値を返す
・main関数で結果を表示する

実行例

合計値：150

【学習ポイント】
・配列を関数に渡す方法
・配列は関数ではポインタとして受け取る
・戻り値を使って結果を返す
・実務でよく使われる関数の作り方
*/

#include <stdio.h>

int sum(int *array, int size);

int main(void)
{
    int size;
    int array[5] = {10, 20, 30, 40, 50};
    int total = 0;

    size = sizeof(array) / sizeof(array[0]);

    total = sum(array, size);

    printf("合計は%dです。\n", total);

    return 0;
}

int sum(int *array, int size)
{
    int i;
    int total = 0;

    for(i = 0; i < size; i++)
    {
        total += array[i];
    }

    return(total);
}