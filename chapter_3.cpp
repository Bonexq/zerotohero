//
// Created by bonexq on 21.06.2020.
//

#include <iostream>
#include <cmath>

using namespace std;


void miles_to_kilometers(){
    double mile = 1.609;
    double how_many_miles;
    cout << "Enter value in miles : ";
    cin >> how_many_miles;
    cout << how_many_miles * mile;
}
void illegalnaming(){
    //int class = 0; // even it is used it gives error
    int hebele = 0;
}
void four_operations_on_two_numbers(){
    double val1,val2;
    cout << "Enter first variable : ";
    cin >> val1;
    cout << "Enter second variable: ";
    cin >> val2;

    cout << "Some of the properties of variables, Sum : " << val1+val2 << "\nDifference : "  << std::abs(val1 - val2) << "\nVariable1/2 : " << val1/val2
    << "Variable 2/1 : " << val2/val1 << "\nGreater : " << std::max(val2,val1);
}

void sort_three_ints(){  /* boxtrick */
    int a,b,c;
    cin >> a >> b >> c;
    if (a<b){
        if(a<c){
            if(b<c){
                cout << a << " " << b  <<" "  << c;
            }
            else{
                cout << a <<" "  << c <<" "  << b;
            }
        } else{
            cout << c<<" "   << a <<" "  << b;

        }
    } else
    {
        if(b<c){
            if(a<c){
                cout << b <<" "  << a <<" " <<c;
            } else{
                cout << b <<" "  << c <<" "  << a;
            }
        } else{
            cout << c <<" "  << b <<" "  << a;
        }
    }
}
void odd_even(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n%2 == 0){
        cout << n << " is an even number!";
    }
    else
        cout << n << " is an odd number!";
}
void spelled_numbers(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    switch (n) {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 0:
            cout << "Zero";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        default:
            cout << "It is not a number I know?";

    }
}
void operand_onto_twonum(){
    string operand;
    double num1,num2;
    cout << "Enter your operand, and the numbers by order : ";
    cin >> operand >> num1 >> num2;
    if (operand == "+"){
        cout << num1 + num2;
    }
    else if (operand == "/"){
        cout << num1 / num2;

    }
    else if(operand == "%"){
        cout << int(num1) % int(num2);

    }
    else if(operand == "-"){
        cout << num1 - num2;

    }
    else if (operand == "*" || operand ==  "x"){
        cout << num1 * num2;
    }
    else
        cout << "My bad, i am not a good developed calculator. I will be updated soon.";
}
void sort_three_strings(){
    string a,b,c;
    cin >> a >> b >> c;
    if (a<b){
        if(a<c){
            if(b<c){
                cout << a << " " << b  <<" "  << c;
            }
            else{
                cout << a <<" "  << c <<" "  << b;
            }
        } else{
            cout << c<<" "   << a <<" "  << b;

        }
    } else
    {
        if(b<c){
            if(a<c){
                cout << b <<" "  << a <<" " <<c;
            } else{
                cout << b <<" "  << c <<" "  << a;
            }
        } else{
            cout << c <<" "  << b <<" "  << a;
        }
    }

}
int main(){
    /* CHOOSE ANY and Put it's name here */
}
