#pragma once
#include "Point.h"
#include <iostream>
using namespace std;
class Facet
{
public:
	// ��Ƭ����
	int index;
	// ���
	double volume;
	// ���
	double s;
	// ��Ƭ�е������
	Point _vertex_1;
	Point _vertex_2;
	Point _vertex_3;
	double sum;
	vector<double>list;

	~Facet();
	Facet()
	{}
	bool operator<(const Facet& _b) const
	{
		if (_b.index < index)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void toString()
	{
		cout << "x= " << _vertex_1.index << " y= " << _vertex_2.index << " z= " << _vertex_3.index << endl;
	}
};

