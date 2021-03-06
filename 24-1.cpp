#include<iostream>

using namespace std;

//참조자(reference)
//크기가 큰 구조체와 같은 데이터를 함수의 인수로 전달할 경우에 사용한다.
//또한 C++의 클래스(class)를 설계할 때에도 자주 사용된다.

//참조자의 선언-예 
//int 변수이름; //변수의 선언 
//int& 참조자이름 = 변수이름; //참조자 선언 
//이때 &연산자는 주소연산자가 아닌 타입을 식별하기 위해 사용하는 식별자로 사용된 것이다.
//즉, (타입)&는 (타입)형 변수에 대한 참조를 의미한다. 
//이렇게 선언된 참조자는 대상 변수와 같은 메모리 위치를 참조하게 된다.

//참조자를 선언할때 주의해야할 것 
//1. 참조자의 타입은 대상이 되는 변수의 타입과 일치해야 합니다.
//2. 참조자는 선언과 동시에 초기화되어야 합니다.
//3. 참조자는 한 번 초기화되면, 참조하는 대상을 변경할 수 없습니다.

//예제 
int main()
{
	int x =10; //변수의 선언 
	int &y = x; //참조자 선언 
	
	cout<<"x: "<<x<<"y: "<<y<<endl;
	y++; //참조자를 이용한 증가연산. 
	cout<<"x: "<<x<<"y: "<<y<<endl;
	cout<<"x의 주소값: "<<&x<<"y의 주소값: "<<&y<<endl; //주소값을 출력 
}

//참조자를 이용해 증가연산을 수행하면, 참조 변수뿐만 아니라 대상 변수도 값이 변경됨을 알 수 있음.
 
