/*
【課題15 ビット演算の基本】

ビット演算子を使って結果を表示してください。

条件
・uint8_t型の変数a = 0x0F
・uint8_t型の変数b = 0x03

・AND (&)
・OR (|)
・XOR (^)
・NOT (~)

それぞれの結果を16進数で表示してください。

実行例

a = 0x0F
b = 0x03

AND : 0x03
OR  : 0x0F
XOR : 0x0C
NOT : 0xF0

【学習ポイント】
・AND(&)
・OR(|)
・XOR(^)
・NOT(~)
・16進数で値を扱う方法
*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t a = 0x0f;
    uint8_t b = 0x03;

    printf("AND : 0x%02x\n", a & b);
    printf("OR  : 0x%02x\n", a | b);
    printf("XOR : 0x%02x\n", a ^ b);
    printf("NOT : 0x%02x\n", (uint8_t)~a);

    return 0;
}