#include <stdio.h>

// simple cab fare calculator

void menu();
void showRates();
float calcFare(float dist, int type);

int main() {
    int choice, cabType;
    float dist, fare;

    printf("\n=== CAB FARE CALCULATOR ===\n");

    do {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                showRates();
                break;

            case 2:
                printf("\nEnter distance in km: ");
                scanf("%f", &dist);
                printf("Select cab type:\n1. Mini\n2. Sedan\n3. SUV\nEnter: ");
                scanf("%d", &cabType);

                fare = calcFare(dist, cabType);
                if(fare != -1)
                    printf("\nTotal Fare = ₹%.2f\n", fare);
                break;

            case 3:
                printf("\nThanks for using Cab Fare Calculator!\n");
                break;

            default:
                printf("\nWrong choice! Try again.\n");
        }

    } while(choice != 3);

    return 0;
}
