/*
【課題29 volatileと割り込み】

割り込み処理を模擬したプログラムを作成してください。

条件

・volatile int flag = 0; をグローバル変数として宣言する

・interruptHandler()という関数を作成する
    → 関数内でflagに1を代入する

・main関数でinterruptHandler()を呼び出す

・flagが1なら
    "Interrupt detected!"
  と表示する

実行例

Interrupt detected!
*/

#include <stdio.h>

volatile int flag = 0;

void interruptHandler(void);

int main(void)
{
    interruptHandler();

    if(flag == 1)
    {
        printf("Interrupt detected!");
    }

    return 0;
}

void interruptHandler(void)
{
    flag = 1;
}