//
//  main.cpp
//  PRG-7-15-Vector-Modification
//
//  Created by Keith Smith on 10/8/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Modify the National Commerce Bank case study presented in program 7-23 so pin1,
//  pin2, and pin3 are vectors instead of arrays. You must also modify the testPIN function
//  to accept a vector instead of an array.

#include <iostream>
#include <vector>

using namespace std;

bool testPIN(vector<int>, vector<int>, int);

int main()
{
    const int NUM_DIGITS = 7;
    vector<int> pin1 {2, 4, 1, 8, 7, 9, 0};
    vector<int> pin2 {2, 4, 6, 8, 7, 9, 0};
    vector<int> pin3 {1, 2, 3, 4, 5, 6, 7};
    
    
    if(testPIN(pin1, pin2, NUM_DIGITS))
        cout << "ERROR: pin1 and pin2 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin2 are different.\n";
    
    if(testPIN(pin1, pin3, NUM_DIGITS))
        cout << "ERROR: pin1 and pin3 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin3 are different.\n";
    
    if(testPIN(pin1, pin1, NUM_DIGITS))
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else
        cout << "ERROR: pin1 and pin1 report to be different.\n";
    
    return 0;
}

bool testPIN(vector<int> custPIN, vector<int> databasePIN, int size)
{
    for(int index = 0 ; index < size ; index++)
    {
        if(custPIN[index] != databasePIN[index])
            return false;
    }
    return true;
}

