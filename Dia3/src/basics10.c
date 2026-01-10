#include <stdio.h>

// Demonstrating if statements in C. Similar to past languages.
char *get_temperature_status(int temp) {
    if (temp < 70) {
        return "Too cold!";
    } else if (temp > 90) {
        return "Too hot!";
    } else {
        return ("Just right");
    }
}


int main() {

    // Validating input for below 70
    char *temp_below_70 = get_temperature_status(60);
    printf("The temperature is: %s\n", temp_below_70);

    //Validating input for above 90
    char *temp_above_90 = get_temperature_status(100);
    printf("The temperature is: %s\n", temp_above_90);

    // Validating input between 70-90
    char *temp_between_70_90 = get_temperature_status(75);
    printf("The temperature is: %s\n", temp_between_70_90);

}
