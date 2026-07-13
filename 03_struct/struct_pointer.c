/*
【課題8 構造体とポインタ】

構造体をポインタで操作してください。

条件
・Student構造体を定義する
・名前（char配列）
・年齢（int）
・身長（float）

・Student型の変数を1つ作成する
・Student型のポインタを作成する
・ポインタに構造体のアドレスを代入する

・ポインタを使って各メンバに値を代入する
・ポインタを使って全て表示する

実行例

名前：Taro
年齢：20
身長：170.5

【学習ポイント】
・構造体へのポインタ
・アロー演算子（->）
・(*pointer).member と pointer->member の違い
・構造体とポインタの関係
*/

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[20];
    int age;
    float height;
}Student;

int main(void)
{
    Student student;
    Student *p_student;

    p_student = &student;

    strcpy(p_student->name, "Taro");
    p_student->age = 20;
    p_student->height = 170.5f;

    printf("名前:%s\n", p_student->name);
    printf("年齢:%d\n", p_student->age);
    printf("身長:%.1f\n", p_student->height);

    return 0;
}