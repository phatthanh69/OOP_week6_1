#include "DSNV.h"

DSNV::DSNV()
{
	sonv = 0;
	ds_nv = new NhanVien * [1000];
}

DSNV::~DSNV()
{
	delete[] ds_nv;
}

void DSNV::Input()
{
	int luachon;
	for (int i = 0;; i++) {
		do {
			cout << "moi nhap lua chon: " << "\n"
				<< "1. nhap thong tin nvsx" << "\n"
				<< "2. nhap thong tin nvvp" << "\n"
				<< "0. thoat chuong trinh va xuat thong tin nv" << "\n";
			cin >> luachon;
			if (luachon != 1 && luachon != 2 && luachon != 0) cout << "khong hop le!";
		} while (luachon != 1 && luachon != 2 && luachon != 0);
		if (luachon == 1) {
			cout << "nhap thong tin nv: ";
			ds_nv[i] = new NVVP;
			sonv++;
		}
		else if (luachon == 2) {
			cout << "nhap thong tin nv: ";
			ds_nv[i] = new NVSX;
			sonv++;
		}
		else return;
		ds_nv[i]->Input();
	}
}

void DSNV::Output()
{
	if (sonv > 0) {
		double max = ds_nv[0]->tongluong();
		for (int i = 0; i < sonv-1; i++) {
			for (int j = sonv-1; j >i ; j--) {
				if (ds_nv[i]->tongluong() < ds_nv[j]->tongluong())
				{
					swap(ds_nv[i], ds_nv[j]);
				};
			}
		}
		cout << "tong so nhan vien: " << sonv << "\n";
		for (int i = 0; i < sonv; i++) {
			cout << "\n" << "thong tin nhan vien thu " << i + 1 << "\n";
			ds_nv[i]->Output();
			cout << "\n" << "luong = ";
			cout << ds_nv[i]->tongluong();
			if (max < ds_nv[i]->tongluong())
				max = ds_nv[i]->tongluong();
		}cout << "\n" << "luong cao nhat: " << max;
	}
}


