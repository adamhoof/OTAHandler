#include <Arduino.h>
#include "OTAHandler.h"

void setup()
{
    //MAKE SURE TO HAVE NETWORK CONNECTION ON ESP BEFORE STARTING OTA
    //WiFi.begin()
    //...

    OTAHandler::setEvents();
    OTAHandler::init();

}

void loop()
{
    OTAHandler::maintainConnection();
}