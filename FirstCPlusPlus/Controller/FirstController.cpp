//
//  FirstController.cpp
//  FirstCPlusPlus
//
//  Created by Tschetter, Benjamin on 1/23/17.
//  Copyright © 2017 Tschetter, Benjamin. All rights reserved.
//

#include <iostream> 
#include "FirstController.h"

using namespace std;

void FirstController :: start()
{
    cout << "ey b0ss" << endl;
    specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "How old are you?" << endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "Type in your name :D" << endl;
    string name;
    cin >> name;
    cout << "Your name is " << name << " Wow cool" << endl;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "you typed " << name << " and " << age << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << "You typed " << name << endl;
    
}
