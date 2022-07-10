#include<iostream>

using namespace std;

//인수 전달 
//함수를 호출할 때에는 함수에 필요한 데이터를 전달해줄 수 있다. 
//인수 전달 방법 
//1. 값에 의한 전달(call by value)
//2. 참조에 의한 전달(call by reference) 

//값에 의한 전달
//변수가 가지고 있는 값을 함수의 매개변수에 복사하는 방식이다.
//이 방법을 쓰면 변수와 매개변수는 별개의 변수가 되기 때문에 매개변수의 값은 계속 바뀌어도 변수의 값은  변하지 않는다. 
//예제

void Local(int); //함수의 원형 선언 

int main(void)
{
	int f = 10;
	cout<<"f의 초기값: "<<f<<endl;
	
	Local(f); //함수사용 
    cout<<"f의 함수값: "<<f;
    return 0; 
}

void Local(int num) //사용자 정의함수. 
{
	num+=10;
}

//Local 함수의 매개변수 num은 f의 값을 전달 받는다.
//따라서 함수 내에서 매개변수 num의 값을 아무리 변경하더라도 원래 인수로 전달된 변수f의 값은 절대 변경되지 않는다. 
