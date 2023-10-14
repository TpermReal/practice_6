//
// Created by 86187 on 2023/10/14.
//
#include "class.h"
#include<bits/stdc++.h>
//设置操作函数
void CPoint::SetPoint(int zX, int zY) {
    mX=zX;
    mY=zY;
}
//横坐标提取操作函数
int CPoint::GetX() const {
    return mX;
}
//纵坐标提取操作函数
int CPoint::GetY() const{
    return mY;
}
//点间距离计算函数
double CPoint::Distance(const CPoint& zP) const{
    return sqrt((mX-zP.mX)*(mX-zP.mX)+(mY-zP.mY)*(mY-zP.mY));
}
//设置三角形坐标操作函数
void CTriangle::SetTriangle(const CPoint &zP1, const CPoint &zP2, const CPoint &zP3){
    mVertex[0].SetPoint(zP1.GetX(), zP1.GetY());
    mVertex[1].SetPoint(zP2.GetX(), zP2.GetY());
    mVertex[2].SetPoint(zP3.GetX(), zP3.GetY());
}
//面积计算函数
double CTriangle::Area() const {
    double a, b, c;
    a = mVertex[0].Distance(mVertex[1]);
    b = mVertex[1].Distance(mVertex[2]);
    c = mVertex[2].Distance(mVertex[0]);
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
