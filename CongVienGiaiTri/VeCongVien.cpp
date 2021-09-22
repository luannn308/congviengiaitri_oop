#include "VeCongVien.h"
VeCongVien::VeCongVien() {
	ma = "";
	hoTen = "";
	namSinh = 0;
	soTroChoi = 0;
	tienVe = 0;
}
VeCongVien::VeCongVien(string m, string t, int n, int s, int b) {
	ma = m;
	hoTen = t;
	namSinh = n;
	soTroChoi = s;
	tienVe = b;
}
VeCongVien::~VeCongVien(){}
void VeCongVien::Nhap() {
	cout << "Nhap ma ve: "; getline(cin, ma);
	cout << "Nhap ten: "; getline(cin, hoTen);
	cout << "Nhap nam sinh: "; cin >> namSinh;
	cout << "Nhap so tro choi: "; cin >> soTroChoi;
	TinhTienVe();
	cin.ignore();
}
void VeCongVien::Xuat() const {
	cout << ma << "\t" << hoTen << "\t" << namSinh << "\t" << soTroChoi << "\t";
}