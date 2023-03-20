#ifndef _STRUCT_
#define _STRUCT_
/**
  * struct dog - dog attributes
  * @name: name
  * @age:  age of the dog.
  * @owner: owner of the dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
