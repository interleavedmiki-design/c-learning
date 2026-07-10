#include <stdio.h>
#include <stdint.h>

#define SWITCH_ON   1
#define SWITCH_OFF  0

int main(void)
{
    uint8_t i;
    uint8_t switch_state[5] = {1, 0, 1, 1, 0};
    uint8_t switch_on_count = 0;

    int switch_count = sizeof(switch_state) / sizeof(switch_state[0]);

    for(i = 0; i < switch_count; i++)
    {
        if(switch_state[i] == SWITCH_ON)
        {
            printf("スイッチ%d:\tON\n", i);
            switch_on_count++;
        }
        else if(switch_state[i] == SWITCH_OFF)
        {
            printf("スイッチ%d:\tOFF\n", i);
        }

        else
        {
            printf("スイッチ%d:\terror\n", i);
        }
    }

    printf("ONの数:\t%d", switch_on_count);

    return 0;
}
