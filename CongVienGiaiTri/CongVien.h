#pragma once
#include"VeCongVien.h"
#include"VeTronGoi.h"
#include"VeTungPhan.h"
#define MAX 500
class CongVien
{
protected:
	VeCongVien* DSV[MAX];
	int soLuongVe;
public:
	void Nhap();
	void Xuat() const;
	long TongTienVe();
	int SoVeTungPhan();
};

