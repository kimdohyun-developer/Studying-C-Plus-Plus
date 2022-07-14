#include<iostream>

using namespace std;

//정적변수(static variable)
//C++에서 정적변수는 프로그램이 실행되는 내내 유지되는 변수를 의미한다.
//이러한 정적변수는 메모리상의 데이터영역에 저장되며, 초기화하지 않으면 0으로 자동 초기화된다,
//정적변수에는 3가지 유형이 있다. 
//1. 연결을 가지지 않는 정적 변수
//2. 내부 연결을 가지는 정적 변수
//3. 외부 연결을 가지는 정적 변수

//연결을 가지지 않는 정적 변수
//연결을가지지 않는 정적변수는 블록 내부에서 static키워드를 사용하여 정의한다.
//이러한 연결을 가지지 않는 정적 변수는 지역변수(Local variable)와 전역변수(global variable)의 특징을 모두 가지게 된다.

//이 변수는 전역 변수(global variable)처럼 단 한번만 초기화되며, 프로그램이 종료되어야 메모리상에서 사라진다.
//또한 이렇게 선언된 변수는 지역변수(Local variable) 처럼 해당 블록 내에서만 접근할 수 있다.

//예제

void Local(void);
void StaticVar(void); 
 
int main(void)
{
	for(int i =0; i<3; i++)
	{
		Local();
		StaticVar();
	}
	return 0;
} 

void Local(void)
{
	int count =1;
	cout<<"Local함수의 호출 회수: "<<count<<endl;
	count++;
}

void StaticVar(void)
{
	static int static_count=1; //연결을 가지지 않는 정적변수 
	cout<<"StaticVar함수의 호출 회수: "<<static_count<<endl;
	static_count++;
}

//실행시켜보면 지역변수와 정적변수와의 차이를 볼 수 있다.
//지역변수는 증감연산자를 써도 값이 올라가지 않지만 정적변수는 값이 1씩 증가하는 것을 볼 수 있다.

//지역변수인 count는 함수의 호출이 끝날때마다 메모리상에서 사라지지만
//연결을 가지지 않는 정적변수인 static_count는 함수의 호출이 끝나도 메모리상에서 사라지지 않는다.
//그러므로 다음번에 함수를 호출할 때에도 이전의 데이터를 그대로 저장하고 있다.
//또한 정적변수는 전역변수와 달리 자신이 선언된 함수이외의 영역에서는 호출 할 수 없다.
  
