#include<iostream>

using namespace std;

//재귀호출
//함수 내부에서 함수가 자기자신을 또다시 호출하는 것을 말한다.
//재귀호출은 자기가 자신을 계속해서 호출하므로 끝없이 반복된다. 
//따라서 함수내에 재귀호출을 중단하도록 조건이 변경될 명령문을 꼭 포함해야한다.

//예제-1부터 n까지의 합을 구하는 함수.

//일반적인 방법 
int Sum(int p)
{
	int result;
	for(int i =0; i<=p;i++) //n번 반복 
	{
		result += i;
	}
	return result;
} 

//재귀호출을 쓴 방법 

int RecursiveSum(int n)
{
	if(n==1) //재귀함수를 제어하는 역할. 
	{
		return 1;//n이 1일 경우 1을 반환 //함수를 다시 호출하지 않음. 
	}
	return n+RecursiveSum(n-1); 
	//n이 1이 아니면 n값을 반환하며 n-1을 매개변수의 값으로 가지는 함수를 다시 실행.
	//이렇게 하면 n이 1일때까지 계속해서 1씩 줄어드는 값들을 반환받을 수 있음.
	 
} 


int main(void)
{
    int r1;
	int r2;
	
	r1 = Sum(10);
	r2 = RecursiveSum(10);
	
	cout<<r1<<endl;
	cout<<r2;
	return 0;
}
//도출되는 값은 같지만 방법이 다르다. 

//Plus
//재귀호출이 무한히 반복되면, 해당 프로그램은 실행 직후 스택 오버플로우(stack overflow)에 의해 종료된다.
//그러므로 반드시 재귀호출을 중단하기 위한 조건문을 재귀 호출 함수 안에 포함해야한다. 
