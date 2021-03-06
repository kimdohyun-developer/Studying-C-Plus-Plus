#include<iostream>

using namespace std;

int main(){
	//고정 소수점(fixed point)방식 
	//실수는 보통 정수부분과 실수부분으로 나눌수 있다.
	//따라서 실수를 가장 간단하게 표현하는 방법은 소수부분의 자릿수를 미리 정하고
	//고정된 자릿수의 소수를 표현하는 것이다.
	//예) 32비트로 실수를 표현한다면 1비트는 부호, 15비트는 정수부분, 16비트는 소수부분 
	
	//부동 소수점(floating point)방식 
	//실수는 보통 정수부분과 소수부분으로 나눌 수 있지만 가수부와 지수부로 나눌 수 도 있다.
	//부동 소수점 방식은 이렇게 실수를 가수부와 지수부로 나누어 표현하는 방식이다.
	//부동 소수점 방식을 사용하면 매우 큰 실수까지도 표현할 수 있다.
	//부동 소수점 방식의 수식: ±(1.가수부)×2^(지수부-127)
	//현재 사용되고 있는 부동 소수점 방식은 IEE754표준을 따르고 있다.
	
	//부동 소수점 방식의 오차
	//부동 소수점 방식을 사용하면 고정 소수점 방식보다 더 많은 범위까지 표현할 수 있다.
	//하지만 부동 소수점 방식에 의한 실수의 표현은 항상 오차가 존재한다.
	//부동 소수점 방식의 수식을 사용하면 표현할 수 있는 범위는 늘어나지만
	//10진수를 정확하게 표현할 수 없게 된다.
	
	//예제
	
	float sum=0;
	
	for(int i = 0; i<1000; i++) 
	{
		sum+=0.1;
	}
	
	cout<<sum;
	//100아닌 99.999가 출력되는 것을 볼 수 있다. 
}
