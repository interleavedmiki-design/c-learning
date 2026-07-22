/*
【課題28 register】

register記憶クラスを使ってください。

条件
・main関数内で register int i; を宣言する
・for文で0～4まで表示する
・実行結果が以下になること

実行例

0
1
2
3
4

チャレンジ
・&i のようにアドレスを取得しようとしてみる
・なぜエラー（または警告）になるのか確認する
*/

#include <stdio.h>

int main(void)
{
    register int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }

    /*
    int *p_i;
    p_i = &i;
    */
   
    return 0;
}