#include "convert.h"

void Biner(){
	int JumlahNilai, Index, Index2, Input, Vol, Nilai, Y, Number;
	stack StackDat;
	
	Inisialisasi(&StackDat);
	printf("Masukkan Bilangan Desimal = ");
	scanf("%d", &Input);
	
	
	for(Y = 1,JumlahNilai = Input; JumlahNilai > 0; JumlahNilai = JumlahNilai / 2, Y++,  Nilai > 0)
	 {
		Vol = Y;
		Nilai = JumlahNilai % 2;
		
		printf("%d / 2 = %d, Hasil sisa Bagi = %d", Input, Input / 2, Nilai);
		printf("\n");
		
		Input /= 2;
		Number += Nilai * Index2;
		Index2 *= 10;
		
		Push(Nilai, &StackDat);
	}
	
	printf("\n");
	printf("Biner = ");
	
	for(Index = Vol; Index > 0; Index--) {
		printf("%d", Pop(&StackDat));
	}
	
	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
		
	menu();
}

void Oktal() {
	int JumlahNilai, Input, Vol, Index, Nilai, Y, Number, Index2;
	stack StackDat;
	
	Inisialisasi(&StackDat);
 	printf("Masukkan Bilangan Desimal = ");
	scanf("%d", &Input);
	
	
	for(JumlahNilai = Input; JumlahNilai > 0; JumlahNilai = JumlahNilai / 8,Y = 1, Y++)
	 {
		Vol = Y;
		Nilai = JumlahNilai % 8;
		
		printf("%d / 8 = %d, Hasil sisa Bagi = %d", Input, Input / 8, Nilai);
		printf("\n");
		
		Input /= 8;
		Number += Nilai * Index2;
		Index2 *= 10;
		
		Push(Nilai, &StackDat);
 	}
 	
 	printf("\n");
	printf("Oktal = ");
	
	for(Index = Vol; Index > 0; Index--) {
		printf("%d", Pop(&StackDat));
 	}
 	
 	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
		
	menu();
}

void Heksadesimal() {
	int Input, Vol, Index, JumlahNilai, Nilai, Y, NilaiHasil, Number, Index2;
	stack StackDat;
	
	
	Inisialisasi(&StackDat);
	printf("Masukkan Bilangan Desimal = ");
	scanf("%d", &Input);
	
	for(Y = 1, JumlahNilai = Input; JumlahNilai > 0; JumlahNilai = JumlahNilai / 16, Y++)
	{
		Vol = Y;
		Nilai = JumlahNilai % 16;
		
		printf("%d / 16 = %d, Hasil sisa Bagi = %d", Input, Input / 16, Nilai);
		printf("\n");
		
		Input /= 16;
		Number += Nilai * Index2;
		Index2 *= 10;
		Push(Nilai, &StackDat);
	}
	
	printf("\n");
	printf("Heksadesimal = ");
	 
	for(Index = Vol; Index > 0; Index--) {
		NilaiHasil = Pop(&StackDat);
		
		if(NilaiHasil <= 9) {
 			printf("%d", NilaiHasil);
		} else if(NilaiHasil == 10) {
 			printf("A");
		} else if(NilaiHasil == 11) {
			printf("B");
		} else if(NilaiHasil == 12) {
			printf("C");
		} else if(NilaiHasil == 13) {
 			printf("D");
		} else if(NilaiHasil == 14) {
 			printf("E");
		} else if(NilaiHasil == 15) {
 			printf("F");
		}
	}
	 
	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
		
	menu();
}

void BinerDesimal() {
	int Input, Index, JumlahNilai = 0, Nilai, Total, BP = 1;
	stack StackDat;
	
	system("cls");
	
	Inisialisasi(&StackDat);
	printf("Masukkan bilangan biner = ");
	scanf("%d", &Input);
	
	JumlahNilai = Input;
	while(JumlahNilai != 0) {
		Nilai = JumlahNilai % 10;
		Total = Total + Nilai * BP;
		
		Push(Total, &StackDat);
		
		JumlahNilai = JumlahNilai / 10;
		BP = BP * 2;
	}
	
	printf("\n");
	printf("Desimal = ", Input);
	
	for(Index = 1; Index > 0; Index--) {
		printf("%d", Pop(&StackDat));
 	}
 	
 	printf("\n");
	printf("Press Any Key to continue . . ."); 
		
	getch();
			
	system("cls");
		
	menu();
}
