#include<iostream>

using namespace std;
//참조에 의한 전달(call by reference)
//변수의 값을 복사하는 것이 아닌, 원본 데이터를 직접 전달하는 것이다.
//C언어라면 포인터를 사용해서 주소값을 전달하지만 
//C++에서는 이러한 작업을 참조자(&)를 사용하여 전달할 수 있다. 

//예제

void Local(int&); //함수의 원형 선언-참조자를 사용함. 
 
int main(void)
{
	int f = 10;
	cout<<"f의 초기값: "<<f<<endl;
	
	Local(f); //함수사용 
    cout<<"f의 함수값: "<<f;
    return 0; 
}

void Local(int& num) //사용자 정의함수. 
{
	num+=10;
}

//Local함수의 매개변수 num는 인수로 변수 f의 참조를 전달받는다.
//따라서 함수 내에서 참조자 num의 값을 변경하면 원래 인수인 변수f의 값도 같이 변경된다.

//Plus
//main함수의 인수 전달. 
//main함수도 함수기때문에 인수를 전달 받을 수도 있고 반환값을 가질 수도 있다.
//이런식으로
//void(또는 int) main(int argc,char *argv[]); //main함수의 원형 

