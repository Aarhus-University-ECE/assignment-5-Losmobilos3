//#include <malloc.h>
#include "circle.h"
#include <stdlib.h>


void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/
  for (int i = 0; i < 5; i++) //
    {                         //
      c[i].r = i;             // b)
      c[i].p.x = i;           //
      c[i].p.y = i;           //
    }                         //
}

int circleIsValid(const circle * c) {
/*post: answer to exercise 6.c*/
	if (c->r > 0)                    // c)
    	return 1;                    //
	return 0;						 //
}

void translate(circle* c, const point* p) {
/*answer to exercise 6.d*/
  c->p.x += p->x;                         // d)
  c->p.y += p->y;                         //
}



