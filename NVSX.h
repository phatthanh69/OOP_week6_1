#pragma once
#include "NhanVien.h"
class NVSX : public NhanVien
{private:
	double luongcb;
	int sosp;
public:
	NVSX();
	~NVSX();
	virtual void Input();
	virtual void Output();
	virtual double tongluong();
};

