#include "NVVP.h"

NVVP::NVVP()
{
}

NVVP::~NVVP()
{
}

void NVVP::Input()
{
	NhanVien::Input();
	cout << "nhap so ngay lam viec: ";
	cin >> songaylam;
}

void NVVP::Output()
{
	NhanVien::Output();
	cout << "so ngay lam: " << songaylam;
}

double NVVP::tongluong()
{
	return songaylam*100000;
}
