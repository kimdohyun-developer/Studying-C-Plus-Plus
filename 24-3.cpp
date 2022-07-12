#include<iostream>
#include<string>

using namespace std;

//구조체의 참조
//C++에서 참조자는 주로 구조체와 같은 사용자 정의 타입을 다룰 때 유용하게 사용된다.
//구조체를 참조하는 방법은 변수를 참조하는 방법과 같다.

//에제 
 
 struct Car
 {
 	string carName;
	string carOwner;
	int price; 
 };
 
void Display(const Car&); //함수의 원형 선언 
 
int main(void)
{
	Car myCar={"붕붕이","나",100000};
	Display(myCar);
	return 0;
} 

void Display(const Car& cc) //참조자를 통해  데이터를 꺼내는 것 
{
	cout<<"carName: "<<cc.carName<<endl;
	cout<<"carOwner: "<<cc.carOwner<<endl;
	cout<<"price: "<<cc.price;
}

//위의 예제처럼 함수 내부에서 구조체를 직접 변경할 필요가 없을 때는 const를 사용하여 우너본 구조체에 대한 변경은 허용하지 않는 것이 좋다. 
