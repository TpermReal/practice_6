//
// Created by 86187 on 2023/10/14.
//

#ifndef PRACTICE_6_CLASS_H
#define PRACTICE_6_CLASS_H
class CPoint{
public:
    int mX,mY;

    CPoint(int zX=0,int zY=0);

    ~CPoint();

    int GetX() const;

//横坐标提取操作函数
int GetY() const;

//纵坐标提取操作函数
double Distance(const CPoint& zP) const;

    void SetPoint(int zX, int zY);
    //设置操作函数
    //点间距离计算函数
};
class CTriangle{
public:
    CPoint mVertex[3];

    void SetTriangle(const CPoint &zP1, const CPoint &zP2, const CPoint &zP3);

//设置操作数
double Area() const;

    CTriangle(const CPoint &zP1=CPoint(0,0), const CPoint &zP2=CPoint(0,1), const CPoint
    &zP3=CPoint(1,0));

//构造函数
~CTriangle();
    //析构函数
    //面积计算函数
};
#endif //PRACTICE_6_CLASS_H
