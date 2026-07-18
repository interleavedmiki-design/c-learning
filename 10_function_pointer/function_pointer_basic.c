/*
【課題30 関数ポインタの基本】

関数ポインタを使ってください。

条件

・addという関数を作成する
    引数：int a, int b
    戻り値：a + b

・add関数を指す関数ポインタを宣言する

・関数ポインタにaddを代入する

・関数ポインタを使って
    add(10, 20)
  を呼び出す

・戻り値を表示する

実行例

result = 30
*/

#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int sum;
    int a = 10;
    int b = 20;

    int (*func)(int, int);
    func = add;

    sum = func(a, b);

    printf("%d\n", sum);
    
    return 0;
}

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}