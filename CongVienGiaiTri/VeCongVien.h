#pragma once
#include<iostream>
#include<string>
using namespace std;
class VeCongVien
{
protected:
	string ma;
	string hoTen;
	int namSinh;
	int soTroChoi;
public:
	int tienVe;
	VeCongVien();
	VeCongVien(string, string, int, int,int);
	~VeCongVien();
	void Nhap();
	virtual void Xuat() const;
	virtual void TinhTienVe() = 0;
};

