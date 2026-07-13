/*
【課題11 enumに値を割り当てる】

enumの各メンバに数値を明示的に割り当ててください。

条件
・Resultというenumを定義する
・RESULT_OK = 0
・RESULT_ERROR = -1
・RESULT_TIMEOUT = -2

・Result型の変数を作成する
・RESULT_TIMEOUTを代入する
・switch文を使って結果を表示する

実行例

結果：TIMEOUT

【学習ポイント】
・enumへの値の割り当て
・負の値を持つenum
・switch文との組み合わせ
・エラーコードの表現方法
*/

#include <stdio.h>

typedef enum
{
    RESULT_OK = 0,
    RESULT_ERROR = -1,
    RESULT_TIMEOUT = -2
}Result;

int main(void)
{
    Result result = RESULT_TIMEOUT;

    switch(result)
    {
        case RESULT_OK:
            printf("RESULT_OK\n");
            break;

        case RESULT_ERROR:
            printf("RESULT_ERROR\n");
            break;

        case RESULT_TIMEOUT:
            printf("RESULT_TIMEOUT\n");
            break;
    }

    return 0;
}