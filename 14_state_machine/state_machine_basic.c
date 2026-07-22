/*
【課題29 State Machine（基本）】

ステートマシンの基本を作成してください。

条件
・State型のenumを定義する
・以下の状態を定義する
    STATE_STOP
    STATE_RUN
    STATE_ERROR

・State型の変数stateを宣言する
・初期状態はSTATE_STOPとする

・switch文を使って状態ごとの処理を書く
・各状態では以下を表示する

STATE_STOP  → "Current State : STOP"
STATE_RUN   → "Current State : RUN"
STATE_ERROR → "Current State : ERROR"

・defaultも実装する

実行例

Current State : STOP

チャレンジ
・stateの初期値をSTATE_RUN、STATE_ERRORに変更し、
  実行結果を確認する。
*/

#include <stdio.h>

typedef enum
{
    STATE_STOP,
    STATE_RUN,
    STATE_ERROR
}State;

int main(void)
{
    State state = STATE_STOP;

    switch(state)
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
            /* Unexpected state */    
            break;     
    }
    
    return 0;
}