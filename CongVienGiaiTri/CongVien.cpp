#include "CongVien.h"
void CongVien::Nhap() {
	cout << "Nhap so ve: "; cin >> soLuongVe;
	for (int i = 0; i < soLuongVe; i++)
	{
		int loai;
		MENU:cout << "Chon loai ve: 1.VeTronGoi	2.VeTungPhan	=> ";
		cin >> loai;
		cin.ignore();
		if (loai == 1)	DSV[i] = new VeTronGoi;
		if (loai == 2)	DSV[i] = new VeTungPhan;
		if (loai != 1 && loai != 2) goto MENU;
		DSV[i]->Nhap();
	}
}
void CongVien::Xuat() const {
	for (int i = 0; i < soLuongVe; i++)
	{
		DSV[i]->Xuat();
		cout << "\n";
	}
}
long CongVien::TongTienVe() {
	long tong = 0;
	for (int i = 0; i < soLuongVe; i++)
	{
		tong = tong + DSV[i]->tienVe;
	}
	return tong;
}
int CongVien::SoVeTungPhan() {
	int dem = 0;
	for (int i = 0; i < soLuongVe; i++)
	{
		if (DSV[i]->tienVe != 200000) dem++;
	}
	return dem;
}