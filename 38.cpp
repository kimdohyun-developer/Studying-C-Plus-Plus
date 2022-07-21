#include<iostream>

using namespace std;

//프렌드(friend)
//클래스안에서 private 멤버변수에 접근하기위해  클래스내부에 public함수를 통해 private변수를 사용할 수 있도록 한다.
//이것은 외부에서 직접적으로 멤버변수를 바꾸지 못하게 함으로써 정보를 보호하는 것이다.
//하지만 경우에 따라서는 해당 객체의 멤버 변수가 아닌 함수도 private멤버변수에 접근해야만 하는 경우가 발생한다.
//그렇다고 이럴 때마다 매번 private멤버에 접근하기 위한 새로운  public함수를 작성하는 것은 매우 비효율적이다.

//따라서 우리는 friend키워드를 사용하여 접근을 할 수 있게 해준다.

//friend키워드는 지정한 대상에 한해 해당 객체의 모든 멤버에 접근할 수 있는 권한을 부여해 줍니다ㅓ.
//friend키워드는 전역함수, 클래스, 멤버함수의 세가지 형태로 사용할 수 있다.

//프랜드 함수 선언
//문법
//friend 반환형 함수이름(매개변수목록); 
//이렇게 선언된 프랜드 함수는 클래스 선언부에 그 원형이 포함되지만, 클래스의 멤버함수는 아니다.
//이러한 프렌드 함수는 해당 클래스의 멤버변수는 아니지만, 멤버함수와 같은 접근 권한을 가지게 된다. 
//프랜드 선언은 클래스 선언부의 public, private, protected영역 등 어디에나 위치할 수 있으며, 위치에 따른 차이는 전혀 없다.

//예제
 
class Car
{
	private:
	int engine;
	int rpm;
	public:
		void getCar(int a, int b)
		{
			engine = a;
			rpm = b;
		}
		friend void carInfo(Car c); //friend 함수 
}; 

 void carInfo(Car c)
{
	cout<<"engine: "<<c.engine<<" rpm: "<<c.rpm;
}
	
int main(void)
{
	Car cc;
	cc.getCar(1000,3000);
	carInfo(cc);
	return 0;
}
