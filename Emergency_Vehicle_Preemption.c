#include <stdio.h>
#include <string.h>

void emergencyMode() {
    // Placeholder for emergency mode logic (currently not used)
}

void normalCycle() {
    // Placeholder for normal cycle logic (currently not used)
}

// Main Program
int main() {
    int running = 1;
    int n = 4;
    int i, sirenOn, distance;
    char a[4][2] = {"N", "S", "E", "W"};
    char signalDirection[2];
    char registered[10];

    printf("=== SMART EMERGENCY VEHICLE PRIORITY SYSTEM ===\n");
    printf("Sensors: RFID/IR modules detect siren & distance automatically.\n");

    while (running == 1) {
        printf("\nEnter detected vehicle direction (N/E/S/W or X to exit): ");
        scanf("%s", signalDirection);

        // Exit condition
        if (strcmp(signalDirection, "X") == 0 || strcmp(signalDirection, "x") == 0) {
            printf("\n=== INITIATING NORMAL TRAFFIC CYCLE ===\n");
            for (i = 0; i < n; i++) {
                printf("Direction %s == GREEN\n", a[i]);
                printf("Other directions == RED\n");
                printf("(Signal ON for 60 seconds...)\n");
            }
            printf("=== System shutting down safely.===\n");
            running = 0;
        }
        else {
            printf("Emergency message received? (Yes/No): ");
            scanf("%s", registered);
            printf("Enter distance from signal (in meters): ");
            scanf("%d", &distance);
            printf("Siren ON? (1 for Yes / 0 for No): ");
            scanf("%d", &sirenOn);

            // Emergency condition check
            if (sirenOn == 1 || strcmp(registered, "Yes") == 0 || strcmp(registered, "YES") == 0) {
                printf("\n=== EMERGENCY VEHICLE DETECTED FROM %s ===\n", signalDirection);
                printf("Setting signal to GREEN %s\n", signalDirection);
                printf("ALL OTHER DIRECTIONS SET TO RED\n");
                printf("SIMULATING GREEN LIGHT FOR 1 MINUTE\n");

                for (int t = 60; t >= 0; t--) {
                    printf("%d\n", t);
                }

                printf("Emergency cleared. Restoring normal cycle.\n");
                for (i = 0; i < n; i++) {
                    if (strcmp(a[i], signalDirection) != 0) {
                        printf("Direction %s == GREEN\n", a[i]);
                        printf("Other directions == RED\n");
                        printf("(Signal ON for 60 seconds...)\n");
                    }
                }
            }
            else {
                printf("\n=== INITIATING NORMAL TRAFFIC CYCLE ===\n");
                for (i = 0; i < n; i++) {
                    printf("Direction %s == GREEN\n", a[i]);
                    printf("Other directions == RED\n");
                    printf("(Signal ON for 60 seconds...)\n");
                }
            }
        }
    }

    return 0;
}
