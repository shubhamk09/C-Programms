#ifndef __WEIGHTED_H__
#define __WEIGHTED_H__

#include "stdio.h"
#include "stdlib.h"
#define FAIL 1
#define TRUE 0

typedef struct box
{
  int unique_id;
  int length;
  int breadth;
  int height;
  char color[50];
  int weight;
}wbox;


void add_box(wbox *ptr, int num);
void print_box(wbox *ptr, int num);
void add_single(wbox *ptr, int *count);
wbox* find_box(wbox *ptr, int num, int id);

#endif