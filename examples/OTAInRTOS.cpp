#include <Arduino.h>
#include "OTAHandler.h"

void KeepOTAAlive(void* params)
{
    OTAHandler::setEvents();
    OTAHandler::init();

    for (;;) {
        OTAHandler::maintainConnection();
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}

void setup()
{
    //MAKE SURE TO HAVE NETWORK CONNECTION ON ESP BEFORE STARTING OTA
    //WiFi.begin()
    //...
    xTaskCreatePinnedToCore(
            KeepOTAAlive,
            "KeepOTAAlive",
            3500,
            nullptr,
            2,
            nullptr,
            CONFIG_ARDUINO_RUNNING_CORE
    );
}

void loop()
{

}