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
  float *age;
  char *owner;
  
} dog;
typedef struct dog dog_t;
#endif
