#include<iostream>

using namespace std;

int main(){

//변수의 선언과 초기화
int a;
a=10;

int b=15;

//상수
//리터럴 상수: 변수와는 달리 데이터가 저장된 메모리 공간을 가리키는 이름을 가지고 있지 않음 
 
int c=10;

cout << "10진수: " << c <<endl; //dec조정자도 있음-10진수 

cout << oct; //oct조정자를 사용하여 8진수로 변환 

cout << "8진수: " << c <<endl;

cout << hex; //hex조정자를 사용하여 16진수로 변환 

cout << "16진수: " << c <<endl;
//endl은 줄바꿈을 할때 사용함. 

//심볼릭상수: 변수처럼 이름을 가지고 있는 상수
const int d =30;
//const를 사용한 상수는 선언과 함께 반드시 초기화해야 한다.
 
}
