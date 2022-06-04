#include "PZEM004Tv30.h"

PZEM004Tv30 pzem("/dev/ttyUSB0");

float voltage, current, power, energy, frequency, pf;

int main()
{
    while (1)
    {
        // Read the data from the sensor
        voltage = pzem.voltage();
        current = pzem.current();
        power = pzem.power();
        energy = pzem.energy();
        frequency = pzem.frequency();
        pf = pzem.pf();

        printf("voltage: %.2f", voltage);
        printf("V;\n");

        printf("current: %.2f", current);
        printf("A;\n");

        printf("power: %.2f", power);
        printf("W;\n");

        printf("energy: %.2f", energy);
        printf("Wh;\n");

        printf("frequency: %.2f", frequency);
        printf("Wh;\n");

        printf("PF: %.2f", pf);
        printf("Wh;\n");

        printf("--------------------------------------\n");
        delay(2000);
    }
    return 1;
}
