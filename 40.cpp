#include<iostream>
#include<string> 
using namespace std;

//프렌드 멤버 함수(friend member function) 
//해당클래스의 모든 멤버 함수가 특정 클래스의 프렌드가 된다.
//하지만 멤버 함수에 따라 특정 클래스의 프렌드 성정이 필요 없는 멤버 함수도 있다.

//프렌드 멤버함수란 해당 클래스의 특정 멤버 함수만을 프렌드로 지정하는 것이다.
//이것은 프렌드 설정이 꼭 필요한 함수에 대해서만 접근을 허락하므로, 정보은닉(data hiding)및 캡슐화(encapsulation)개념에 더욱 가깝게 구현할 수 있게 된다.

//예제

class Name
{
	private:
		string name;
		
	public:
		getName(string a)
		{
			name = a;
		}
		friend void nameInfo(Name a); //프랜트 멤버 함수 선언 
};

void nameInfo(Name a)
{
	cout<<"이름: "<<a.name;
 } 
 
int main(void)
{
	Name nn;
	nn.getName("홍길동");
	nameInfo(nn); //nameInfo함수가 클래스에 포함되어있지 않더라도 클래스에 접근 할 수 있따. 
	return 0;     //클래스 내부에 객체를 생성하고 사용하는 게 아니기 때문에 nn.nameInfo라고 쓰지 않는다. 
}
