#include<stdlib.h>
#include<string.h>
#include "pico/stdlib.h"

#define LED_PIN 25
#define RUN_PIN 21
#define POWER_PIN 20
void led_blink(unsigned int port,unsigned int time)
{
    gpio_put(port, true);sleep_ms(time);
    gpio_put(port, false);
}
void signal(const char* msg)
{
    for(int i = 0; i < sizeof(msg); i++)
    {
        if(strcmp(msg[i],"0"))
            led_blink(LED_PIN,10);
        if(strcmp(msg[i],"1"))
            led_blink(LED_PIN,25);
    }
}
int main(){
     gpio_init(LED_PIN);
     gpio_set_dir(LED_PIN, GPIO_OUT);
     while (true)
     {
        signal("10011010001");



    }
}
