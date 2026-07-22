/*
【課題32 State Machine（関数化）】

ステートマシンを関数化してください。

条件
・State型のenumを使用する
・Event型のenumを使用する

・以下の関数を作成する

    void StateMachine(State *state, Event event);

・現在の状態とイベントに応じて
  次の状態へ遷移させる

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

・main関数では以下の順番でイベントを発生させる

    EVENT_START
    EVENT_ERROR
    EVENT_RESET

・イベント発生後、
  StateMachine()を呼び出す

・StateMachine()の呼び出し後、
  現在の状態を表示する

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

void StateMachine(State *state, Event event);
void PrintState(State state);

int main(void)
{
    State state = STATE_STOP;

    StateMachine(&state, EVENT_START);
    PrintState(state);

    StateMachine(&state, EVENT_ERROR);
    PrintState(state);

    StateMachine(&state, EVENT_RESET);
    PrintState(state);

    return 0;
}

void StateMachine(State *state, Event event)
{
    switch (*state)
    {
        case STATE_STOP:
            if (event == EVENT_START)
            {
                *state = STATE_RUN;
            }
            break;

        case STATE_RUN:
            if (event == EVENT_ERROR)
            {
                *state = STATE_ERROR;
            }
            break;

        case STATE_ERROR:
            if (event == EVENT_RESET)
            {
                *state = STATE_STOP;
            }
            break;

        default:
            *state = STATE_ERROR;
            break;
    }
}

void PrintState(State state)
{
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
            printf("Current State : UNKNOWN\n");
            break;
    }
}