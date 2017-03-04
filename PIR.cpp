#include <iostream>
#include <cmath>
using namespace std;
double t,U,V,W,u,v,w;

double X()
{
    return (w-U+v)*(U+v+w);
}
double x()
{
    return (U-v+w)*(v-w+U);
}
double Y()
{
    return (u-V+w)*(V+w+u);
}
double y()
{
    return (V-w+u)*(w-u+V);
}
double Z()
{
    return (v-W+u)*(u+v+W);
}
double z()
{
    return (W-u+v)*(u-v+W);
}
double a()
{
    return pow(x()*Y()*Z(),0.5);
}
double b()
{
    return pow(y()*Z()*X(),0.5);
}
double c()
{
    return pow(z()*X()*Y(),0.5);
}
double d()
{
    return pow(x()*y()*z(),0.5);
}
double calcvolume()
{
    
    return pow((b()+c()+d()-a())*(c()-b()+d()+a())*(b()-c()+d()+a())*(b()+c()-d()+a()),0.5)/(192.0*u*v*w);
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>W>>V>>u>>U>>v>>w;
       printf("%.4f\n",calcvolume());
    }
    return 0;
}

