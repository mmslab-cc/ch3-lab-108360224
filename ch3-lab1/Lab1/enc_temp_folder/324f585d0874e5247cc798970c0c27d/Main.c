#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �b�o�̼��g�ŧi�禡
int Odd(int);
int Even(int);
int TotalSum(int);
int main(void)
{
	int n, sum; 
	char choice;
	printf("1+2+...+n=?�п�Jn=\n");
	scanf("%d", &n);
	printf("�аݭn���_�ƩM(O),���ƩM(E),�٬O��ƩM(I)?�п��:\n");
	scanf(" %c", &choice);
	switch (choice) {
	case 'O': 
		sum = Odd(n); 
		break; 
	case 'E': 
		sum = Even(n); 
		break; 
	case 'I': 
		sum = TotalSum(n); 
		break; 
	default: 
		printf("��ܿ��~\n"); 
		return -1;
	} 
	printf("�`�X��%d\n", sum); 
	system("pause"); 
	return 0;


}

int Odd(int n) {
	int i, total = 0; 
	for (i = 1; i <= n; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;
}
int Even(int n) {
	int i, total = 0; 
	for (i = 1; i <= n; i++) 
		if (i % 2 == 0) 
			total = total + 1; 
	return total;
	

}
int TotalSum(int n) {
	return Odd(n) + Even(n);
}


