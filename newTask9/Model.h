// ģ���࣬���ڴ��ÿһ��ģ�͵Ļ�����Ϣ
#pragma once
#include<map>
#include"Facet.h"
#include"Point.h"
#include<gl/GLUT.H>
#include<iostream>
#include <iostream>
#include<fstream>
#include<sstream>
#include <vector>
#include <ctime>
#include<algorithm>
#include <set>
#include <ctime>
#include <iostream>
#include<list>
using namespace std;
class Model
{
public:
	// ģ�͵���Ƭ����
	map<int, Facet>modelFacet;
	// ģ�͵ĵ�������,ȥ�غ������
	map<int, Point>modelPoint;
	Model();
	~Model();
	void addPoint(Point point, int index)
	{
		modelPoint.insert(pair<int, Point>(index, point));
	}
	void addFacet(int index, Facet facet)
	{
		modelFacet.insert(pair<int, Facet>(index, facet));

	}
};

