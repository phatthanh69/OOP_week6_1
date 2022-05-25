#include "NVSX.h"

NVSX::NVSX()
{
}

NVSX::~NVSX()
{
}

void NVSX::Input()
{
	NhanVien::Input();
	cout << "nhap luong co ban: ";
	cin >> luongcb;
	cout << "nhap so san pham: ";
	cin >> sosp;
}

void NVSX::Output()
{
	NhanVien::Output();
	cout << "luong co ban: " << luongcb << "\n" << "so san pham: " << sosp;
}

double NVSX::tongluong()
{	
	return luongcb+sosp*5000;
}
