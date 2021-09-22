#include "VeTungPhan.h"
VeTungPhan::VeTungPhan():VeCongVien(){}
VeTungPhan::~VeTungPhan(){}
void VeTungPhan::Xuat() const {
	VeCongVien::Xuat();
	cout << tienVe;
}
void VeTungPhan::TinhTienVe() {
	tienVe = 70000 + soTroChoi * 20000;
}