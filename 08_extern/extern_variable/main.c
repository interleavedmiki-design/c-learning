/*
【課題24 extern変数】

externを使ってください。

条件

・main.cに
    int number = 100;
  を定義する

・sample.cからnumberを利用する

・sample.cではexternを使ってnumberを宣言する

・sample.cにprintNumber()関数を作成する

・printNumber()でnumberの値を表示する

・main.cからprintNumber()を呼び出す

実行例

number = 100
*/

#include "sample.h"
int number = 100;

int main(void)
{
    printNumber();
    return 0;
}