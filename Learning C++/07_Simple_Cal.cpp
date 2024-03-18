#include<iostream>
using namespace std;
int main (){
    int Num_1;
    int Num_2;
    char Oper;
    cout << "Enter the First Number : ";
    cin >> Num_1;
    cout << "Enter the Second Number : ";
    cin >> Num_2;
    cout << "Enter the Operator : ";
    cin >> Oper;
    switch (Oper){
        case '+':cout << "The Sum of Number are "<< Num_1+Num_2 <<endl;
                break;
        case '-':cout << "The Subtraction of Number are "<< Num_1-Num_2 <<endl;
                break;  
        case '*':cout << "The Mulptication of Number are "<< Num_1*Num_2 <<endl;
                break;
        case '/':cout << "The Division of Number are "<< Num_1/Num_2 <<endl;
                break;
        case '%':cout << "The Modulas of Number are "<< Num_1%Num_2 <<endl;
                break;
        default : cout << " There is an error in user input";
    }


}