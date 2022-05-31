#include <iostream>
#include <vector>
#include <vector>
using namespace std;

/*
class Sinhvien
{

public:
    static string tentruong; // biến tĩnh
    string name;
    int tuoi;
    double dtb;
    double drl;

    Sinhvien() // defual constructor
    {
        cout << "Sinh vien da duoc khoi tao\n";
    }

    Sinhvien(string n = "-", int t = 0, double tb = 0, double rl = 0)
    {
        name = n;
        tuoi = t;
        dtb = tb;
        drl = rl;
        cout << "Sinh vien ten la " << n << " da duoc khoi tao\n";
    }

    Sinhvien(string n, int t, double tb, double rl)
    {
        name = n;
        tuoi = t;
        dtb = tb;
        drl = rl;
        cout << "Sinh vien ten la " << n << " da duoc khoi tao\n";
    }

    void thietlapthongtin(string n, int t, double tb, double rl)
    {
        name = n;
        tuoi = t;
        dtb = tb;
        drl = rl;
    }

    void in()
    {
        cout << name << " " << tuoi << " " << dtb << " " << drl << endl;
    }
};

string Sinhvien ::tentruong = "Phenikaa University";

class phonghoc
{
public:
    string name;
    int tang, soban, soghe;
    const double dientich;

    phonghoc(string n = " ", int t = 0, int sb = 0, int sg = 0, double dt = 0)
    {
        name = n;
        tang = t;
        soban = sb;
        soghe = sg;
        dientich = dt;
    }

    void in()
    {
        cout << name << " " << tang << " " << soban << " " << soghe << " " << dientich << endl;
    }
};

*/

class Room
{

public:
    string ten;
    int tang;
    int numBan;
    int numGhe;
    const double dtich;

    Room(string ten, int tang, int sb, int sg, double dt)
        : numBan(sb), dtich(tinhdientich())
    {
        this->ten = ten;

        this->tang = tang;

        this->numGhe = sg;
    }

    Room(const Room& r):dtich(r.dtich){
      this->ten = r.ten;
      this->tang=r.tang;
      this->numBan = r.numBan;
      this->numGhe=r.numGhe;
    }

    Room& operator = (const Room& r){
      this->ten = r.ten;
      this->tang=r.tang;
      this->numBan = r.numBan;
      this->numGhe=r.numGhe;
      return *this;
    }

    double tinhdientich()
    {
        return numBan * 10;
    }

    void in()
    {
        cout << ten << " " << dtich << endl;
    }
};

class Building
{
public:
    string ten;
    int soTang, soPhong;
    vector<Room> rooms;

    Building(string name)
    {
        ten = name;
        soTang = 0;
        soPhong = 0;
    }

    void delRoom(string name)
    {
        bool tontaiPhong = false;

        for (int i = 0; i < rooms.size(); i++)
        {
            if (rooms[i].ten == name)
            {
                tontaiPhong = true;
                rooms.erase(rooms.begin() + i);
                break;
            }
        }

        if (!tontaiPhong)
            cout << "Khong tim thay phong" << endl;
        return;

        soPhong--;
        soTang = 0;

        for (auto room : rooms)
            if (room.tang > soTang)
                soTang = room.tang;
    }

    void addRoom(Room r)
    {
        soPhong++;
        soTang = max(soTang, r.tang);
        rooms.push_back(r);
    }

    void in()
    {
        cout << ten << " " << soTang << " " << soPhong << endl;
        for (auto r : rooms)
            r.in();
    }
};



int main(int argc, char *argv[])
{
    // cout << Sinhvien ::tentruong << endl;
    // Sinhvien sv("abc", 10, 10, 10);
    // sv.in();

    Room r("703A6", 7, 10, 10, 100);
    Room k("603A6", 6, 10, 10, 100);

    // Building b("A6");

    // b.addRoom(r);
    // b.addRoom(k);

    // b.delRoom("603A6");
    // b.in();
    // r.in();

    // Room x = r;
    vector<Room> vec;
    vec.push_back(r);
    vec.push_back(k);
    return 0;
}