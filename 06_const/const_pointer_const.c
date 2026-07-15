/*
【課題22 constポインタ②】

constポインタを使ってください。

条件
・int型の変数valueを用意する
・値は100とする

・int *const型のポインタを作成する
・valueのアドレスを代入する

・ポインタ経由で値を表示する

・ポインタ経由で値を200に変更する

・変更後の値を表示する

・別のint型変数otherを作成する
・ポインタをotherへ向けようとして
  コンパイルエラーになることを確認する
  （確認後はコメントアウトする）

実行例

100
200

【学習ポイント】
・int *const の意味
・ポインタ自身は変更できない
・指した先の値は変更できる
・const int *との違い
*/

#include <stdio.h>

int main(void)
{
    int value = 100;
    int *const p_value = &value;
    int other;

    printf("value:%d\n", *p_value);
    
    *p_value = 200;

    printf("value:%d\n", *p_value);

    //p_value = &other;

    return 0;
}