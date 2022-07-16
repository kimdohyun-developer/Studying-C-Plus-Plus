#include<iostream>
#include<string>

using namespace std;

//멤버 함수의 공유
//C++에서 하나의 클래스에서 생성된 인스턴스는 각각 독립된 메모리 공간에 저장된 자신만의 멤버변수를 가지지만, 멤버 함수는 모든 인스턴스가 공유합니다.

//따라서 클래스를 이용해 두개의 인스턴스를 생성하더라도 멤버함수는 하나만 존재한다.
//즉, 멤버 함수는 두 인스턴스가 같이 공유한다는 뜻이다.

//this포인터 - 객체의 주소를 저장한 포인터 변수 
//위와 같은 이유로 C++에서는 모든 멤버 함수가 자신만의 this포인터를 가지고 있다.
//이 this포인터는 해당 멤버 함수를 호출한 객체를 가리키게 되며, 호출된 멤버 함수의 숨은 인수로 전달된다.
//이렇게 하면 호출된 멤버 함수는 자신을 호출한 객체가 무엇인지 정확히 파악할 수 있다.
//문법
//*this //포인터이므로 반환 할때! 에는  참조연산자(*)를 써야한다.
//this-> == this.

//예제
 
 class X
 {
 	protected:
 		int data;
 	
 	public:
 		void print() //출력을 위한 함수 
 		{
        	cout<<"this= "<<this<<", data= "<<data<<endl; //this포인터를 사용하는 부분. 
        }
 		void set(int data) //protected 변수에 값을 집어넣기 위한 함수 
 		{
 			this->data=data; //this 포인터. 다른 언어에서 보던 this. 이랑 같은 기능. 
		}
 		bool isEqual(const X& object) //클래스 객체와 값과 같은지 검사하는 함수. 
 		{
 			return (data==object.data); 
		}
 };
 
int main(void)
{
 	X obj1; //인스턴스 생성
	obj1.set(100);
	cout<<"obj1: ";
	obj1.print();
	cout<<"obj1의 주소: "<<&obj1<<endl; //&->주소 

	X obj2; //인스턴스 생성
	obj2.set(200);
	cout<<"obj2: ";
	obj2.print();
	cout<<"obj2의 주소: "<<&obj2<<endl;	
	
	if(obj1.isEqual(obj2))
	{
		cout<<"obj1과 obj2는 주소값이 같습니다.";
	} 
	else
	{
		cout<<"obj1과 obj2는 주소값이 다릅니다." ;
	} 
} 
 
