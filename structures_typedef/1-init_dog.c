#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct dog
struct dog {
    char *name;
    float age;
    char *owner;
};

// Function to initialize a struct dog
void init_dog(struct dog *d, char *name, float age, char *owner) {
    // Check if the input pointer is not NULL
    if (d != NULL) {
        // Allocate memory for the name and owner strings
        d->name = strdup(name); // strdup allocates memory and copies the string
        d->age = age;
        d->owner = strdup(owner);
    } else {
        // Handle the case where the input pointer is NULL (optional)
        fprintf(stderr, "Error: NULL pointer passed to init_dog\n");
        exit(EXIT_FAILURE);
    }
}

// Function to free memory allocated for a struct dog
void free_dog(struct dog *d) {
    // Check if the input pointer is not NULL
    if (d != NULL) {
        // Free memory allocated for the name and owner strings
        free(d->name);
        free(d->owner);
    }
}

int main(void) {
    // Declare a struct dog variable
    struct dog my_dog;

    // Initialize the struct using the init_dog function
    init_dog(&my_dog, "Poppy", 3.5, "Bob");

    // Print the values of the struct members
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

    // Free memory allocated for the struct members
    free_dog(&my_dog);

    return 0;
}
