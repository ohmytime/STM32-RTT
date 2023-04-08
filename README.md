# STM32-RTT

Jlink V9
增加了输出浮点数功能，默认显示小数点后3位，可自定义

```java
    int cnt = 0;
    float fCnt = 3.1415926;
    LOG_CLEAR();

    while (1)
    {
        LOGI("This is Info");
        LOGW("如果想显示中文,请使用RTT Client !");
        LOGE("显示8位二进制: %d, %b", cnt, cnt);
        LOGE("显示全部32位的二进制,%d -> %B", cnt, cnt);
        LOGE("显示浮点数(小数点后三位) %f",fCnt);

        cnt++;
        fCnt++;
        Delay(3000);
    }
```
