#include <iostream>
#include"class.h"
using namespace std;
int main() {
    CPoint p1(0,0);
    CPoint p2(0,1);
    CPoint p3(1,0);
    CTriangle tri(p1, p2, p3);

    // 计算并输出三角形面积
    double area = tri.Area();
    cout << "The area of the triangle is: " << area << endl;

    // 重新设置三角形，并计算并输出三角形面积
    CPoint p4(1,1);
    CPoint p5(2,1);
    CPoint p6(1,2);
    tri.SetTriangle(p4, p5, p6);
    area = tri.Area();
    cout << "三角形面积为： " << area << endl;
    return 0;
}
