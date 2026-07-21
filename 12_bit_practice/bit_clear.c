/*
【課題27 ビット操作（bit_clear）】

ビットをOFFにする関数を作成してください。

条件
・bit_clear関数を作成する
・引数は uint8_t value, uint8_t bit
・bitで指定された位置のビットをOFFにする
・変更後の値を戻り値として返す

・main関数から複数回呼び出して動作を確認する

実行例

value = 0xFF
bit   = 0
->    = 0xFE

value = 0xFF
bit   = 7
->    = 0x7F

value = 0x89
bit   = 3
->    = 0x81
*/

#include <stdio.h>
#include <stdint.h>

uint8_t bit_clear(uint8_t value, uint8_t bit);

int main(void)
{
    uint8_t value;
    uint8_t bit;
    uint8_t res;

    value = 0xFF;
    bit = 0;
    res = bit_clear(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit = %d\n", bit);
    printf("-> = 0x%02X\n", res);
    printf("\n");

    value = 0xFF;
    bit = 7;
    res = bit_clear(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit = %d\n", bit);
    printf("-> = 0x%02X\n", res);
    printf("\n");


    value = 0x89;
    bit = 3;
    res = bit_clear(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit = %d\n", bit);
    printf("-> = 0x%02X\n", res);
    printf("\n");

    return 0;
}

uint8_t bit_clear(uint8_t value, uint8_t bit)
{
    return value & ~(1U << bit);
}