#include<iostream>

 using namespace std;
 
 //����ü(enumerated types)
 //���ο� Ÿ���� �����ϸ鼭 ���ÿ� ��Ÿ���� ���� �� �ִ� ������ ������� ���� ����Ѵ�.
 //����ü�� ����ϸ� ���α׷��� �������� �������� ������ ���ϴ� ���� �ǹ̸� �ο��� �� �ִ�.
 
 //����
 
 enum Weather{sunny=0,rain=1,snow=2,cloud=3}; //����ü 
 
 int main(void)
 {
 	int input;
 	Weather wt;
 	
 	cout<<"������ ������ �Է����ּ���: "<<endl;
 	cout<<"(sunny=0,rain=1,snow=2,cloud=3)"<<endl;
 	cin>>input;
 	wt = (Weather)input; //����� Ÿ�Ժ�ȯ(���� Ÿ�Ժ�ȯ)
	
	switch(wt)
	{
		case sunny:
		    cout<<"����";
		    break;
		
		case rain:
		    cout<<"��";
		    break;
		
		case snow:
		    cout<<"��";
		    break;
		
		case cloud:
		    cout<<"�帲";
		    break;
		
		default:
			cout<<"��Ȯ�� ���� �Է��ϼ���";
			break; 
	} 
	
	cout<<endl<<"����üWeather�� �� �����"<<sunny<<","<<rain<<","<<snow<<","<<cloud;
	return 0;
}
//����ü�� �����ϰ� �ȿ� ������ ä�������� ������� ���� ������� ������ 0���� �����ϸ�, �״����� �ٷ� ���� ������� 1��ŭ �߰��Ǹ� ���ǵȴ�.
//��-0,1,2,3,4... 
