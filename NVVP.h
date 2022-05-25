#pragma once
#include "NhanVien.h"
class NVVP: public NhanVien
{private:
	int songaylam;
public:
	NVVP();
	~NVVP();
	virtual void Input();
	virtual void Output();
	virtual double tongluong();
};

