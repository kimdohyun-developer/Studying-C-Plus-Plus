#include<iostream>

using namespace std;

//복사에는 얕은 복사와 깊은 복사가 있다.
//얕은 복사는 대입연산자를 이용하여 간단하게 같은 객체를 바라보게 함으로써 똑같은 값을 얻을 수 있다.
//하지만 얕은 복사를 하게 되면 메모리를 절약할 수 있지만 객체부분에서 문제가 생긴다.
//그래서 우리는 복사생성자를 통해 깊은 복사를 할 것이다.

//복사생성자(copy constructor)
//자신과 같은 클래스 타입의 다른 객체에 대한 참조를 인수로 전달 받아 그 참조를 가지고 자신을 초기화하는 방법이다.
//복사 생성자는 새롭게 생성되는 객체가 원본 객체와 같으면서도, 완전한 독립성을 가지게 해줍니다.
//그 이유는  깊은 복사이기 때문이다.

//복사 생성자는 다음과 같은 상황에 쓰인다.
//1. 객체가 함수에 인수로 전달될 때
//2. 함수가 객체를 반환값으로 반환할 때
//3. 새로운 객체를 같은 클래스 타입의 기존 객체와 똑같이 초기화할 때

  

class A
{
	public:
		A() //생성자를 통해 객체를 생성할 때 cout을 쓰게 함. 
		{
			cout<<"생성자"<<endl; 
		}
		A(const A& rhs) //복사 생성자를 통해 깊은 복사를 할 수 있다. 
		{
			cout<<"복사 생성자"<<endl; 
		}
		
		A& operator=(const A& rhs) //연산자 오버로딩-추추에 더 자세히 알아보도록 하자. 
		{
			if(this != &rhs)
			{
				cout<<"복사 대입연산자"<<endl;
			}
			return *this;
		}
};

void functionValue(A a){};
void funtionReference(A &a){};
void functionPointer(A* a){};

int main(void)
{
	A a1;
	A a2;
	
	A a3 = a1;
	a1 =a2;
	
	//함수 
    functionValue(a1); //복사 생성자 호출됨
    funtionReference(a1); //복사 생성자 호출안됨
    functionPointer(&a1); //복사 생성자 호출안됨
	return 0;
}
