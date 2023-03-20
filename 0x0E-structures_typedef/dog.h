#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

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
