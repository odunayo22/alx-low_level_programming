	task0
Define a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *

	task1
1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
	Task2
Write a function that prints a struct dog
Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

	Task3
GitHub repository: alx-low_level_programming
Directory: 0x0E-structures_typedef
File: dog.h

	Task4
Write a function that creates a new dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

	Task5
Write a function that frees dogs.
Prototype: void free_dog(dog_t *d);
