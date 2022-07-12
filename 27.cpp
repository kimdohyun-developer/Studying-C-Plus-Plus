//매크로 함수(macro function)
//이것은 C언어에서 사용하는 것이다! 
//C언어에서는 C++의 인라인 함수와 비슷한 기능의 매크로 함수를 사용한다.
//#define 선행처리 지시문에 인수로 함수의 정의를 전달함으로써 함수처럼 작동하는 매크로를 만들 수 있다.
//이런 매크로를 함수같은 매크로(function-like-macro) 또는 매크로 함수라고 부른다. 

//하지만 매크로 함수는 일반함수와는 달리 단순 치환만을 해주므로, 일반 함수와 똑같은 방식으로 동작하지 않는다.
//이러한 매크로 함수를 일반 함수처럼 사용하기 위해서는 모든 인수를 괄호({})로 감싸야한다. 

//예제
/*
#include<stdio.h>
#define MUL(X) X*X

int main(void)
{
	int result;
	int x = 7;
	
	puts(MUL(10));
	puts(MUL(x));
	puts(MUL(x+5));
	return 0;
}
*/

//Plus++
//매크로 함수는 단순 치환의 과정이기 때문에 우리가 생각하는 연산과정과 다를 수 있다.
//그러므로 계산과정을 더 구체적으로 작성해야한다.
//위의 함수 보완
/*
#include<stdio.h>
#define MUL(X)((X)*(X))

int main(void)
{
	int result;
	int x = 7;
	
	puts(MUL(10));
	puts(MUL(x));
	puts(MUL(x+5));
	return 0;
}
*/

//하지만 C++의 인라인 함수는 단순 치환이 아닌 함수의 모든 코드를 호출된 자리에 인라인 코드로 삽입해 주는 것이다.
//따라서 일반 함수처럼 값이나 수식을 인수로 전달할 수 있으며, 매개변수 타입에 맞춘 자동 타입 변환도 지원한다.
//한마디로 C언어의 매크로보다 좋다!

//위의 코드를 인라인 함수로 작성하면

#include<iostream>

using namespace std;

inline int Mul(int x){return x*x;} //인라인 함수 

int main(void)
{
	int result;
	int x=7;
	
	cout<<"계산결과: "<<Mul(10)<<endl;
	cout<<"계산결과: "<<Mul(x)<<endl;
	cout<<"계산결과: "<<Mul(x+5); //굳이 괄호로 묶지않아도 연산과정이 예상대로 진행된다. 
	return 0;
 } 
