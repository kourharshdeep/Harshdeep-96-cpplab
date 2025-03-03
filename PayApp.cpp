/*WAP to create a class with name PayApp, with different functions,
Accept() Function will accept the amount from user
Validate() Function will check amont(>0)
Discount() Function will calvulate 10% discount on Amount
Display() Function will display final Bill on Screen
*/

#include<iostream>
using namespace std;
class PayApp { //3
    private: float amt; //4
    public: void Accept() { //6
        cout<<"Enter the amount: "; //7
        cin>>amt; //8
    } //9
    public: void Validate() { //11
        if(amt<0) { //12
            cout<<"Invalid amount\n"; //13
        } //14
        else {
            cout<<"Valid amount\n";
            Discount(); //15
            Display(); //19
        }
    }
    public: void Discount() { //16
        amt= amt - (amt*10/100); //17
    } //18
    public: void Display() { //20
        cout<<"Final Bill: "<<amt<<endl; //21
    } //22
}; //23
int main() { //1
    PayApp obj; //2
    obj.Accept(); //5
    obj.Validate(); //10
    return 0; //24
} //25