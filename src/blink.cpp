#include<iostream>
#include<string>
#include "pico/stdlib.h"

#define LED_PIN 25
#define RUN_PIN 21
#define POWER_PIN 20
class led
{
public:
    void SetUpPin(int pin=25, int dir=1)
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
    };
private:
    int m_LedPin;
};
int main()
{
    led LED;
    LED.SetUpPin(2);
    LED.blink();
}
