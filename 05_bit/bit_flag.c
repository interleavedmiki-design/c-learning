/*
【課題19 フラグ管理】

1バイトでLEDのON/OFF状態を管理してください。

条件
・uint8_t型の変数ledを用意する
・初期値は0x00

ビットの意味

bit0 : LED_RED
bit1 : LED_GREEN
bit2 : LED_BLUE
bit3 : BUZZER

処理

① REDをON
② BLUEをON
③ GREENをON
④ REDをOFF
⑤ BUZZERをON

各処理後に16進数で表示すること

実行例

初期値     : 0x00
RED ON     : 0x01
BLUE ON    : 0x05
GREEN ON   : 0x07
RED OFF    : 0x06
BUZZER ON  : 0x0E

【学習ポイント】
・フラグ管理
・ビットシフトの実践
・ビットON/OFF
・車載ECUでよく使われる管理方法
*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t led = 0x00;

    printf("初期値\t\t:\t0x%02x\n", led);
    led |= (1U << 0);
    printf("RED ON\t\t:\t0x%02x\n", led);
    led |= (1U << 2);
    printf("BLUE ON\t\t:\t0x%02x\n", led);
    led |= (1U << 1);
    printf("GREEN ON\t:\t0x%02x\n", led);
    led &= (uint8_t)~(1U << 0);
    printf("RED OFF\t\t:\t0x%02x\n", led);
    led |= (1U << 3);
    printf("BUZZER ON\t:\t0x%02x\n", led);
    return 0;
}