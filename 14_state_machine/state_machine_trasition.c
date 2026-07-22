/*
【課題30 State Machine（状態遷移）】

ステートマシンの状態遷移を作成してください。

条件
・State型のenumを使用する
・状態は以下の3つとする
    STATE_STOP
    STATE_RUN
    STATE_ERROR

・State型の変数stateを宣言し、
  初期値をSTATE_STOPとする

・while文を使用する

・switch文で状態ごとの処理を書く

・状態遷移は以下の順番とする

STATE_STOP
    ↓
STATE_RUN
    ↓
STATE_ERROR
    ↓
STATE_STOP

・各状態では現在の状態を表示し、
  次の状態へ遷移させる

・3周したらプログラムを終了する

実行例

Current State : STOP
Current State : RUN
Current State : ERROR
Current State : STOP
Current State : RUN
Current State : ERROR
Current State : STOP
Current State : RUN
Current State : ERROR
*/

#include <stdio.h>

typedef enum
{
    STATE_STOP,
    STATE_RUN,
    STATE_ERROR
} State;

int main(void)
{
    State state = STATE_STOP;
    int count = 0;

    while (count < 9)
    {
        switch (state)
        {
            case STATE_STOP:
                printf("Current State : STOP\n");
                state = STATE_RUN;
                break;

            case STATE_RUN:
                printf("Current State : RUN\n");
                state = STATE_ERROR;
                break;

            case STATE_ERROR:
                printf("Current State : ERROR\n");
                state = STATE_STOP;
                break;

            default:
                state = STATE_ERROR;
                break;
        }

        count++;
    }

    return 0;
}