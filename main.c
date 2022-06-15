#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardid, pin;
	int i;
	char check;
	
	printf("Nhap ma cardid : ");
	scanf("%d", &cardid);
	printf("Nhap ma pin: ");
	scanf("%d", &pin);
	
	if (cardid==123 && pin==456)
	
	{
	printf("Chon 1 de rut tien -");
	printf("Chon 2 de chuyen khoan -");
	printf("Chon 3 de xem so du -");
	printf("Chon 4 de ket thuc");
	do {
	
		printf("\nMoi ban chon Menu: ");
		scanf("%d", &i);
		switch (i)
		{
			case 1:
			printf("Moi ban rut tien: ");
			break;
			case 2:
			printf("Moi ban chuyen khoan: ");
			break;
			case 3:
			printf("Kiem tra so du: ");
			break;
			case 4:
			printf("Ket thuc: ");
			break;
				
			}
			printf("\n chon Y/N de tiep tuc : ");
		fflush(stdin); 
		scanf("%c", &check);
		
			}
	
	while (check != 'N');
		
	}	
	else 
	{ printf("\ninvalid");
	}
	return 0;
}
