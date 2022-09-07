#include "abiotsTestComponent.hpp"


extern "C"
{
    void app_main()
    {
        AbiotsTestComponent test(100);
        TestComponent test2(10);
        test.toString();
        test2.toString();
    }
}
