#include<iostream>
#include<string> 
using namespace std;

int main(void)
{
	//문자열(string) 
	//메모리의 저장된 일련의 연속된 문자들의 집합 
	//생성방법
	//1. C언어 스타일의 문자열-배열사용.
	//2. string클래스를 이용한 문자열.
	
	//C언어 스타일의 문자열 
	//C++에서는 큰따옴표("")를 사용해 표현되는 문자열을 문자열 상수라고 한다.
	//상수라고 하는 이유는 해당 문자열이 이름을 가지고 있지 않고 문자열의 내용도 변경할 수 없기 떄문이다.
	
	//문자형 배열을 사용한 문자열 예제
	
	const int SIZE = 20;
	char address[SIZE];
    char name[SIZE];
    
    cout<<"이름을 입력하세요: ";
	cin>>name;
	cout<<"주소를 입력하세요: ";
	cin>>address;
	
	cout<<"이름: "<<name<<" 주소: "<<address; 
	//띄어쓰기를 사용하면 문자열이 끝난 다는 것과 문자가 20개가 넘으면 프로그램이 종료되는 것의 문제가 생긴다. 
	
	//위의 예제에서 띄어쓰기를 포함한 문자열을 입력받는 방법-get()을 사용 
	const int SIZE = 20;
	char address[SIZE];
    char name[SIZE];
    
    cout<<"이름을 입력하세요: ";
	cin.get(name,SIZE).get(); 
	cout<<"주소를 입력하세요: ";
	cin.get(address,SIZE).get(); 
	
	cout<<"이름: "<<name<<" 주소: "<<address;
	
	//위의 예제에서 문자가 20개를 초과했을 때 프로그램이 종료되는 문제를 개선-ignore()을 사용 
	const int SIZE = 20;
	char address[SIZE];
    char name[SIZE];
    
    cout<<"이름을 입력하세요: ";
	cin.get(name,SIZE).ignore(SIZE,'\n'); 
	cout<<"주소를 입력하세요: ";
	cin.get(address,SIZE).ignore(SIZE,'\n'); 
	
	cout<<"이름: "<<name<<" 주소: "<<address; 
	
	//string클래스를 이용한 문자열 - #include<string>을 사용한다.
	 
	string address, name; //string클래스를 사용 
	
	cout<<"이름을 입력하세요: ";
	getline(cin,name); //string클래스에 속한 getline함수를 이용. 
	cout<<"주소를 입력하세요: ";
	getline(cin,address); 
	
	cout<<"이름: "<<name<<" 주소: "<<address;
	
	return 0; // int main(void)니까 return 0;를 쓴다. 
}
