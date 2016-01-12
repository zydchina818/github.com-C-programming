#include <stdio.h>
#include <stdlib.h>

// Suppose that the following declarations are in effect:
struct point { 
	int x, y;
}; 

struct rectangle { 
	struct point upper_left, lower_right; 
};

struct rectangle *p;

// Assume that we want p to point to a rectangle structure whose upper left corner is at
// (10, 25) and whose lower rightt corner is at (20, 15). Write a series of statements that allocate
// such a structure and initialize it as indicated. 

int main (void)
{
	p = malloc(sizeof(struct rectangle));
	
	(*p).upper_left.x = 10;
	(*p).upper_left.y = 25;
	p->lower_right.x = 20;
	p->lower_right.y = 15;
	
	printf("upper_left point position is : (%d, %d)\n", (*p).upper_left.x, (*p).upper_left.y);
	printf("lower_right point position is : (%d, %d)\n", p->lower_right.x, p->lower_right.y);
	
	return 0;
}

 
