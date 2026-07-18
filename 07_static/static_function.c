/*
【課題25 static関数】

static関数を使ってください。

条件
・printMessage()という関数を作成する
・関数の前にstaticを付ける
・関数内で「Hello Static Function!」と表示する

・main関数からprintMessage()を呼び出す

実行例

Hello Static Function!

【学習ポイント】
・static関数
・内部リンケージ
・他の.cファイルから呼び出せない
・ヘッダーファイルに書かない関数
*/

#include <stdio.h>

static void printMessage(void);

int main(void)
{
    printMessage();
    return 0;
}

static void printMessage(void)
{
    printf("Hello Static Function!\n");
}