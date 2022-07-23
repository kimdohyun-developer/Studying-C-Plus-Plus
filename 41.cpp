#include<iostream>

using namespace std;
//정적 멤버(static member) 

//정적 멤버 변수(static member variable)
//클래스에는 속하지만, 객체별로 할당되지 않고 클래스의 모든 객체가 공유하는 멤버를 의미한다.
//멤버 변수가 정적(static)으로 선언되면, 해당 클래스의 모든 객체에 대해 하나의 데이터만이 유지 관리된다.

//정적 멤버 변수는 클래스 영역에서 선언되지만, 정의는 파일 영역에서 수행된다.
//이러한 정적 멤버 변수는 외부연결(external linkage)을 가지므로, 여러 파일에서 접근할 수 있다.

//정적 멤버 변수에도 클래스 멤버의 접근 제한 규칙이 적용되므로, 클래스의 멤버 함수나 프렌드만이 접근할 수 있따.
//하지만 정적 멤버 변수를 외부에서도 접근할 수 있게 하고 싶으면, 정적 멤버 변수를 public영역에 선언하면 된다.

//정적 멤버 함수(static member function) 
//정적 멤버함수는 해당 클래스의 갹체를 생성하지 않고도, 클래스 이름만으로 호출 할 수 있다.
//문법
//1. 객체이름.멤버함수이름(); //일반 멤버함수의 호출
//2. 클래스이름.멤버함수이름(); //정적 멤버함수의 호출

//정적 멤버함수는 static키워드를 붙여 선언한다.
//정적 멤버 함수는 다음과 같은 특징을 같는다.
//1. 객체를 생성하지 않고 클래스 이름만으로 호출할 수 있습니다.
//2. 객체를 생성하지 않으므로, this 포인터를 가지지 않습니다.
//3. 특정 객체와 결합하지 않으므로, 정적 멤버 변수밖에 사용할 수 없습니다.

//예제 

class Register
{
	
	static int num; //정적 멤버 변수 
	int id;
	
	public:
		Register() //객체를 생성하는 동시에 고유번호를 부여하는 방식 
		{
			id=num;;
			num++;
		}
		static void show(Register rr) //정적 멤버 함수 //객체를 생성하지 않아도 쓸 수 있도록 static을 붙인다. 
		{
			cout<<rr.id<<endl;
		} 
	
};

int Register::num=10000; //static변수는 반드시 전역 범위에서 초기화를 한다. 중요!! 

int main(void)
{
	cout<<"test1"<<endl;
	Register t1;
	Register::show(t1); //이런식으로 굳이 객체. 을 안써도 public영역안에 static을 썻기 때문이다. 
	cout<<"test2"<<endl;
	Register t2;
	t2.show(t2); //이런식으로 객체.으로도 불러올 수 있다. 
	cout<<"test3"<<endl;
	Register t3;
	Register::show(t3);
	//숫자가 객체를 생성할 때마다 1이 올라가는 것을 알 수 있다. 
	return 0;
}
