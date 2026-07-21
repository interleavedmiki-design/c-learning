/*
【課題28 ビット操作（bit_toggle）】

ビットを反転する関数を作成してください。

条件
・bit_toggle関数を作成する
・引数は uint8_t value, uint8_t bit
・bitで指定された位置のビットを反転する
・変更後の値を戻り値として返す

・main関数から複数回呼び出して動作を確認する

実行例

value = 0x00
bit   = 0
->    = 0x01

value = 0x01
bit   = 0
->    = 0x00

value = 0x89
bit   = 3
->    = 0x81

value = 0x81
bit   = 7
->    = 0x01
*/

#include <stdio.h>
#include <stdint.h>

uint8_t bit_toggle(uint8_t value, uint8_t bit);

int main(void)
{
    uint8_t value;
    uint8_t bit;
    uint8_t res;

    value = 0x00;
    bit = 0;
    res = bit_toggle(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit = %d\n", bit);
    printf("-> = 0x%02X\n", res);
    printf("\n");

    value = 0x01;
    bit = 0;
    res = bit_toggle(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit = %d\n", bit);
    printf("-> = 0x%02X\n", res);
    printf("\n");

    value = 0x89;
    bit = 3;
    res = bit_toggle(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit = %d\n", bit);
    printf("-> = 0x%02X\n", res);
    printf("\n");
    
    value = 0x81;
    bit = 7;
    res = bit_toggle(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit = %d\n", bit);
    printf("-> = 0x%02X\n", res);

    return 0;
}

uint8_t bit_toggle(uint8_t value, uint8_t bit)
{
    return value ^= (1U << bit);
}