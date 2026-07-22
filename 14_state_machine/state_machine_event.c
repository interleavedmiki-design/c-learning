/*
【課題31 State Machine（イベント駆動）】

イベントによって状態が変化するステートマシンを作成してください。

条件
・State型のenumを使用する
・状態は以下の3つとする
    STATE_STOP
    STATE_RUN
    STATE_ERROR

・Event型のenumを作成する
・イベントは以下の3つとする
    EVENT_START
    EVENT_ERROR
    EVENT_RESET

・State型の変数stateを宣言し、
  初期値をSTATE_STOPとする

・Event型の変数eventを宣言する

・イベントを以下の順番で発生させる

    EVENT_START
    EVENT_ERROR
    EVENT_RESET

・switch文を使用し、
  イベントに応じて状態を変更する

状態遷移

STATE_STOP
    + EVENT_START
        ↓
STATE_RUN

STATE_RUN
    + EVENT_ERROR
        ↓
STATE_ERROR

STATE_ERROR
    + EVENT_RESET
        ↓
STATE_STOP

各イベント処理後に現在の状態を表示する

実行例

Current State : RUN
Current State : ERROR
Current State : STOP
*/

#include <stdio.h>

typedef enum
{
    STATE_STOP,
    STATE_RUN,
    STATE_ERROR
} State;

typedef enum
{
    EVENT_START,
    EVENT_ERROR,
    EVENT_RESET
} Event;

int main(void)
{
    State state = STATE_STOP;
    Event event = EVENT_START;
    int count = 0;

    do
    {
        switch (state)
        {
            case STATE_STOP:
                if (event == EVENT_START)
                {
                    state = STATE_RUN;
                }
                break;

            case STATE_RUN:
                if (event == EVENT_ERROR)
                {
                    state = STATE_ERROR;
                }
                break;

            case STATE_ERROR:
                if (event == EVENT_RESET)
                {
                    state = STATE_STOP;
                }
                break;

            default:
                state = STATE_ERROR;
                break;
        }

        switch (state)
        {
            case STATE_STOP:
                printf("Current State : STOP\n");
                break;

            case STATE_RUN:
                printf("Current State : RUN\n");
                break;

            case STATE_ERROR:
                printf("Current State : ERROR\n");
                break;

            default:
                printf("Unknown State\n");
                break;
        }

        if (event == EVENT_START)
        {
            event = EVENT_ERROR;
        }
        else if (event == EVENT_ERROR)
        {
            event = EVENT_RESET;
        }

        count++;

    } while (count < 3);

    return 0;
}