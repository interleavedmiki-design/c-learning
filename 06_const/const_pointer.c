/*
【課題21 constポインタ①】

constを付けたポインタを使ってください。

条件
・int型の変数valueを用意する
・値は100とする

・const int *型のポインタを作成する
・valueのアドレスを代入する

・ポインタ経由で値を表示する

・ポインタ経由で値を書き換えようとして
  コンパイルエラーになることを確認する
  （確認後はコメントアウトする）

・変数valueは直接書き換えてよい
・最後にポインタ経由で値を表示する

実行例

100
200

【学習ポイント】
・const int * の意味
・ポインタ経由では変更できない
・変数自身は変更できる
*/

#include <stdio.h>

int main(void)
{
    int value = 100;
    const int *p_value = &value;

    printf("value : %d\n", *p_value);

    //*p_value = 120;

    value = 200;
    printf("value : %d\n", *p_value);

    return 0;
}