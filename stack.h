#ifndef stack_H
#define stack_H

#include <stdio.h>
#include <conio.h>

typedef int itemtype;

typedef struct
{
	itemtype item[400];
	int jumlah;
}stack;


void Inisialisasi(stack *s);
int StackEmpty(stack *s);
int StackFull(stack *s);
int Pop(stack *s);
void Push(itemtype x, stack *s);

#endif
