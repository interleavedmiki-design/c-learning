/*
【課題16 ビットのON/OFF】

ビット演算子を使って、指定したビットをON/OFFしてください。

条件
・uint8_t型の変数statusを用意する
・初期値は0x00とする

・0ビット目をONにする
・2ビット目をONにする
・0ビット目をOFFにする

各処理後に16進数で表示すること

実行例

初期値 : 0x00
0bit ON : 0x01
2bit ON : 0x05
0bit OFF: 0x04

【学習ポイント】
・|= によるビットON
・&= によるビットOFF
・ビットマスクの考え方
*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t status = 0x00;
    
    printf("初期値 : 0x%02x\n", status);
    status |= 0x01;
    printf("0bit ON : 0x%02x\n", status);
    status |= 0x04;
    printf("2bit ON : 0x%02x\n", status);
    status &= (uint8_t)~0x01;
    printf("0bit OFF: 0x%02x\n", status);

    return 0;
}