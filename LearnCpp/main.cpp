//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);



int main() {
    int wallet1 = 300;
    int wallet2 = 350;
    
    cout << "wallet 1 = $" << wallet1 << ", wallet 2 = $" << wallet2 << endl;
    
    cout << "\nUsing references to swap content:\n";
    swapr(wallet1, wallet2);
    cout << "wallet 1 = $" << wallet1 << ", wallet 2 = $" << wallet2 << endl;
    
    cout << "\nUsing pointers to swap content again:\n";
    swapp(&wallet1, &wallet2);
    cout << "wallet 1 = $" << wallet1 << ", wallet 2 = $" << wallet2 << endl;
    
    cout << "\nTrying to use passing by value:\n";
    swapv(wallet1, wallet2);
    cout << "wallet 1 = $" << wallet1 << ", wallet 2 = $" << wallet2 << endl;
    
    return 0;
}



void swapr(int &a, int &b) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}

void swapp(int *p, int *q) {
    int temp;
    
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b) {
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}