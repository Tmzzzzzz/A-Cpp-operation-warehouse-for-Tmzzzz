/*
三、第一题中，商品类和交通工具类有较多的相似之处。
请抽象出这两个类的共同点，设计它们的共同基类：物体类。根据现在的继承结构，采用虚继承的办法实现汽车类
*/

#include <iostream>
using namespace std;

class Object {
protected:
    string name;
    int weight;
    int length;
    int width;
public:
    Object(string n, int w, int l, int wi) : name(n), weight(w), length(l), width(wi) {}
    virtual void readInfo() = 0;
    virtual void displayInfo() const = 0 ;
    virtual ~Object() {}
    void readSameInfo() {
        cout << "请输入名称: ";
        cin >> name;
        cout << "请输入重量(kg): ";
        cin >> weight;
        cout << "请输入长度(cm): ";
        cin >> length;
        cout << "请输入宽度(cm): ";
        cin >> width;
    }
    void displaySameInfo() const {
        cout << "名称: " << name << endl;
        cout << "重量: " << weight << " kg" << endl;
        cout << "长度: " << length << " cm " <<endl;
        cout << "宽度: " << width << " cm" << endl;
    }
};

class Goods : virtual public Object {
protected:
    int price;
    string brand;
public:
    Goods(string n, string b, int l, int w, int p, int we) : Object(n, we, l, w), brand(b), price(p) {}
    virtual void readInfo() {
        Object::readSameInfo();
        cout << "请输入价格(元): ";
        cin >> price;
        cout << "请输入品牌: ";
        cin >> brand;
    }
    virtual void displayInfo() const {
        Object::displaySameInfo();
        cout << "价格: " << price << " 元" << endl;
        cout << "品牌: " << brand << endl;
    }
    void displayGoodsInfo() const {
        cout << "价格：" << price << endl;
        cout << "品牌：" << brand << endl;
    }
    void readGoodsInfo() {
        cout << "请输入价格(元): ";
        cin >> price;
        cout << "请输入品牌: ";
        cin >> brand;
    }
    virtual ~Goods() {}
};

class Vehicle : virtual public Object {
protected:
    int speed;
public:
    Vehicle(string n, int l, int w, int s, int we) : Object(n, we, l, w), speed(s) {}
    virtual void readInfo() {
        Object::readSameInfo();
        cout << "请输入速度(km/h): ";
        cin >> speed;
    }
    virtual void displayInfo() const {
        Object::displaySameInfo();
        cout << "速度: " << speed << " km/h" << endl;
    }
    void displayVehicleInfo() const {
        cout<< "速度：" << speed <<endl;
    }
    void readVehicleInfo(){
        cout << "请输入速度(km/h): ";
        cin >> speed;
    }
    virtual ~Vehicle() {}
};

class Car: public Vehicle, public Goods {   
public:
    Car(string n,string b,int l,int w,int p,int we,int s) : Object(n,w,l,we), Vehicle(n,l,w,s,we), Goods(n,b,l,w,p,we) {}
    void readInfo() override{
        Object::readSameInfo();
        Goods::readGoodsInfo();
        Vehicle::readVehicleInfo();
    }
    void displayInfo() const override {
        Object::displaySameInfo();
        Goods::displayGoodsInfo();
        Vehicle::displayVehicleInfo();
    }
    ~Car() {}
};
