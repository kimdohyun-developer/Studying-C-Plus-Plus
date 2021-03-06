#include<iostream>

using namespace std;

//네임스페이스(namespace)
//내부 식별자에 사용될 수 있는 유효범위를 제공하는 선언적 영역 
//C++에서는 변수, 함수, 구조체, 클래스 등을 서로 구분하기 위해서 이름으로 사용되는 다양한 내부 식별자(identifier)를 가지고 있다.
//하지만 프로그램이 복잡해지고 여러 라이브러리가 포함될 수록  내부 식별자 간에 충돌할 가능성도 그만큼 커진다.
//이러한 이름 충돌 문제를 C++에서는 네임스페이스(namespace)를 통해 해결하고 있다.
 
 //네임스페이스의 정의
 //C++에서는 namespace키워드를 사용하여 사용자가 새로운 네임스페이스를 정의할 수 있다.
 //이러한 네임스페이스는 전역위치뿐만 아니라 다른 네임스페이스 내에서도 정의될 수 있다.
 //하지만 블록 내에서는 정의될 수 없으며, 기본적으로 외부연결을 가지게 된다.
 
 //일반적으로 네임스페이스는 헤더파일에서 정의되며, 언제나 새로운 이름을 추가할 수 있도록 개방되어 있다.
 
 //예
 
namespace kang
{
 	void Display(); //함수의 원형 
 	int count; //변수의 선언 
}
namespace kim
{
	double display; //변수의 선언 
	int count; //변수의 선언 
} 
//C++에서는 전역 네임스페이스(global namespace)라고 하는 파일 수준의 선언 영역이 존재한다.
//일반적으로 식별자의 네임스페이스가 명시되지않으면, 전역 네임스페이스에 자동으로 포함되게 된다.
//또한, C++표준라이브러리 타입과 함수들은 std네임스페이스 또는그 속에 중첩된 네임스페이스에 선언되어잇다. 

//네임스페이스로의 접근 
//네임스페이스에 접근하기 위해서는 범위 지정 연산자(::,scope resolution operater)를 사용하여, 해당 이름을 특정 네임스페이스로 제인하면 된다.

//예제

int main(void)
{
	kang::count=4;  //네임스페이스로 접근해서 초기화한다. 
	kim::display=3.14;
	kim::count=100;
	
	cout<<kang::count<<endl; //네임스페이스로 접근해서 출력할 수 도 있음 
	cout<<kim::display<<endl;
	cout<<kim::count;
	return 0;
}

//간소화된 네임스페이스로의 접근
//네임스페이스에 속한 이름을 사용할 때마다 매번 범위 지정 연산자를 사용하여 이름을 제한하는 것은 매우 불편합니다.
//또한, 길어진 코드로 인해 가독성 또한 떨어지게 된다.

//그래서 C++에서는 using 지시자(directive)와 using 선언(declaration)을 제공한다.

//using 지시자(directive)
//명시한 네임스페이스에 속한 이름을 모두 가져와 범위 지정 연산자를 사용하지 않고도 사용할 수 있게 해준다,
//전역 변위에서 사용된 using지시자는 해당 네임스페이스의 모든 이름을 전역적으로 사용할 수 있게 만들어준다.
//또한, 블록 내에서 사용된 using지시자는 해당 블록에서만 해당 네임스페이스의 모든 이름을 사용할 수 있게 해준다.

//문법
//using namespace (네임스페이스 이름); 

//using 선언(declaration)
//using지시자가 명시한 네임스페이스의 모든 이름을 사용할 수 있게 된다면, using선언은 단 하나의 이름만을 범위 지정 연산자를 사용하지 않고도 사용할 수 있게 한다.
//또한, using지시자와 마찬가지로 using선언이 나타내는 선언 영역에서만 해당이름을 사용할 수 있게 해준다.

//문법
//using 네임스페이스이름::이름; 
//범위 지정 연산자(::)를 사용함. 
