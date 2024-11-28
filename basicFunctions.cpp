#include <iostream>
#include <iomanip>
using namespace std;

struct rectangle {

    int width, height;
};

void askdimentions(rectangle *x) {

    cout<<"Enter width";
    cin >> x->width;
    cout<<"Enter height";
    cin >> x->height;
}

int findArea(rectangle *x) {

    int area = x->width * x->height;
    return area;
}

int main() {

    rectangle z;
    askdimentions(&z);

    cout<<z.height<<" " <<z.width<<"\n";
    cout<<findArea(&z);

    bool a = true;
    float b = 3.14;
    int c = 555;
    char d[] = {"hello"}, x = '*';
    cout<<"\n";
    cout<<x<<setw(6)<<b<<x<<endl;
    cout<<x<<setw(6)<<c<<x<<endl;
    cout<<x<<setw(6)<<d<<x<<endl;
    cout<<x<<setw(1)<<a<<x;

    int s =100;
    char stx[s];
    cin.getline(stx,s); //actually 99 characters since there is a null pointer in the end
    cout<<stx;

    int q =5, w =2;
    float e = 1.4,y,u;
    int f;
    y = w * e; // result of float * int becomes float;
    u = float(a) / w; // to get 2.5 which is a float
    f = a /w; // you get 2 bc both of them are integers not floats 

}