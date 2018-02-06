#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

//node
struct birthday{
	char name[100];
	int day;
	int month;
	int year;
	//list_head has next and prev, embed ll within nodes
	struct list_head list;
};

struct hashTable{
	struct bucket bucket_head;
	unsigned int size;
};

// hash function for using name as key
unsigned int hashName(unsigned char *str){
  unsigned long hash = 0;
  int c;
  while (c = *str++)
      hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

  return hash % ?? ;
}







/* This function is called when the module is loaded. */
int simple init(void){
	//initialise 5 struct birthday elements
	struct birthday *person1,*person2,*person3,*person4,*person5 ;
	//initialise 

	printk(KERN INFO "Loading Module\n");
	return 0;
}

/* This function is called when the module is removed. */
void simple exit(void){
	printk(KERN INFO "Removing Module\n");
}
/* Macros for registering module entry and exit points. */

module init(simple init);
module exit(simple exit);
MODULE LICENSE("GPL");
MODULE DESCRIPTION("Simple Module");
MODULE AUTHOR("Ashish Adhikari");