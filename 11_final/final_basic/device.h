/*
【課題32 総合問題①】

LEDを管理するプログラムを作成してください。

条件

・構造体 Device を作成する
    int id;
    const char *name;
    int status;      // 0:OFF 1:ON

・device.c に以下の関数を作成する

void printDevice(const Device *dev);

・constポインタを使用すること

・main.cでDeviceを2つ作成する

    {1, "LED1", 1}
    {2, "LED2", 0}

・printDevice()で表示する

実行例

ID : 1
NAME : LED1
STATUS : ON

ID : 2
NAME : LED2
STATUS : OFF
*/

typedef struct 
{
    int         id;
    const char  *name;
    int         status;
}Device;

extern void printDevice(const Device *dev);