#include<iostream>

using namespace std;

int main()
{
	//메모리의 동적할당(dynamic allocation)
	//런타임에 메모리를 할당받는 것.
	//C++에서는 new연산자와 delete연산자를 통해 c보다 더 효과적인 방법을 제공한다.
	
	//new연산자
	//문법 - 타입* 포인터이름 = new 타입;
	//첫번째 타입은 데이터에 맞는 포인터를 선언하기 위해
	//두번쨰 타입은 메모리의 종류를 지정하기 위해 사용한다.
	//만약 사용할 수 있는 메모리가 부족하여 새로운 메모리를 생성하지 못한다면.
	//new연산자는 널 포인터(null pointer)를 반환한다.
	
	//delete연산자 
	//더는 사용하지 않는 메모리를 다시 메모리 공간에 돌려준다. 
	// 문법- delete 포인터이름;
	
	//예제 
	int*ptr_int = new int;
	*ptr_int = 100;
	
	double*ptr_double = new double;
	*ptr_double = 100.123;
	
	cout<<"int형 숫자값은 "<<*ptr_int<<"입니다."<<endl;
	cout<<"int형 숫자의 메모리 주소는 "<<ptr_int<<"입니다."<<endl;
	cout<<"double형의 숫자값은 "<<*ptr_double<<"입니다."<<endl;
	cout<<"double형의 숫자의 메모리 주소는 "<<ptr_double<<"입니다."<<endl;
	
	delete ptr_int;
	delete ptr_double; 
	
	//delete연산자는 반드시 new연산자를 통해 할당된 메모리를 해제할 때에만 사용해야한다.
	//또한, 한번 해제한 메모리를 다시 해제하려고 시도하면 오류가 발생한다. 
	 
}
