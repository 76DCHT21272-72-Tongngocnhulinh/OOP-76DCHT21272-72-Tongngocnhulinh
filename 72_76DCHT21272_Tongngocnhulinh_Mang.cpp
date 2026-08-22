#include <iostream>
#include <string>
#include <vector>

using namespace std;

class NhanVien
{
protected:
    string maNV;
    string hoTen;
    string ngaySinh;
    string diaChi;

public:
    void nhap();
    void xuat();
};

// Ham nhap thong tin nhan vien
void NhanVien::nhap()
{
    cout << "Nhap ma nhan vien: ";
    getline(cin, maNV);

    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

    cout << "Nhap ngay sinh: ";
    getline(cin, ngaySinh);

    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
}

// Ham xuat thong tin nhan vien
void NhanVien::xuat()
{
    cout << "Ma nhan vien: " << maNV << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Ngay sinh: " << ngaySinh << endl;
    cout << "Dia chi: " << diaChi << endl;
}

int main()
{
    int i;
    cout << "\n========================================";
    cout << "\nCACH 1: SU DUNG MANG TINH";
    cout << "\n========================================\n";

    NhanVien dsnv1[10];

    // Nhap 10 nhan vien
    for (i = 0; i < 10; i++)
    {
        cout << "\n--- Nhap nhan vien thu " << i + 1 << " ---\n";
        dsnv1[i].nhap();
    }

    // Xuat 10 nhan vien
    cout << "\n\n========== DANH SACH NHAN VIEN ==========\n";

    for (i = 0; i < 10; i++)
    {
        cout << "\n--- Nhan vien thu " << i + 1 << " ---\n";
        dsnv1[i].xuat();
    }

    cout << "\n\n========================================";
    cout << "\nCACH 2: SU DUNG MANG DONG";
    cout << "\n========================================\n";

    NhanVien* dsnv2;

    // Cap phat dong 10 doi tuong NhanVien
    dsnv2 = new NhanVien[10];

    // Nhap 10 nhan vien
    for (i = 0; i < 10; i++)
    {
        cout << "\n--- Nhap nhan vien thu " << i + 1 << " ---\n";
        dsnv2[i].nhap();
    }

    // Xuat 10 nhan vien
    cout << "\n\n========== DANH SACH NHAN VIEN ==========\n";

    for (i = 0; i < 10; i++)
    {
        cout << "\n--- Nhan vien thu " << i + 1 << " ---\n";
        dsnv2[i].xuat();
    }

    // Giai phong bo nho
    delete[] dsnv2;

    cout << "\n\n========================================";
    cout << "\nCACH 3: SU DUNG VECTOR";
    cout << "\n========================================\n";

    vector<NhanVien> ds;

    // Nhap 10 nhan vien
    for (i = 0; i < 10; i++)
    {
        NhanVien nv;

        cout << "\n--- Nhap nhan vien thu " << i + 1 << " ---\n";

        nv.nhap();

        // Them nhan vien vao vector
        ds.push_back(nv);
    }

    // Xuat danh sach
    cout << "\n\n========== DANH SACH NHAN VIEN ==========\n";

    for (i = 0; i < ds.size(); i++)
    {
        cout << "\n--- Nhan vien thu " << i + 1 << " ---\n";
        ds[i].xuat();
    }

    return 0;
}
