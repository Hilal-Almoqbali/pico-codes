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
    for(int i = 0; msg[i] != '\0'; i++)
    {
        if(strcmp(msg[i],"0"))
        {
            led_blink(LED_PIN,2);
            sleep_ms(1);
        }
        else
        {
            led_blink(LED_PIN,5);
            sleep_ms(1);
        }
    }
}
int main()
{
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    signal("11101010111010110101010110111101010111010110101010110101111101010111101010111010110101010110101111101010110101010110000101011010101011000010101111010101110101101010101101011111010101111010101110101101010101101011111010101101010101100001010110101010110000101011110101011101011010101011010111110101011110101011101011010101011010111110101011010101011000010101101010101100001010101111101010111101010111010110101010110101111101010110101010110000101011010101011000010101");

}
