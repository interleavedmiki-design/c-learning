/*
【課題10 enumの基本】

列挙型（enum）を使って信号機の状態を表してください。

条件
・TrafficLightというenumを定義する
・RED
・YELLOW
・GREEN

・TrafficLight型の変数を作成する
・GREENを代入する
・switch文を使って状態を表示する

実行例

現在の信号：GREEN

【学習ポイント】
・enumの定義方法
・enum型変数の宣言
・switch文との組み合わせ
・数値ではなく意味のある名前で管理する考え方
*/

#include <stdio.h>

typedef enum
{
    RED,
    YELLOW,
    GREEN
}TrafficLight;

int main(void)
{
    TrafficLight signal;

    signal = RED;
    
    switch(signal)
    {
        case RED:
            printf("%d\n", RED);
            break;
        case YELLOW:
            printf("%d\n", YELLOW);
            break;
        case GREEN:
            printf("%d\n", GREEN);
            break;
    }

    return 0;
}