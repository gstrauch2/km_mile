/*
 * George Strauch
 * unit conversion between Km and miles
 * february 4 2018
 */

#include <iostream>
using namespace std;

int main() {
    char unit = '0';
    double distance = '0';
    cout << "What unit is the distance you already have in? [k or m]" << endl;
    cin >> unit;

    // if the user enters an unknown unit other than mile of km, program quits
    if((unit != 'k')&&(unit != 'm')){
        cout << "error, wrong unit";
        return 0;
    }

    cout << "what it the distance?" << endl;
    cin >> distance;


    if(unit == 'm'){
        cout << (distance * 1.6) << " Km";
    }
    else{   //unit can only be 'k' at this point, so only an else statement is needed
        cout <<(distance/1.6) << " Miles";
    }

    return 0;
}