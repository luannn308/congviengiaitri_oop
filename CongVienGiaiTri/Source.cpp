#include"CongVien.h"
#include<iostream>
using namespace std;
int main() {
	CongVien DamSen;
	DamSen.Nhap();
	DamSen.Xuat();
	int tong = DamSen.TongTienVe();
	cout << "Tong tien ve: " << tong<<endl;
	int num = DamSen.SoVeTungPhan();
	cout << "So ve tung phan da ban: " << num;
	return 0;
}