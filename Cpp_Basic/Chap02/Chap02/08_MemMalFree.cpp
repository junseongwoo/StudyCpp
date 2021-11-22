// 길이정보를 인자로 받고
// 해당 길이의 문자열 저장이 가능한 배열 생성하고
// 배열 주소 값을 반환하는 함수 

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char * MakeStrAdr(int len)
{
	char * str = (char *)malloc(sizeof(char)*len);
	return str;
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}