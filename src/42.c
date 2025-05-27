#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

typedef struct {
    int x[MAX_N];
} Coordinate;

void readCoordinates(int n) {
    FILE *file = fopen("coordinates.txt", "r");
    if (!file) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; ++i) {
        fscanf(file, "%d", &Coordinate{x[i]});
    }
}

void printCoordinates(int n) {
    FILE *file = fopen("coordinates.txt", "w");
    if (!file) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; ++i) {
        fprintf(file, "%d ", x[i]);
    }
    fclose(file);
}

void calculateCentroid(int n) {
    int totalX = 0;
    int totalY = 0;

    FILE *file = fopen("coordinates.txt", "r");
    if (!file) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; ++i) {
        fscanf(file, "%d %d", &Coordinate{x[i]}, &Coordinate{y[i]});
        totalX += x[i];
        totalY += y[i];
    }
    fclose(file);

    if (totalX == 0 || totalY == 0) {
        perror("Failed to read coordinates");
        exit(EXIT_FAILURE);
    }

    int centerX = (totalX + 0.5f) / n;
    int centerY = (totalY + 0.5f) / n;

    FILE *file = fopen("centroid.txt", "w");
    if (!file) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "%d %d\n", centerX, centerY);

    fclose(file);
}

int main() {
    int n;
    printf("Enter the number of coordinates: ");
    scanf("%d", &n);

    readCoordinates(n);
    printCoordinates(n);
    calculateCentroid(n);

    return 0;
}
