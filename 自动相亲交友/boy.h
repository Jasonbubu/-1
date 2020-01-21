#pragma once
#include <string>
#include <vector>
#include "Girl.h"
#include "Single.h"


#define SALARY_FACTOR  0.006//н�ʶ�Ӧ����ֵϵ��

class Girl;

using namespace std;

class boy : public Single{
public:
	boy();
	boy(int age,string name,int salary);
	boy(const boy &other);
	~boy();

	//int getAge()const;
	//string getName()const;
	int getSalary()const;
	string description()const;

	//�������׶����Ҫ��ϵ��
	bool satisfied(const Girl &girl)const;
	//�������к�����Ϣ
	static void inputBoys(vector<boy> &boys); 
	//����һ���к�����Ϣ
	static void inputBoy(boy& boy1); 

	

private:
	//int age;
	//string name;
	int salary;  //н��

};

