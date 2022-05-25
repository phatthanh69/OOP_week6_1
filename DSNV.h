#pragma once
#include "NVSX.h"
#include "NVVP.h"
#include <vector>
class DSNV
{private:
	NhanVien** ds_nv;
	int sonv = 0;
public:
	DSNV();
	~DSNV();
	void Input();
	void Output();
};

