/*
【課題6 構造体の基本】

構造体を定義し、メンバに値を代入して表示してください。

条件
・Studentという構造体を定義する
・名前（char配列）
・年齢（int）
・身長（float）

・main関数で構造体変数を1つ作成する
・各メンバに値を代入する
・printfで全て表示する

実行例

名前：Taro
年齢：20
身長：170.5

【学習ポイント】
・structの定義方法
・構造体変数の宣言
・ドット演算子（.）によるメンバアクセス
・複数のデータを1つにまとめる考え方
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char    name[20];
    int     age;
    float   height;
}Student;

int main(void)
{
    Student student;

    strcpy(student.name, "Taro");
    student.age = 20;
    student.height = 170.5f;

    printf("名前：%s\n", student.name);
    printf("年齢：%d\n", student.age);
    printf("身長：%.1f\n", student.height);

    return 0;
}