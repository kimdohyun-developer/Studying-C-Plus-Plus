#include<iostream>
#include<string>
 
using namespace std;

int main()
{
	//string의 선언과 초기화 
	//string을 하나의 타입처럼 사용하여 문자열을 선언하고 초기화 할 수 있다.
	
	//예제 
	string s1; //문자열의 선언. 
	s1="programming"; //초기화. 
	string s2 = "let's go party!!"; //문자열의 선언과 초기화를 동시에. 
	
	cout<<s1<<endl;
	cout<<s2;
	
	//문자열을 사용하면 데이터의 길이를 자동으로 조절해주고 문자형 배열보다 더 편리하다.
	//문자열도 배열처럼 index([i]이런거)를 통해 다룰 수 있음 
	
	//예제 
	string car;
	cout<<"car변수의 길이: "<<car.length()<<endl; //length()말고도 size()로도 길이를 알 수 있다.  
	
	car = "palisade";
	
	cout<<"car이름: "<<car<<endl; 
	cout<<"car변수의 길이: "<<car.length()<<endl;
	cout<<"car이름의 첫번째 글자: "<<car[0]; //인덱스를 써서 배열처럼 다룰 수 있다.  
	//한글은 아스키코드가 아닌 유니코드이기 때문에 2비트가 든다. 
	
	//문자열 처리 
	//문자열도 +,=를 사용해서 대입하거나 합칠 수 있다.
	
	//예제-대입 연산 
	string str1 = "friday night!";
	string str2;
	
	str2 = str1; //문자열 대입 연산 
	cout<< str2; 
	
	//예제- 결합 연산과 추가 연산 
	string str3 = "friday night";
	string str4 = "is burning!";
	string str5;
	
	str5=str3+str4;//문자열 결합 연산 
	cout<< str5<<endl;
	
	str3+=str4; //문자열 추가 연산 
	cout<<str3;
	
	//문자열 입출력
	//문자열 입력에는 cin, 출력에는 cout을 사용할 수 있지만
	//cin을 이용한 문자열의 입력은 한단어 단위로 실행되기 때문에 
	//문자열을 한 행(line)씩 읽고 싶을 떄에는 getline()함수를 사용한다.
	
	//예제 
	
	string name, score;
	
	cout<<"이름: ";
	getline(cin,name); 
	cout<<"등급(점수): ";
	getline(cin,score);
	
	cout<<"이름: "<<name<<"점수: "<<score; 
		
}
