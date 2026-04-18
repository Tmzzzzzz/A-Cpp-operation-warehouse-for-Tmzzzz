/*
五、	修改上题中的Rectangle类，使得主程序有以下的输出。

int main()
{
    Rectangle rec(5,10);
    int area=rec;
    cout<<"矩形的面积是："<<(int)rec<<endl;   //程序输出：矩形的面积是：50
    cout<<"矩形新的面积是："<<(int)++rec++<<endl; //程序输出：矩形新的面积是：66
    cout<<"矩形新的面积是："<<(int)rec<<endl;  //程序输出：矩形新的面积是：66
    cin.get();
}

*/

#include <iostream>
using namespace std;

class Rectangle{
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    operator int() const {
        return width * height;
    }
    Rectangle& operator++() {
        width++;
        height++;
        return *this;
    }
    Rectangle operator++(int){
        Rectangle temp = *this;
        width++;
        height++;
        return temp;
    }
};

int main()
{
    Rectangle rec(5,10);
    int area=rec;
    cout<<"矩形的面积是："<<(int)rec<<endl;   //程序输出：矩形的面积是：50
    cout<<"矩形新的面积是："<<(int)++rec++<<endl; //程序输出：矩形新的面积是：66
    cout<<"矩形新的面积是："<<(int)rec<<endl;  //程序输出：矩形新的面积是：66
    cin.get();
}