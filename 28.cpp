#include<iostream>

using namespace std;

//유효 범위(scope)
//하나의 변환 단위(translation unit)내에서 해당 변수가 사용될 수 있는 범위를 나타낸다.
//함수내에서 선언된 변수는 함수 내에서만 사용할 수 있다.
//또한, 함수 밖에서 선언된 변수는 번수가 선언된 이후에 나오는 모든 함수에서 사용할 수 있다.

//연결(linkage)
// 해당 변수를 사용할 수 있는 파일의 접근 가능여부를 나타낸다. 
//외부연결(exterminal linkage)을 가지는 변수는 여러 파일에서 사용할 수 있다. 
//하지만 내부연결(internal linkage)을 가지는 뱐수는 하나의 파일에서만 사용할 수 있다.
//또한, 함수 내에서 선언된 변수는 함수 밖에서는 사용할 수 없으므로 연결을 가지지않는다. 

//C++ 변수의 종류
//유효범위, 연결등을 기준으로 아래와 같이 나눌 수 있다.
//1. 자동 변수(automatic variable) == 지역변수(local variable) (C언어)
//2. 레지스터 변수(register variable)
//3. 정적 변수(static variable)

//자동변수(automatic variable)
//블록 내에서 선언된 변수를 의미하며 함수의 매개변수도 여기에 포함된다.
//이러한 자동 변수는 변수가 선언된 블록 내에서만 유효하며, 블록이 종료되면 메모리에서 사라진다.
//자동변수는 메모리상의 스택영역에 저장되며, 초기화하지 않으면 의미없는 값으로 초기화된다.

//예제
 
int main(void)
{
	int i =5;
	int var =10;
	cout<<"main함수 내의 자동 변수 var의 값: "<<var<<endl;
	
	if(i<10)
	{
		Local();
		
		int var =30;
		cout<<"if문  내의 자동 변수 var의 값: "<<var<<endl;
	}
	
    cout<<"현재  자동 변수 var의 값: "<<var<<endl;
	return 0;
}

void Local(void)
{
	int var = 20;
	cout<<"Local함수 내의 자동 변수 var의 값: "<<var<<endl;
} 

//위치에 따라 값이 달라지도록 설정하면
//그에 맞춰서 값이 달라짐. 

//Plus++
//레지스터 변수(register variable) 
//변수를 선언 할때 register키워드를 붙여 선언한 변수
//C언어에서 사용하던 것. 
//하지만 C++11이후로는 레지스터의 의미를 가진다기 보단 단순히 해당 변수가 자동변수라는 것을 의미하는 역할로만 사용되고 있다. 
