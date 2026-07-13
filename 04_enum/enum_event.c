/*
【課題13 イベントによる状態遷移】

イベントによって状態を切り替えるプログラムを作成してください。

条件
・SystemStateというenumを定義する
    STATE_STOP
    STATE_RUN

・Eventというenumを定義する
    EVENT_NONE
    EVENT_START
    EVENT_STOP

・現在の状態(state)を用意する
・イベント(event)を用意する

・最初の状態はSTATE_STOPとする

・EVENT_STARTが発生したら
    STATE_RUNへ遷移する

・EVENT_STOPが発生したら
    STATE_STOPへ遷移する

・switch文で現在の状態を表示する

実行例

初期状態
STOP

EVENT_START

RUN

EVENT_STOP

STOP

【学習ポイント】
・enumを複数定義する方法
・状態(State)とイベント(Event)を分ける考え方
・イベントによって状態を変更する方法
・簡単なステートマシン
*/

#include <stdio.h>

typedef enum
{
    STATE_STOP,
    STATE_RUN
} SystemState;

typedef enum
{
    EVENT_NONE,
    EVENT_START,
    EVENT_STOP
} Event;

void printState(SystemState state);
void handleEvent(Event event, SystemState *state);

int main(void)
{
    SystemState state = STATE_STOP;
    Event event = EVENT_NONE;

    printf("初期状態\n");
    printState(state);
    printf("\n");

    event = EVENT_START;
    handleEvent(event, &state);
    printState(state);
    printf("\n");

    event = EVENT_STOP;
    handleEvent(event, &state);
    printState(state);
    printf("\n");


    return 0;
}

void printState(SystemState state)
{
    switch(state)
    {
        case STATE_RUN:
        {
            printf("RUN\n");
            break;
        }
        case STATE_STOP:
        {
            printf("STOP\n");
            break;
        }
        default:
        {
            printf("STATE_ERROR");
            break;
        }
    }

}

void handleEvent(Event event, SystemState *state)
{
    switch(event)
    {
        case EVENT_NONE:
        {
            printf("EVENT_NONE\n");
            break;
        }
        case EVENT_START:
        {
            printf("EVENT_START\n");
            *state = STATE_RUN;
            break;
        }
        case EVENT_STOP:
        {
           printf("EVENT_STOP\n");
           *state = STATE_STOP;
           break;
        }
        default:
        {
            printf("EVENT_ERROR");
            break;
        }
    }
}