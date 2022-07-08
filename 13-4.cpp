#include<iostream>
#include<string>
using namespace std;

//중첩된 구조체
//구조체를 정의할떄 구조체 안에 멤버변수로 또 다른 구조체를 포함할 수 있다.

//예제 

struct info
{
	string name;
	int stuId;
};

struct student
{
    info stu_Info; //이런 식으로 또다른 구조체를 포함하는 멤버변수로 중첩시킬 수 있다. 
	string address;
	string department;
};

//구조체의 크기
//구조체의 크기는 멤버변수들의 크기에 따라 결정된다.
//하지만 구조체의 크기가 언제나 멤버변수들의 크기 총합과 일치하는 것은 아니다. 

//예제 

struct TypeSize
{
	char a;
	int b;
	double c;
};
 
int main(void)
{
	cout<<"멤버변수들의 크기 - a: "<<sizeof(char)<<" -b: "<<sizeof(int)<<" -c: "<<sizeof(double)<<endl;
	cout<<"구조체의 크기: "<<sizeof(TypeSize);
	return 0;
}
