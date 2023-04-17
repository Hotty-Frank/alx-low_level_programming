#ifndef DOG_H
#define DOG_H
/**
 * struct dog - functions with structure info type dog.
 * @name: the name
 * @age: the age
 * @owner: who owns the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
