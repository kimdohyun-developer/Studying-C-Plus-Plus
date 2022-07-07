#include<iostream>
#include<string>

using namespace std;

int main()
{
	//string 메소드
	
	//length()메소드와 size()메소드
	//length()는 문자열의 길이를 나타내지만 size()는 해당 string객체가 메모리에서 실제로 사용하고 있는 크기를 나타낸다.
	//물론 두 메소드는 같은 메소드를 반환한다.
	
	//예제 
	string str1;
	string str2 = "let's go party!";
	
	cout<<"str1의 문자열 길이: "<<str1<<endl;
	cout<<"str2의 문자열 길이: "<<str2;
	 
	//append()메소드
	//하나의 문자열의 끝에 다른 문자열을 추가하는 메소드 
	//문법 
	//1. 문자열.append(추가할문자열);                 // 추가할 문자열을 맨 끝에 추가함.
    //2. 문자열.append(추가할문자열, 시작위치, 개수); // 추가할 문자열의 시작 위치부터 개수만큼만 맨 끝에 추가함.
	//3. 문자열.append(개수, 추가할문자);             // 추가할 문자를 개수만큼 맨 끝에 추가함
    
    //예제
    
    string str1, str2, str3;
    
    str1.append("let's go party!");
    str2.append("let's go party!",10,6);
    str3.append("4,X");
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3;
    
    //find()메소드 
    //특정 문자열을 찾아, 그 시작 위치를 반환하는 메소드 
    //문법
	//1. 문자열.find(찾을문자열);           // 인덱스 0부터 찾을 문자열을 찾아, 그 시작 위치를 반환함.
    //2. 문자열.find(찾을문자);             // 인덱스 0부터 찾을 문자를 찾아, 그 시작 위치를 반환함.
    //3. 문자열.find(찾을문자열, 시작위치); // 시작 위치부터 찾을 문자열을 찾아, 그 시작 위치를 반환함.
    //find()메소드는 해당 문자열에서 찾을 문자열을 찾지 못하면, string::size_type의 string::npos라는 상수를 반환한다.
	
	//예제
	
	string str = "let's go party!";
	
	cout<<str.find("par")<<endl;
	cout<<str.find('h')<<endl;
	
	if(str.find("par",10)!=string::npos)
	{
		cout<<"해당 문자열을 찾았습니다.";
	}
	else
	{
		cout<<"해당 문자열을 찾지 못했습니다.";
	 } 
	
	//compare()메소드 
	//두 문자열 간의 내용을 비교하는 메소드 
	//문법 
	//1. str1.compare(str_02) == 0 // str1과 str2이 같을 경우
	//2. str1.compare(str_02) < 0  // str1이 str2보다 사전 편찬순으로 앞에 있을 경우
	//3. str1.compare(str_02) > 0  // str1이 str2보다 사전 편찬순으로 뒤에 있을 경우
    
    //예제 
    string str1 = "ABC";
    string str2 = "ABD";
    
    if(str1.compare(str2)==0)
    {
    	cout<<str1<<"이"<<str2<<"와 같습니다.";
	}
	else if(str1.compare(str2)<0)
	{
		cout<<str1<<"이"<<str2<<"보다 사전 편찬 순으로 앞에 있습니다."
	}
	else  
	{
		cout<<str1<<"이"<<str2<<"보다 사전 편찬 순으로 뒤에 있습니다."
	}
	
	//replace()메소드
	//특정 문자열을 찾아, 그 문자열을 다른 문자열로 대체하는 메소드.
	//문법 
	//문자열.replace(대체할문자열의시작위치, 대체할문자열의길이, 새로운문자열);
    // 전달된 시작 위치부터 문자열의 길이만큼을 제거한 후에, 새로운 문자열을 삽입함.

    //예제 
    
    string str1 = "let's go funny party!";
    string str2 = "nice";
    string str3 = "awesome";
    
    string::size_type index = str1.find(str2);
    if(index!=string::npos)
    {
    	str1.replace(index,str2.length(),str3);
	}
	
	cout<<str1;
	
	//capacity()메소드와 max_size()메소드 
	//capacity()메소드는 해당 문자열이 재대입 받지 않고 저장할 수 있는 최대 문자열의 길이를 반환한다.
	//max_size()메소드는 해당 문자열이 최대한 대입받으면 가질 수 있는 최대 문자열의 길이를 반환한다. 
    
    //예제 
	
	string str = "let's go party!";
	
	cout<<"str의 length: "<<str.length()<<endl;
	cout<<"str의 capacity: "<<str.capacity()<<endl;
	cout<<"str의max_size: "<<str.max_size(); 
	
}
