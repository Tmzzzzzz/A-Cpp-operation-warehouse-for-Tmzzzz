/*
二、请基于上题的两个类，实现汽车类，使得该类能描述汽车的名称、重量、长、宽、价格、品牌、速度等信息，并能将前述信息打印输出。
*/

#include <iostream>
using namespace std;

class Goods{
protected:
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
protected:
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

class Car : public Vehicle, public Goods {
public:
    Car(string n, string b, int l, int w, int p, int we, int s) : Vehicle(n, l, w, s, we), Goods(n, b, l, w, p, we) {}
    void readInfo() override {
        cout << "请输入汽车名称: ";
        cin >> Vehicle::name;
        cout << "请输入汽车品牌: ";
        cin >> Goods::brand;
        cout << "请输入汽车重量(kg): ";
        cin >> Vehicle::weight;
        cout << "请输入汽车长度(cm): ";
        cin >> Vehicle::length;
        cout << "请输入汽车宽度(cm): ";
        cin >> Vehicle::width;
        cout << "请输入汽车价格(元): ";
        cin >> Goods::price;
        cout << "请输入汽车速度(km/h): ";
        cin >> Vehicle::speed;
    }
    void displayInfo() const override {
        cout << "汽车名称: " << Vehicle::name << endl;
        cout << "汽车品牌: " << Goods::brand << endl;
        cout << "汽车重量: " << Vehicle::weight << " kg" << endl;
        cout << "汽车长度: " << Vehicle::length << " cm" << endl;
        cout << "汽车宽度: " << Vehicle::width << " cm" << endl;
        cout << "汽车价格: " << Goods::price << " 元" << endl;
        cout << "汽车速度: " << Vehicle::speed << " km/h" << endl;
    }
    ~Car(){}
};