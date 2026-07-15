/*
【課題18 ビットシフト】

ビットシフト演算子を使って、
ビットマスクを作成してください。

条件
・uint8_t型の変数statusを用意する
・初期値は0x00

・0bitをONにする
・3bitをONにする
・7bitをONにする

※0x01や0x08などを直接書かず、
「1 << n」を使うこと

各処理後に16進数で表示してください。

実行例

初期値 : 0x00
0bit ON : 0x01
3bit ON : 0x09
7bit ON : 0x89

【学習ポイント】
・<<（左シフト）
・ビットマスクを動的に作る方法
・実務で最もよく使うビット操作
*/

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t status = 0x00;

    printf("初期値 : 0x%02x\n", status);
    status |= (1U << 0);
    printf("0bit ON : 0x%02x\n", status);
    status |= (1U << 3);
    printf("3bit ON : 0x%02x\n", status);
    status |= (1U << 7);
    printf("7bit ON : 0x%02x\n", status);
    return 0;
}