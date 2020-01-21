#pragma once
#include <string>
#include <vector>
#include "boy.h"
#include "Single.h"

#define YANZHI_FACTOR 100 //颜值对应的薪资系数

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

	//设置相亲对象的要求系数
	bool satisfied(const boy &boy)const;
	//输入多个女孩的信息
	static void inputGirl(vector<Girl> &girls);
	//输入单个女孩信息
	static void inputGirls(Girl &girl);
private:

	//int age;
	//string name;
	int yanZhi; //颜值
};

