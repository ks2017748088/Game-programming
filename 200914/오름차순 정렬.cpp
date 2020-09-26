#include <stdio.h>

int main(void)
{
	int num[5]; //입력받을 숫자들을 넣는 배열 
    int temp; //임의로 MAX값 넣을 공간 
    int i,j,k; //FOR문 증가값 

	//10개의 정수를 돌아가면서 num[]에 넣는다 
    for(i = 0; i<5; i++) {
    	scanf("%d", &num[i]); //입력 받아서 num[i]에 넣는다 
    }

    for(j=0;j<5;j++) {
        for(k=0;k<4;k++) {
            if(num[k] > num[k+1]) { //연달아있는 두 수 중 앞에 있는 수가 더 크다면 
                //위치 변경 
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

//출처: https://kmj1107.tistory.com/entry/C언어-숫자-10개-입력받아서-오름차순으로-정렬 [토순이네집]
