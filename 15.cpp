#include<iostream>

 using namespace std;
 
 //열거체(enumerated types)
 //새로운 타입을 선언하면서 동시에 그타입이 가질 수 있는 정수형 상숫값도 같이 명시한다.
 //열거체를 사용하면 프로그램의 가독성이 높아지고 변수가 지니는 값에 의미를 부여할 수 있다.
 
 //예제
 
 enum Weather{sunny=0,rain=1,snow=2,cloud=3}; //열거체 
 
 int main(void)
 {
 	int input;
 	Weather wt;
 	
 	cout<<"오늘의 날씨를 입력해주세요: "<<endl;
 	cout<<"(sunny=0,rain=1,snow=2,cloud=3)"<<endl;
 	cin>>input;
 	wt = (Weather)input; //명시적 타입변환(강제 타입변환)
	
	switch(wt)
	{
		case sunny:
		    cout<<"맑음";
		    break;
		
		case rain:
		    cout<<"비";
		    break;
		
		case snow:
		    cout<<"눈";
		    break;
		
		case cloud:
		    cout<<"흐림";
		    break;
		
		default:
			cout<<"정확한 값을 입력하세요";
			break; 
	} 
	
	cout<<endl<<"열거체Weather의 각 상수값"<<sunny<<","<<rain<<","<<snow<<","<<cloud;
	return 0;
}
//열거체를 선언하고 안에 변수를 채워넣을때 상수값을 따로 명시하지 않으면 0부터 시작하며, 그다음은 바로 앞의 상수보다 1만큼 중가되며 정의된다.
//예-0,1,2,3,4... 
