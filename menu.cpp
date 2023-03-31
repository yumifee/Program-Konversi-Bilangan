#include "menu.h"

int menu()
{
	int select;
	
	printf("|-----------------------|");
	 printf("\n|---------MENU----------|\n");
	 printf("|1 Desimal ke Biner     |\n");
	 printf("|2 Desimal ke Oktal     |\n");
 	 printf("|3 Desimal ke Heksa     |\n");
 	 printf("|4 Biner ke Desimal     |\n");
 	 printf("|5 keluar               |\n");
 	 printf("|-----------------------|");
 while(select<5){
 	printf("\n\nPilih :  ");
 	scanf("%d",&select);
 switch(select)
 {
 	case 1:
 		Biner();break;
 	case 2:
 		Oktal();break;
 	case 3:
 		Heksadesimal();break;
	case 4:
		BinerDesimal();break;
	case 5:
	break;
 
 	getch();
 	menu();
 	break;
}
}
}
