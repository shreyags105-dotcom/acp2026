#include <stdio.h>
#include <string.h>

typedef struct {
    int flight_number;
    char destination[50];
    int available_seats;
} Flight_t;

void readFlights(int n, Flight_t f[]);
void searchByDestination(int n, Flight_t f[], char searchDest[]);

int main() {
    int n;
    printf("Enter number of flights: ");
    scanf("%d", &n);

    Flight_t flights[n];
    char searchDest[50];

    // Read flight details
    readFlights(n, flights);

    // Input destination to search
    printf("Enter destination to search: ");
    scanf("%s", searchDest);

    // Search for flight
    searchByDestination(n, flights, searchDest);

    return 0;
}

void readFlights(int n, Flight_t f[]) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for flight %d:\n", i + 1);

        printf("Flight Number: ");
        scanf("%d", &f[i].flight_number);

        printf("Destination: ");
        scanf("%s", f[i].destination);

        printf("Available Seats: ");
        scanf("%d", &f[i].available_seats);
    }
}

void searchByDestination(int n, Flight_t f[], char searchDest[]) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(f[i].destination, searchDest) == 0) {
            printf("\nFlight available:\n");
            printf("Flight Number: %d\n", f[i].flight_number);
            printf("Available Seats: %d\n", f[i].available_seats);
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo flight available\n");
    }
}