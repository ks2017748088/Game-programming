#include <stdio.h>

int main(void)
{
	int num[5]; //�Է¹��� ���ڵ��� �ִ� �迭 
    int temp; //���Ƿ� MAX�� ���� ���� 
    int i,j,k; //FOR�� ������ 

	//10���� ������ ���ư��鼭 num[]�� �ִ´� 
    for(i = 0; i<5; i++) {
    	scanf("%d", &num[i]); //�Է� �޾Ƽ� num[i]�� �ִ´� 
    }

    for(j=0;j<5;j++) {
        for(k=0;k<4;k++) {
            if(num[k] > num[k+1]) { //���޾��ִ� �� �� �� �տ� �ִ� ���� �� ũ�ٸ� 
                //��ġ ���� 
				temp = num[k];   
                num[k]=num[k+1];
                num[k+1] = temp;
            }
        }
    }

    for (i=0; i<5; i++) {
         if(i == 0) { printf("%d",num[i]); }
         else if(i == 4) { printf(" %d", num[i]); }
         else printf(" %d", num[i]);
    }
} 

//��ó: https://kmj1107.tistory.com/entry/C���-����-10��-�Է¹޾Ƽ�-������������-���� [����̳���]
