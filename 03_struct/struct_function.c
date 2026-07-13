/*
【課題9 構造体を関数に渡す】

構造体を関数に渡して、情報を表示してください。

条件
・Student構造体を定義する
・名前（char配列）
・年齢（int）
・身長（float）

・Student型の変数を1つ作成する
・各メンバに値を代入する

・printStudentという関数を作成する
・引数はStudent型へのポインタを受け取る
・関数内で全てのメンバを表示する

実行例

名前：Taro
年齢：20
身長：170.5

【学習ポイント】
・構造体を関数に渡す方法
・構造体へのポインタを引数にする方法
・アロー演算子（->）の実践
・実務でよく使われる設計
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
    float height;
}Student;

void printStudent(const Student *p_student);

int main(void)
{
    Student student;
    strcpy(student.name, "Taro");
    student.age = 20;
    student.height = 170.5;

    printStudent(&student);

    return 0;
}

void printStudent(const Student *p_student)
{
    printf("名前：%s\n", p_student->name);
    printf("年齢：%d\n", p_student->age);
    printf("身長：%.1f\n", p_student->height);

}