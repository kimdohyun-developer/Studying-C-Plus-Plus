#include<iostream>

using namespace std;

int main()
{
	//타입: 해당 데이터가 메모리에 어떻게 저장되고
	//      프로그램에서 어떻게 처리되어야하는 지를 명시적으로 알려준다.
	//기본 타입에는 정수형, 실수형, 문자형, bool형이 있다.
	
	//정수형
	
	//정수형 데이터에는 최대치와 최소치가 있다. -2147483648~2147483647
	//이것을 오버플로우로 알아보자
	int num = 2147483647;
	cout << num <<endl;
	
	num = 2147483648;
	cout << num << endl;  
	//최대치를 넘어가면 음수로 바뀌는 것을 알 수 있다.
	//정수의 순환 
	
	//실수형
	
	//실수형에는  float(4바이트)과 double(8바이트)이 있다.
	
	float num01 =  3.1415926535897932;  
	cout<<num01<<endl;
	// float 의 유효 자릿수는 소수점 6자리까지이다.
	
	double num02 = 3.1415926535897932;
	cout<<num02<<endl;
	//double의 유효 자릿수는 소수점 15자리까지이다. 
	
	//문자형 
	
	char eng ='A'; //이렇게 쓰면 A를 아스키코드로 바뀌게 됨.
	//물론 우리가 형격하를 해서 int로 바꾸면 숫자로 나옴.
	//계산 할때도 숫자로 계산됨.
	
	cout<<eng<<endl; 
	cout<<eng+1<<endl; //숫자로 계산되기 때문에 A(65)+1=66이 되는 것을 볼 수 있음.
	cout<<(char)(eng+1)<<endl; //형격상을 통해 보면 다음 차례 알파벳이 나오는 것을 볼 수 있음.
	
	//bool형
	
	bool t; //이런식으로 정의한다.
	//0은 거짓(false), 1은 참(true) 
 } 
