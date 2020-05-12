#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;

struct Luong {
	string MaLuong;
	float BacLuong;
	float HeSoLuong;
};

struct NodeLuong {
	Luong Data;
	NodeLuong* pNext;
};

struct ListL {
	NodeLuong* pHead;
	NodeLuong* pTail;
};

struct NgayThang {
	int Ngay;
	int Thang;
	int Nam;
};

struct Khoa {
	string MaKhoa;
	string TenKhoa;
};

struct NodeKhoa {
	Khoa Data;
	NodeKhoa* pNext;
};

struct ListK {
	NodeKhoa* pHead;
	NodeKhoa* pTail;
};

struct NhanVien
{
	string MaNhanVien;
	string Ten;
	string Ho_Dem;
	string GioiTinh;
	string QueQuan;
	NgayThang NgaySinh;
	string TrinhDoChuyenMon;
	string ChucVu;		
	NgayThang NgayBatDauCongTac;
	string VienChuc;			//Chỗ này làm gì á???????
	NodeLuong* LuongNV;
	NodeKhoa* KhoaNV;
	
};

struct NodeNhanVien {
	NhanVien Data;
	NodeNhanVien* pNext;
};

struct ListNV {
	NodeNhanVien* pHead;
	NodeNhanVien* pTail;
};

bool Tuan[2][7];				//Đây là 



int main() {

	system("pause");
	return 0;
}