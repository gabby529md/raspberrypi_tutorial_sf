#include <wiringPi.h>
#include <stdio.h>

#define LedPin              0

int main(void)
{
    // When initialize wiring failed, print messageto screen
    if(wiringPiSetup() == -1){
        printf("setup wiringPi failed !");
        return 1;
    }

    pinMode(LedPin, OUTPUT);

    printf("\n");
    printf("\n");
    printf("========================================\n");
    printf("|              Blink LED               |\n");
    printf("|    ------------------------------    |\n");
    printf("|         LED connect to GPIO0         |\n");
    printf("|                                      |\n");
    printf("|        LED will Blink at 500ms       |\n");
    printf("|                                      |\n");
    printf("|                            SunFounder|\n");
    printf("========================================");
    printf("\n");
    printf("\n");

    while(1){
        // LED on
        digitalWrite(LedPin, LOW);
        printf("...LED on\n");
        delay(250);
        // LED off
        digitalWrite(LedPin, HIGH);
        printf("LED off...\n");
        delay(250);
    }

    return 0;
}