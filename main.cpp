#include <iostream>
#include "math.h"
using namespace std;
int main() {

    cout << "PROBLEM 1" << endl;

    int intNumber = 23;
    cout << "Value of Integer is " << intNumber << ". Size is " << sizeof(intNumber) << endl;
    float floatNumber = 3.14;
    cout << "Value of Float is " << floatNumber << ". Size is " << sizeof(floatNumber) <<endl;
    double doubleNumber = 45.1234;
    cout<< "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) <<endl;
    char charName = 'A';
    cout << "Value of char is " << charName << ". Size is " << sizeof(charName) << endl;
    bool boolean = true;
    cout << "Value of Bool is " << boolean << ". Size is " << sizeof(boolean) << endl;

    cout << " PROBLEM 2" << endl;
    cout << " Namanxonova Muqaddasxon " <<  endl;
    cout << " 230166 " << endl;
    cout << " Lullaby " << endl;
    cout << " Novda " << endl;
    cout << " PROBLEM 3" << endl;

    cout << "\"I\'m standing\" on the edge of some crazy cliff.\n"
            "What I have to do, I have to catch everybody\\\n"
            "if they start to go over the cliff—I mean\\\n"
            "\\if they're running and they don't look\n"
            "where they're going I have to come out\n"
            "from somewhere and \tcatch them.";

    cout << "PROBLEM 4" << endl;
    int a = 189;
    char  b= 'B';

    float  A = (float)a/3;
    int B= b;
    float C = ((a+b)/5);
    char D = b + (char)(a/10) -1;
    cout << A << ' ' << B << ' ' << C <<' '<<  D << endl;


    cout << "PROBLEM 5" << endl;
    int x ;
    int y ;
    int sum = x + y;
    int product = x * y;
    cout << " Sum=" << sum << endl;
    cout << " Product=" << product<< endl;


    cout << "PROBLEM 6" << endl;
    int value1 = 38, value2 = 73;
    int sum1 = value1 + value2;
    cout <<"sum: " << value1 << " + " << value2 << " = " << sum1 << endl;

    cout << "PROBLEM 7" << endl;
    float X = 2, Y = 5;
    float t = 3*(X*X + 3)/(Y/4 + 3);
    cout << " t = " << t << endl;

    cout << "PROBLEM 8" << endl;
    float diameter = 6.9;
    float pi = 3.14;
    //float area = (3/4)*(pi)*(di)
    cout<< "Area:" <<  (4)*(pi * (diameter*diameter/4)) << endl;


    cout << "PROBLEM 9 " << endl;
//     declare variables tos tore velocities and time span


    float v_1 , v_2 , t_1 ;
    cout << " enter the velocity in metrs/seconds" ;
    cin >> v_1;
    cout << " enter the velocity in metres/seconds" ;
    cin >> v_2;
    cout << " enter the time span in metres/seconds" ;
    cin >> t_1;
    float acceleration = (v_1-v_2) / t_1;
    cout << " Average acceleration" << acceleration << "m/s^2" << endl;


    cout << "PROBLEM 10 " << endl;

    float d_1 , f_1 , g_1 ;
    cout << " the distance to drive" ;
    cin >> d_1 ;
    cout << " the fuel of effiemcy of the car in miles per gallon";
    cin >> f_1 ;
    cout << "  the price per gallon then displays the cost of the trip";
    cin >> g_1 ;
    float cost_of_trip= (d_1/f_1) * g_1 ;
    cout << " the cost of driving is   $" << cost_of_trip << endl;

    cout << "PROBLEM 11 " << endl;
    double p11_var1 = 1.13e3;
    double p11_var2 = 411e-4;
    cout << p11_var1 << "" << p11_var2 << endl;

    cout << "PROBLEM 12 " << endl;





    cout << "PROBLEM 13 " << endl;
    float area, s ;
    cout << " the something" ;
    cin >> s;
     float area =  (3*sqrt(3) * s^2) / 2 ;

    cuot bdfjd << " the area of  a hexagon" << area << ednl;







    cout << "PROBLEM 14 " << endl;




    cout << "PROBLEM 15 " << endl;




    cout << "PROBLEM 16 " << endl;




    cout << "PROBLEM 17 " << endl;



    cout << "PROBLEM 18 " << endl;



    cout << "PROBLEM 19 " << endl;



    cout << "PROBLEM 20 " << endl;





    cout << "PROBLEM 21 " << endl;


    cout << "PROBLEM 22 " << endl;









    return 0;
}