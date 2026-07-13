/*
【課題7 構造体の配列】

構造体の配列を作成し、全てのデータを表示してください。

条件
・Student構造体を定義する
・名前（char配列）
・年齢（int）
・身長（float）

・Student型の配列を3人分作成する
・各メンバに値を代入する
・for文を使って全員分の情報を表示する

実行例

----- Student 1 -----
名前：Taro
年齢：20
身長：170.5

----- Student 2 -----
名前：Hanako
年齢：21
身長：158.0

----- Student 3 -----
名前：Jiro
年齢：19
身長：175.2

【学習ポイント】
・構造体の配列
・配列と構造体の組み合わせ
・ドット演算子の使い方
・for文で構造体を扱う方法
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
    int size;
    Student student[3];
    size = sizeof(student) / sizeof(student[0]);

    strcpy(student[0].name, "Taro");
    student[0].age = 20;
    student[0].height = 170.5f;

    strcpy(student[1].name, "Hanako");
    student[1].age = 21;
    student[1].height = 158.0f;

    strcpy(student[2].name, "Jiro");
    student[2].age = 19;
    student[2].height = 175.2f;

    for(int i = 0; i < size; i++)
    {
        printf("---- Student %d ----\n", i + 1);
        printf("名前：%s\n", student[i].name);
        printf("年齢：%d\n", student[i].age);
        printf("身長：%.1f\n", student[i].height);        

    }

    return 0;
}