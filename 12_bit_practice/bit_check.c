/*
【課題29 ビット操作（bit_check）】

指定したビットがONかどうかを判定する関数を作成してください。

条件
・bit_check関数を作成する
・引数は uint8_t value, uint8_t bit
・bitで指定された位置のビットがONなら1を返す
・OFFなら0を返す

・main関数から複数回呼び出して動作を確認する

実行例

value = 0x01
bit   = 0
->    = 1

value = 0x01
bit   = 3
->    = 0

value = 0x89
bit   = 7
->    = 1

value = 0x89
bit   = 2
->    = 0
*/

#include <stdio.h>
#include <stdint.h>

uint8_t bit_check(uint8_t value, uint8_t bit);

int main(void)
{
    uint8_t value, bit, res;

    value = 0x01;
    bit = 0;
    res = bit_check(value, bit);
    printf("value = 0x%02X\n", value);    
    printf("bit = %d\n", bit);
    printf("-> = %d\n", res);
    printf("\n");

    value = 0x01;
    bit = 3;
    res = bit_check(value, bit);
    printf("value = 0x%02X\n", value);    
    printf("bit = %d\n", bit);
    printf("-> = %d\n", res);
    printf("\n");

    value = 0x89;
    bit = 7;
    res = bit_check(value, bit);
    printf("value = 0x%02X\n", value);    
    printf("bit = %d\n", bit);
    printf("-> = %d\n", res);
    printf("\n");

    value = 0x89;
    bit = 2;
    res = bit_check(value, bit);
    printf("value = 0x%02X\n", value);    
    printf("bit = %d\n", bit);
    printf("-> = %d\n", res);
    
    return 0;
}
uint8_t bit_check(uint8_t value, uint8_t bit)
{
    uint8_t res;

    if((value & (1U << bit)) != 0)
    {
       res = 1; 
    }
    else
    {
        res = 0;
    }

    return (res);
}