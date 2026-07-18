/*
【課題24 staticグローバル変数】

staticグローバル変数を使ってください。

条件
・ファイルの先頭に
    static int count = 0;
  を宣言する

・countUp()という関数を作成する
・関数が呼ばれるたびにcountを1増やす
・現在のcountを表示する

・main関数からcountUp()を5回呼び出す

実行例

count = 1
count = 2
count = 3
count = 4
count = 5

【学習ポイント】
・staticグローバル変数
・ファイルスコープ
・外部リンケージと内部リンケージ
・複数ファイルでの扱い
*/

#include <stdio.h>

static int count = 0;

void countUp(void);

int main(void)
{
  countUp();
  countUp();
  countUp();
  countUp();
  countUp();

  return 0;
}

void countUp(void)
{
  count++;
  printf("count = %d\n", count);
}