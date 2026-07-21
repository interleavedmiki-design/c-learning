/*
【課題26 ビット操作（bit_set）】

ビットをONにする関数を作成してください。

条件
・bit_set関数を作成する
・引数は uint8_t value, uint8_t bit
・bitで指定された位置のビットをONにする
・変更後の値を戻り値として返す

・main関数から複数回呼び出して動作を確認する

実行例

value = 0x00
bit = 0
→ 0x01

value = 0x01
bit = 3
→ 0x09

value = 0x09
bit = 7
→ 0x89
*/

#include <stdio.h>
#include <stdint.h>

uint8_t bit_set(uint8_t value, uint8_t bit);

int main(void)
{
    uint8_t value;
    uint8_t bit;
    uint8_t result;

    value   = 0x00;
    bit     = 0;
    result = bit_set(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit   = %d\n", bit);
    printf("->    = 0x%02X\n\n", result);

    value   = 0x01;
    bit     = 3;
    result = bit_set(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit   = %d\n", bit);
    printf("->    = 0x%02X\n\n", result);

    value   = 0x09;
    bit     = 7;
    result = bit_set(value, bit);
    printf("value = 0x%02X\n", value);
    printf("bit   = %d\n", bit);
    printf("->    = 0x%02X\n\n", result);

    return 0;
}

uint8_t bit_set(uint8_t value, uint8_t bit)
{
    return value | (1U << bit);
}