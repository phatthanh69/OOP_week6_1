#pragma once
#include <string.h>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class NhanVien
{
protected:
	string hoten, ngaysinh;
	double luong;
public:
	NhanVien();
	~NhanVien();
	virtual void Input();
	virtual void Output();
	virtual double tongluong();
};

