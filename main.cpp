#include "PZEM004Tv30.h"

unsigned char ip[4] = {192, 168, 1, 1};

int main()
{
    PZEM004T_Init("/dev/ttyS0");

    while (1)
    {
        float v = PZEM004T_voltage(ip);
        if (v < 0.0)
            v = 0.0;
        printf("voltage: %.2f", v);
        printf("V;\n");

        float i = PZEM004T_current(ip);
        if (i >= 0.0)
        {
            printf("current: %.2f", i);
            printf("A;\n");
        }

        float p = PZEM004T_power(ip);
        if (p >= 0.0)
        {
            printf("power: %.2f", p);
            printf("W;\n");
        }

        float e = PZEM004T_energy(ip);
        if (e >= 0.0)
        {
            printf("energy: %.2f", e);
            printf("Wh;\n");
        }
        printf("--------------------------------------\n");
    }
    return 1;
}
