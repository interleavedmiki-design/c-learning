/*
==========================================================
課題1：配列

【目的】
配列とfor文の基本的な使い方を理解する。

【課題】
5個のドアスイッチ状態を配列に格納し、
ONになっているスイッチの数を表示するプログラムを作成する。

【条件】
・1：ON
・0：OFF
・for文を使用する
・各スイッチの状態を表示する
・ONの数を表示する
・0、1以外の値が入っていた場合はERRORと表示する

【実行例】
スイッチ0: ON
スイッチ1: OFF
スイッチ2: ON
スイッチ3: ON
スイッチ4: OFF

ONの数: 3

【学習ポイント】
・配列
・for文
・sizeofによる配列要素数の取得
・if / else if / else
・カウンタ変数
==========================================================
*/

#include <stdio.h>
#include <stdint.h>

#define SWITCH_ON   1
#define SWITCH_OFF  0

int main(void)
{
    uint8_t i;
    uint8_t switch_state[5] = {1, 0, 1, 1, 0};
    uint8_t switch_on_count = 0;

    int switch_count = sizeof(switch_state) / sizeof(switch_state[0]);

    for(i = 0; i < switch_count; i++)
    {
        if(switch_state[i] == SWITCH_ON)
        {
            printf("スイッチ%d:\tON\n", i);
            switch_on_count++;
        }
        else if(switch_state[i] == SWITCH_OFF)
        {
            printf("スイッチ%d:\tOFF\n", i);
        }

        else
        {
            printf("スイッチ%d:\terror\n", i);
        }
    }

    printf("ONの数:\t%d", switch_on_count);

    return 0;
}
