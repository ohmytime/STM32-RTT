#include "stm32f1xx_hal.h"
#include "rttlogger.h"

int main(void)
{
    
    int cnt = 0;
    while (1)
    {
        cnt++;
        LOGI("This is Info");
        LOGW("如果想显示中文，请使用RTT Client !");
        LOGE("This is an error info: %d", cnt);
        HAL_Delay(1000);
    }

    return 0;
}
