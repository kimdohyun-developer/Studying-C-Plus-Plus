#include<iostream>

using namespace std;

//연산자 오버로딩(operator overloading)
//C++에서는 함수 오버로당과 같은 개념으로 연산자에 대해서도 오버로당을 제공한다.
//또한 연산자 오버로당을 사용자 정의 타입까지 확장할 수 있으며, 클래스도 하나의 타입임을 확실히 보여준다.

//연산자 함수(operator function)
//C++에서는 연산자를 오버로당하기 위해서 연산자 함수(operator function)라는 것을 사용한다.
//문법
//operator오버로딩할연산자(매개변수목록)

//연산자 함수는 operator키워드를 사용하여 연산자를 사용하여 연산자를 오버로딩한다.
//오버로딩할 연산자는 적법한 C++연산자여야 하며, operator키워드와 공백없이 연결되어 표시해야 한다. 
//이러한 연산자 함수의 장점은 복잡한 함수 이름대신에 간편하게 연산자를 사용할 수 있다는 것이다.

//예제
 
class Num
{
	int num1;
	int num2;
	
	
	public:
		Num(){};
		Num(int a,int b)
		{
			num1=a;
			num2=b;
		}
		void showNum()
		{
			cout<<"num1: "<<num1<<" num2: "<<num2<<endl;
		}
		
		Num operator++(int) //오버로딩이니까 매개변수가 있어도 되고 없어도 된다. 
		{
			num1+=1;
			num2+=1;
			return *this; //this 포인터로 객체를 반환한다. 
		}
};
int main(void)
{
	Num t1(10,2);
	Num t2;
	cout<<"t2"<<endl; 
	t2.showNum();
	cout<<"t1"<<endl;
	t1.showNum();
	
	t2=t1++; //이런식으로 오버로딩한 연산자를 사용할 수 있다. 
	cout<<"t2"<<endl;
	t2.showNum();
	cout<<"t1"<<endl;
	t1.showNum();
	return 0;
}
