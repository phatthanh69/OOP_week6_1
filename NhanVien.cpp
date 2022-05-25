
#include "NhanVien.h"

NhanVien::NhanVien()
{
}

NhanVien::~NhanVien()
{
}

void NhanVien::Input()
{
	cin.ignore();
	cout << "nhap ho ten: ";
	fflush(stdin);
	cin >> hoten;
	cout << "nhap ngay sinh (dd/mm/yy): ";
	fflush(stdin);
	cin >> ngaysinh;
	fflush(stdin);
}

void NhanVien::Output()
{
	cout<<"\n" << "ho ten: " << hoten << "\n" << "ngay sinh: " << ngaysinh << "\n";
}

double NhanVien::tongluong()
{
	return 0;
}
