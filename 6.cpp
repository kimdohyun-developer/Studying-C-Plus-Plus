#include<iostream>

using namespace std;

int main()
{
	//����� Ÿ�� ��ȯ(���� Ÿ�� ��ȯ)
	//����ڰ� ĳ������ �ؼ� ���������� �����ϴ� Ÿ�Ժ�ȯ.
	//����� 
	//(��ȯ��Ÿ��) ��ȯ�ҵ����� // C���� C++ �� �� ��� ������.
    //��ȯ��Ÿ�� (��ȯ�ҵ�����) // C++������ ��� ������. - ĳ��Ʈ ������ 
    
    //����
	int num1 = 1;
	int num2 = 4;
	
	double result1 =num1/num2;
	double result2 = (double)num1/num2;
	double result3 = double(num1)/num2;
	
	cout<<"result1: "<< result1<<endl; //0 //int���� ����߱� ������ ����ü�迡���� ���� ���� 0�̴�. 
	cout<<"result2: "<< result2<<endl; //0.25 //�Ǽ��� ����ȯ�� �߱⋚���� ��Ȯ�ϰ� ���� ����� ������ �� �� ����. 
	cout<<"result3: "<< result3<<endl; //0.25 
	
	
}
