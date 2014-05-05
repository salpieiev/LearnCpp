//
//  main.cpp
//  LearnCpp
//
//  Created by Sergey Alpeev on 19.06.13.
//  Copyright (c) 2013 Sergey Alpeev. All rights reserved.
//

#include <iostream>

using namespace std;



void showmenu();
void report();
void comfort();



int main() {
    using namespace std;
    
    showmenu();
    
    int choice;
    cin >> choice;
    
    while (choice != 5) {
        switch (choice) {
            case 1: cout << "\a\n"; break;
            case 2: report(); break;
            case 3: cout << "The boss was in all day.\n"; break;
            case 4: comfort(); break;
            default: cout << "That's not a choice.\n";
        }
        
        showmenu();
        cin >> choice;
    }
    
    cout << "Bye!\n";
    
    return 0;
}



void showmenu() {
    cout << "Enter 1, 2, 3, 4 or 5:\n";
    cout << "1) alarm       2) report\n";
    cout << "3) alibi       4) comfort\n";
    cout << "5) quit\n";
}

void report() {
    cout << "It's been an excellent week for business.\n";
    cout << "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort() {
    cout << "Your employees think you are the finest CEO\n";
    cout << "in the industry. The board of directors think\n";
    cout << "you are the finest CEO in the industry.\n";
}