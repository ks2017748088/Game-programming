#include<stdio.h>

int main()
{
	char ch='a';
	char a_ch[2]="a";
	//char a_ch2[2]="♠"; 는 오류 
	char a_ch2[3]="♠"; 
	//배열의 크기를 늘리면 ♠ 출력 가능 
	char a_ch3[3]="홍"; 
	
	printf("%c\n", ch);
	printf("%s\n", a_ch);
	printf("%s\n", a_ch2);
	printf("%c%c\n", a_ch2[0], a_ch2[1]);
	printf("%c%c\n", a_ch3[0], a_ch3[1]);
}
