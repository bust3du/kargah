#include <iostream>
using namespace std;

int b_m_m(int a , int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;

    }
    return a;
}

int k_m_m(int a , int b){
    return (a*b)/b_m_m(a,b);

}
int main(){
    int num1, num2, result;
    cout <<"please enter two numbers:";
    cin >> num1>> num2;
    result = b_m_m(num1,num2);
    cout << "the bmm is:" << result << endl;
    result = k_m_m(num1, num2);
    cout <<"the kmm is:" << result << endl;

    return 0;

}




