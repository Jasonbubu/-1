#pragma once
#include <string>
#include <vector>
#include "boy.h"
#include "Single.h"

#define YANZHI_FACTOR 100 //��ֵ��Ӧ��н��ϵ��

using namespace std;

class boy;

class Girl:public Single {
public:
	Girl();
	Girl(int age, string name, int yanZhi);
	~Girl();


	//int getAge()const;
	//string getName()const;
	int getYanZhi()const;
	string description()const;

	//�������׶����Ҫ��ϵ��
	bool satisfied(const boy &boy)const;
	//������Ů������Ϣ
	static void inputGirl(vector<Girl> &girls);
	//���뵥��Ů����Ϣ
	static void inputGirls(Girl &girl);
private:

	//int age;
	//string name;
	int yanZhi; //��ֵ
};

