/*
【課題17 ビットの判定】

ビット演算子を使って、指定したビットが
ONかOFFかを判定してください。

条件
・uint8_t型の変数statusを用意する
・初期値は0x05とする

・0bit目がONか判定する
・1bit目がONか判定する
・2bit目がONか判定する

ONなら「ON」
OFFなら「OFF」と表示する

実行例

status = 0x05

0bit : ON
1bit : OFF
2bit : ON

【学習ポイント】
・& を使ったビット判定
・if文との組み合わせ
・ビットマスク
*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t status = 0x05;
    int array[3] = {0x01, 0x02, 0x04};
    int size;
    int i;

    size = sizeof(array) / sizeof(array[0]);

    printf("status\t:\t0x%02x\n", status);

    for(i = 0; i < size; i++)
    {
        if((status & array[i]) != 0)
        {
            printf("%dbit\t:\tON\n", i);
        }
        else
        {
            printf("%dbit\t:\tOFF\n", i);
        }
    }
    return 0;
}