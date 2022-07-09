#include<iostream>

using namespace std;

//이번에는 함수를 메인보다 뒤에 뒀을 때는 어떻게 해야하는 지 알아보자.
//함수를 메인보다 뒤에 두면 컴파일을 할때 메인이 먼저 읽기때문에 오류가 발생한다.
//그래서 함수의 원형 선언을 통해 이를 방지한다. 
//함수의 원형 선언의 문법
//반환타입 SmallNum(매개변수목록);

//예제-함수의 원형선언 

int SmallNum(int, int); //함수의 원형선언 
//메인함수앞에 미리 선언되어야한다. 
int main(void)
{
	int result;
	
	result=SmallNum(5,7);
	cout<<result;
 } 
 
 int SmallNum(int num1, int num2) //더 작은 수를 판별하는 함수. 
{ 
	if(num1<=num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
} 
