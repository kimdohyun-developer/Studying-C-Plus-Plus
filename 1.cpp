#include<iostream> //iostream헤더파일을 불러옴 

using namespace std; 
//std클래스안에 있는 cout,cin,endl등 자주 쓰이는 함수들이 있다. 
//그것들을 쓰겠다고 선언하는 것 
int main()
{
	int a;
	
	cout<<"학번을 입력하세요:"; //cout은 출력이다. //scanf();
	cin>>a; //cin은 입력이다. //printf();
	cout << "학번은 " <<a<< "입니다." << endl;
	return 0; 
}

//cout << "학번은 " <<a<< "입니다." << endl;
//이런식으로 여러 문장을 이을 수 있다. 
//맨뒤에 꼭 endl;을 붙이도록한다.
//자바의 "  "+"  " 와 같은 느낌. 

//<<(삽입연산자)와>>(추출연산자)를 주의해야한다. 
//이걸 사용하면 더 직관적인 데이터흐름을 더 잘 보일 수 있다. 
