#include<iostream>

using namespace std;

int main()
{
	//명시적 타입 변환(강제 타입 변환)
	//사용자가 캐스팅을 해서 강제적으로 수행하는 타입변환.
	//사용방법 
	//(변환할타입) 변환할데이터 // C언어와 C++ 둘 다 사용 가능함.
    //변환할타입 (변환할데이터) // C++에서만 사용 가능함. - 캐스트 연산자 
    
    //예제
	int num1 = 1;
	int num2 = 4;
	
	double result1 =num1/num2;
	double result2 = (double)num1/num2;
	double result3 = double(num1)/num2;
	
	cout<<"result1: "<< result1<<endl; //0 //int끼리 계산했기 때문에 정수체계에서는 나눈 값이 0이다. 
	cout<<"result2: "<< result2<<endl; //0.25 //실수로 형변환을 했기떄문에 정확하게 나눈 결과를 도출해 낼 수 있음. 
	cout<<"result3: "<< result3<<endl; //0.25 
	
	
}
