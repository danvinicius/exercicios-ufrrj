#include <stdio.h>

int main()
{
    system("clear || cls");
    long int habitantesA = 5000000;
    long int habitantesB = 7000000;
    int tempoEmAnos = 0;
    float taxaNatalidadeA = 0.03;
    float taxaNatalidadeB = 0.02;

    while (habitantesA < habitantesB)
    {
        habitantesA += (taxaNatalidadeA * habitantesA);
        habitantesB += (taxaNatalidadeB * habitantesB);
        tempoEmAnos += 1;
    }
    printf("Após %d anos a população do país A ultrapassará a população do país B\n", tempoEmAnos);
    return 0;
}