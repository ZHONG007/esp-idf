#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include "esp_log.h"
using namespace std;

extern "C"
{
    class AbiotsTestComponent
    {
    private:
        const char *TAG = "AbiotsTestComponent";
        uint32_t size;
        string abiotsTestName = CONFIG_ABIOTS_TEST_NAME;
        const char *projectVer = "CONFIG_APP_PROJECT_VER";

    public:
        AbiotsTestComponent(uint32_t size) : size(size){};
        void toString(void);
    };

    class TestComponent
    {
    private:
        const char *TAG = "AbiotsTestComponent";
        uint32_t size;
        const char *abiotsTestName = CONFIG_ABIOTS_TEST_NAME;
        const char *projectVer = "CONFIG_APP_PROJECT_VER";

    public:
        TestComponent(uint32_t size) : size(size){};
        void toString(void);
    };

    class WifiComponent
    {
    private:
        uint32_t size = 19;

    public:
        void ConnectWifi(void);
    };
}