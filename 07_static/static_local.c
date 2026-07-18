/*
【課題23 staticローカル変数】

staticローカル変数を使ってください。

条件
・countという関数を作成する
・関数内にstatic int count = 0;を宣言する
・関数が呼ばれるたびにcountを1増やす
・現在のcountを表示する

・main関数からcount()を5回呼び出す

実行例

count = 1
count = 2
count = 3
count = 4
count = 5

【学習ポイント】
・staticローカル変数
・関数を抜けても値が保持される
・通常のローカル変数との違い
*/

#include <stdio.h>
int count(void);

int main(void)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        count();
    }
    return 0;
}

int count(void)
{
    static int count = 0;
    count++;
    printf("count = %d\n", count);

    return count;
}