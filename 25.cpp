#include<iostream>

using namespace std;

//함수 오버로딩(function overloading)
//같은 이름의 함수를 중복하여 정의하는 것.
//같은 일을 처리하는 함수를 매개변수의 형식을 조금씩 달리하여, 하나의 이름으로 작성할 수 있게 해주느느 것이다.

//함수 시그니처(function signiture)
//함수의 원형에 명시되는 매개변수 리스트
//예- 두 함수가 매개변수의 개수와 그 타입이 모두 같아면, 이 두함수의 시그니처는 같다고 할 수 있다.
//즉, 함수의 오버로딩은 서로 다른 시그니처를 갖는 여러함수를 같은 이름으로 정의하는 것이다. 

void Work(const char* str, int n)
{
	for(int i =0; i<n; i++)
	{
		cout<<str<<endl;
	}
} 

void Work(const char*str1, const char*str2)
{
	cout<<str1<<str2<<endl;
}

void Work(int x, int y)
{
	cout<<x*y<<endl;
}

void Work(double x, double y)
{
	cout<<x/y<<endl;
}

//기능도 다르고 매개변수도 다르지만 이름은 같은 함수들을 여러개 만들었다.
//이것이 오버로딩!!.

int main(void)
{
  	Work("Let's go party!",3);
	Work("friday night","is burning!!");
	Work(5,4);
	Work(6.3,2.1);
	return 0;
}

//Plus++
//오버로딩에서 매개변수에 들어가는 값이 모호하면 오류가 난다.
//예를 들어 맨 마지막에 double형이 매개변수인 것에 하나는 double형 값, 또 다른하나는 int형 값이 들어가면 
//모호한 호출이 된다. 그러므로 오류를 발생시킨다. 
//예
//Work(6.3,3); //이런식으로 넣으면 안된다는 거다. 
