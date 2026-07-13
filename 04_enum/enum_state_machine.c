/*
【課題12 enumで状態遷移】

enumとswitch文を使って、簡単な状態遷移を作成してください。

条件
・SystemStateというenumを定義する
・STATE_INIT
・STATE_READY
・STATE_RUN
・STATE_STOP

・SystemState型の変数stateを作成する
・最初の状態をSTATE_INITにする
・switch文を使って現在の状態を表示する
・各状態の処理後、次の状態へ変更する
・状態遷移を4回繰り返す

状態遷移

STATE_INIT
    ↓
STATE_READY
    ↓
STATE_RUN
    ↓
STATE_STOP

実行例

現在の状態：INIT
現在の状態：READY
現在の状態：RUN
現在の状態：STOP

【学習ポイント】
・enumによる状態管理
・switch文による状態ごとの処理
・変数へ次の状態を代入する方法
・状態遷移（ステートマシン）の基本
*/

#include <stdio.h>

typedef enum
{
    STATE_INIT,
    STATE_READY,
    STATE_RUN,
    STATE_STOP
}SystemState;

int main(void)
{
    int i;
    SystemState state = STATE_INIT;

    for(i = 0; i < 4; i++)
    {
        switch(state)
        {
            case STATE_INIT:
                printf("現在の状態：INIT\n");
                state = STATE_READY;
                break;
            case STATE_READY:
                printf("現在の状態：READY\n");
                state = STATE_RUN;
                break;
            case STATE_RUN:
                printf("現在の状態：RUN\n");
                state = STATE_STOP;
                break;
            case STATE_STOP:
                printf("現在の状態：STOP\n");
                break;
        }
    }

    return 0;
}