#include "PZEM004Tv30.h"

char port[] = "/dev/ttyUSB0";

PZEM004Tv30 pzem(port);

float voltage, current, power, energy, frequency, pf;

int main()
{
    while (1)
    {
        delay(2000);
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
        printf("Hz;\n");

        printf("PF: %.2f\n", pf);

        printf("--------------------------------------\n");
    }
    return 1;
}
