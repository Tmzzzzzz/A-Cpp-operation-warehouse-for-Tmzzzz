/*
一、请编写一个商品类，用于描述商品的名称、重量、长、宽、价格、品牌等信息，并实现读取商品相关信息的成员函数以及构造函数。
再编写一个交通工具类，用于描述交通工具的名称、重量、速度、长、宽等信息，并实现读取交通工具相关信息的成员函数以及构造函数。
*/

#include <iostream>
using namespace std;

class Goods{
private:
    int length;
    int width;
    int price;
    int weight;
    string name;
    string brand;
public:
    Goods(string n, string b, int l, int w, int p, int we) : name(n), brand(b), length(l), width(w), price(p), weight(we) {}
    virtual void readInfo() {
        cout << "请输入商品名称: ";
        cin >> name;
        cout << "请输入商品重量(kg): ";
        cin >> weight;
        cout << "请输入商品长度(cm): ";
        cin >> length;
        cout << "请输入商品宽度(cm): ";
        cin >> width;
        cout << "请输入商品价格(元): ";
        cin >> price;
        cout << "请输入商品品牌: ";
        cin >> brand;
    }
    virtual void displayInfo() const {
        cout << "商品名称: " << name << endl;
        cout << "重量: " << weight << " kg" << endl;
        cout << "长度: " << length << " cm " ;
        cout << "宽度: " << width << " cm" << endl;
        cout << "价格: " << price << " 元" << endl;
        cout << "品牌: " << brand << endl;
    }
    virtual ~Goods() {}
};

class Vehicle{
private:
    int length;
    int width;
    int speed;
    int weight;
    string name;
public:
    Vehicle(string n, int l, int w, int s, int we) : name(n), length(l), width(w), speed(s), weight(we) {}
    virtual void readInfo() {
        cout << "请输入交通工具名称: ";
        cin >> name;
        cout << "请输入交通工具重量(kg): ";
        cin >> weight;
        cout << "请输入交通工具长度(cm): ";
        cin >> length;
        cout << "请输入交通工具宽度(cm): ";
        cin >> width;
        cout << "请输入交通工具速度(km/h): ";
        cin >> speed;
    }
    virtual void displayInfo() const {
        cout << "交通工具名称: " << name << endl;
        cout << "重量: " << weight << " kg" << endl;
        cout << "尺寸: " << length << " cm " ;
        cout << "宽度: " << width << " cm" << endl;
        cout << "速度: " << speed << " km/h" << endl;
    }
    virtual ~Vehicle() {}
};