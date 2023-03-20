#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 * @name: name of dog variable
 * @age: age of dog variable
 * @owner: owner of dog variable
 * Description: about dog data
 */
struct dog
{
	char *name;
	int age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
