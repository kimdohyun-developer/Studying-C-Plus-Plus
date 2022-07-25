#include<iostream>

using namespace std;

//상수 멤버(constant member)

//상수 멤버변수(constant member variable)
//한번 초기화하면, 그 값을 변경할 수 없는 멤버변수 
//이러한 상수 멤버 변수는 변수의 타입 앞에 const키워드를 사용하여 선언한다.
//문법
//const 타입 멤버변수이름; 
//+클래스 전체에 걸쳐 사용되는 중요한 상수는 상수 멤버변수로 정의하여 사용하는 것이 좋다. 

//상수 멤버 함수(constant member function) 
//호출한 객체의 데이터를 변경할 수 없는 멤버함수 
//이러한 상수 멤버 함수는 함수의 원형 마지막에 const키워드를 사용하여 선언한다.
//문법
//함수의 원형 const;
//호출한 객체의 데이터를 단순히 읽기만 하는 멤버함수는 상수 멤버함수로 정의하는 것이 정보보호 측면에서도 좋다.

//예제 

class Const
{
	int x,y;
	
	public:
		void set(int x, int y)
		{
			this->x=x;
			this->y=y;
		}
		void print() const // 상수멤버함수 
		{
			//예를 들어여기에 x=10;을 넣으면 오류가 나는 것을 알 수 있다.
			//이것은 const의 특징이다.
			cout<<"x: "<<x<<" y: "<<y<<endl;
		}
	
};

const int invariant = 6174; 

int main(void)
{
	//상수 멤버 변수의 이용 
	//invariant=10;이런식으로 다시 초기화를 하면 오류가 난다.
	//이것 또한 cosnt의 특징이다. 
	cout<<"invariant: "<<invariant<<endl; 
	
	//상수 멤버 함수의 이용 
	Const cc;
	cc.set(11,12);
	cc.print();
	return 0;
}

