#include <iostream>
using namespace std;

void printVal(int *pArr, int size) {

    for(int i=0;i<size;i++) {

        cout<< *(pArr+i) <<"\n";
    }
}

void swap(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a =12;
    int b =4;
    int c =123;
    int d = 321;
    int *pA = &a;
    int *pB = &b;
    int size = 4;
    int arr[4] = {1,2,3,4};
    int *pArr = arr;
    printVal(pArr, size);
    swap(pA,pB);
    swap(&c,&d);

    cout << a << b<<"\n"<<endl;
    cout << c << d<<"\n"<<endl;


}