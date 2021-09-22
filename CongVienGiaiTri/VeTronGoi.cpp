#include "VeTronGoi.h"
VeTronGoi::VeTronGoi():VeCongVien(){}
VeTronGoi::~VeTronGoi(){}
void VeTronGoi::Xuat() const {
	VeCongVien::Xuat();
	cout << tienVe;
}
void VeTronGoi::TinhTienVe() {
	tienVe = 200000;
}