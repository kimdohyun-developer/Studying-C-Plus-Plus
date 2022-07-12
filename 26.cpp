#include<iostream>

using namespace std;

//인라인 함수(inline function)
//C++에서 함수의 호출은 꽤 복잡한 과정을 거치므로, 약간의 시간이 걸리게 된다.
//이떄 함수를 실행하는 시간이 오래걸린다면, 함수를 호출하는 데 걸리는 시간은 전혀 문제가 되지않는다.
//하지만 함수의 실행시간이 매우 짧다면, 함수 호출에 걸리는 시간도 부담이 될 수도 있다.
//그래서 이럴 경우에는 인라인 함수를 사용한다.
//인라인 함수는 호출될 때 일반적인 함수의 호출과정을 거치지않고, 함수의 모든 코드를 호출된 자리에 바로 삽입하는 방식의 함수이다.
//이 방식을 사용하면 함수를 호출하는 데 걸리는 시간은 절약되지만 함수 호출과정으로 생기는 여러 이점을 포기하게 된다,
//따라서 코드가 매우 적은 함수만을 인라인 함수로 선언하는 것이 좋다.

//인라인 함수의 선언
//문법

//inline (함수의원형) 또는 inline (함수의정의)

//예제 

inline int Sub(int x, int y) //인라인 함수 
{
	return x-y;
 } 
inline void Print(int x) //인라인 함수 
{
	cout<<"계산결과: "<<x;
}
int main(void)
{
	int num1=5, num2=3;
	int result;
	
	result = Sub(num1, num2);
	Print(result);
	return 0;
}
//보통 인라인 함수는 크기가 작아서 함수의 원형을 선언하기 보다 함수의 본체를 정의 하는 경우가 많다.

//인라인 함수가 인라인 코드로 삽입되어 실행될 때
//같은 효과의 코드 
/*
int main(void)

{

    int num1 = 5, num2 = 3;

    int result;

 

    {

        int x = num1, y = num2;

        result = x - y;

    }

 

    {

        int x = result;

        cout << "계산 결과는 " << x << "입니다.";

    }

    return 0;

}
*/

//Plus++
//인라인 함수에서는 재귀호출이 허용되지 않는다. 
