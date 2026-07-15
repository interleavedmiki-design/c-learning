/*
【課題20 constの基本】

constを使って読み取り専用の変数を作成してください。

条件
・const int型の変数valueを作成する
・値は100とする
・値を表示する
・値を書き換えようとしてコンパイルエラーになることを確認する
　（確認後はコメントアウトする）

実行例

value = 100

【学習ポイント】
・constの意味
・読み取り専用変数
・constによるコンパイルエラー
*/

#include <stdio.h>

int main(void)
{
    const int value = 100;
    printf("value : %d\n", value);
    //value = 120;
    return 0;
}
