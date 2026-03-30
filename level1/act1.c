#include <stdio.h>

void inputTemperatures(int n, float temps[n]);
float findHighest(int n, float temps[n]);
float findLowest(int n, float temps[n]);
void output(float max, float min);

int main() {

    float temps[7];
    float max, min;

    inputTemperatures(7,temps);
    max=findHighest(7,temps);
    min=findLowest(7,temps);
    output(max,min);// Call function to input 7 temperatures
    // Call function to find highest temperature
    // Call function to find lowest temperature
    // Call function to display results

    return 0;
}

void inputTemperatures(int n, float temps[n]) {
    printf("Enter temperatures:\n");
    for(int i=0;i<n;i++){
        scanf("%f",&temps[i]);
    }
    // Write code to read temperatures
}

float findHighest(int n, float temps[n]) {
    float max=temps[0];
    for(int i=1;i<n;i++)
    {
        if(temps[i]>max)
        {
            max=temps[i];
        }
    }
    return max;// Write code to find highest temperature
}

float findLowest(int n, float temps[n]) {
    float min=temps[0];
    for(int i=1;i<n;i++)
    {
        if(temps[i]<min)
        {
            min=temps[i];
        }
    }
    return min;// Write code to find lowest temperature
}

void output(float max, float min) {
    printf("Highest temperature: %.2f\n", max);
    printf("Lowest temperature: %.2f\n", min);
    // Write code to display results
}