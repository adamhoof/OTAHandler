#pragma once

#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

class OTAHandler
{
public:
    static void setEvents();

    static void init();

    static void maintainConnection();
};
