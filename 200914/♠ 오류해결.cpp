#include<stdio.h>

int main()
{
	char ch='a';
	char a_ch[2]="a";
	//char a_ch2[2]="��"; �� ���� 
	char a_ch2[3]="��"; 
	//�迭�� ũ�⸦ �ø��� �� ��� ���� 
	char a_ch3[3]="ȫ"; 
	
	printf("%c\n", ch);
	printf("%s\n", a_ch);
	printf("%s\n", a_ch2);
	printf("%c%c\n", a_ch2[0], a_ch2[1]);
	printf("%c%c\n", a_ch3[0], a_ch3[1]);
}
