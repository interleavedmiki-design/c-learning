/*
【課題4 ポインタと配列】

ポインタを使って配列の要素を表示してください。

条件
・int型の配列を用意する
・配列の先頭アドレスをポインタに代入する
・for文を使って全要素を表示する
・配列名ではなく、ポインタを使ってアクセスする

実行例

配列の要素
10
20
30
40
50

【学習ポイント】
・配列名は先頭要素へのポインタとして扱える
・ポインタ演算（p + i）
・*(p + i)で配列の要素にアクセスする方法
・配列とポインタの関係
*/

#include <stdio.h>

int main(void)
{
    int array[] = {10, 20, 30, 40, 50};
    int *p_array;
    int i;
    int total;

    p_array = array;
    
    total = sizeof(array) / sizeof(array[0]);

    for(i = 0; i < total; i++)
    {
        printf("%d\n", *(p_array + i));
    }

    return 0;
}