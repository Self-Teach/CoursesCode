#pragma once
#include<GL\glut.h>
#include <vector>
#include<string>
using namespace std;
class ObjLoader {
public:
	ObjLoader(string filename);//���캯��
	void Draw();//���ƺ���
private:
	vector<vector<GLfloat> >vSets;//��������
	vector<vector<GLint> >fSets;//���������������
};