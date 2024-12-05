#include<stdlib.h>
#include<string.h>
#include "pico/stdlib.h"

#define LED_PIN 25
#define RUN_PIN 21
#define POWER_PIN 20
    int m_LedPin;
    void SetUpPin(int pin, int dir)
    {
        m_LedPin = pin;
        gpio_init(pin);
        gpio_set_dir(pin, dir);
    }
    void blink()
    {
        while(true)
        {
            gpio_put(m_LedPin, true);
            sleep_ms(250);
            gpio_put(m_LedPin, false);
        }
    }


int main()
{
    SetUpPin(2,1);
    blink();
}
