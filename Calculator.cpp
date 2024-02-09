#include<bits/stdc++.h>
using namespace std;
 
long calculate(int n1, int n2, char opt){
    if(opt=='+'){
        return n1 + n2;
    }
    if(opt=='-'){
        return n1 - n2;
    }
    if(opt=='*'){
        return n1 * n2;
    }
    if(opt=='/'){
        if(n2==0){
            cout << "ALert: Please check the divisor carefully" <<endl;
            return -1;
        }
        else{
            return n1/n2;
        }
    }
    else{
        cout << "Alert: Only (+, -, *, /) operation is allowed" << endl;
        return -1;
    }
}

int main(){
    int flag;
    cout << "Enter 1: to_start or 0: to_exit" << endl;
    cin >> flag;
    while(flag){
        int number1,number2;
        char op;
        
        cout << "Enter the first Number" << endl;
        cin >> number1;

        cout << "Enter the Second Number" << endl;
        cin >> number2;
        cout << "Enter the operation to be performed (+, -, *, /)" << endl;
        cin >> op;

        long ans = calculate(number1, number2, op);
        cout << "The answer is: "<<ans<<endl;

        cout << "Enter 1: to_start and 0: to_exit" << endl;
        cin >> flag;
    }
    cout << "Thanks for using it" << endl;
}