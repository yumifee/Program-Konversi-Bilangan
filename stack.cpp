#include "stack.h"

void Inisialisasi(stack *s) {
	s->jumlah = 0;
}

int StackEmpty(stack *s) {
	return (s->jumlah == 0);
}

int StackFull(stack *s) {
	int Nilai;

	return (s->jumlah == Nilai);
}


int Pop(stack *s) {
	if(StackEmpty(s)) {
		printf("stack kosong\n");
	} else {
		--(s->jumlah);
		return (s->item[s->jumlah]);
	}
	
	return 0;
}

void Push(itemtype x, stack *s) {
	if(StackFull(s)) {
		printf("stack penuh !\n");
	} else {
		s->item[s->jumlah]=x;
	 	++(s->jumlah);
	}
}
