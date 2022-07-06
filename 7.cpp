#include<iostream>

using namespace std;

int main()
{
	//포인터(pointer)
	
	//예제
	int n = 100; //변수의 선언 
	int *ptr = &n; //포인터의 선언 
	//메모리의 주소값을 저장하는 변수-포인트변수 
	//포인터연산자에는 &(주소 연산자)와 *(참조 연산자)가 있다. 
	//포인터의 선언-타입*포인터이름;
	//동시선언도 가능함- int *ptr1, *ptr2; 이런식으로 
	//포인터는 선언과 동시에 초기화 해주는 것이 좋다.-초기화를 하지 않으면 어딘지 모르는 곳에 값을 저장하는 게 됨.
	//타입* 포인터이름 = &변수이름(or &주소값);
	
	//포인터의 참조
	//선언된 포인터는 *(참조 연산자)를 사용하여 참조가능하다.
	
	//예제-포인터의 주소값과 함께 포인터가 가리키고 있는 주소값의 데이터를 참조.
	
	int x = 7; //변수의 선언 
	int *p = &x; //포인터의 선언 
	int**pp = &p; //포인터의 참조 
	
	int num1 = 1234;
	double num2 = 3.14;
	
	int *ptr_num1 = &num1;
	double *ptr_num2 = &num2;
	
	cout<<"ptr_num1의 크기 : "<<sizeof(ptr_num1)<<endl;
	cout<<"ptr_num1가 가리키는 주소값: "<<ptr_num1<<endl;
	cout<<"ptr_num1가 가리키는 주소에 저장된 값: "<<*ptr_num1<<endl; //ptr_num1이 할당하는 데이터가  주소값이니까 *을 붙이면 주소값에 저장된 값을 불러올 수 있는 것. 
	cout<<"ptr_num2가 가리키는 주소값: "<<ptr_num2<<endl;
	cout<<"ptr_num2가 가리키는 주소에 저장된 값: "<<*ptr_num2; //ptr_num2이 할당하는 데이터가 주소값이니까 *을 붙이면 주소값에 저장된 값을 불러올 수 있는 것. 
}
