#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: Defines metadata about the dog and type of dog's struct
 */

typedef struct dog
{
char *name;
float age;
char *owner; 
} dog;
typedef struct dog dog_t;
_putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
