/*WAP to create two classes, 
1. Class login_details, with functions as:-
a. Validate() accept Login password(default 1234) from user
b. Display() display message on Screen "Welcome to MyApp"
2. Class user_profile, with functions as:-
a. Accept() username, email id and name from user
b. Display() will display information entered by the user on screen.
*/
#include<iostream>
using namespace std;
class login_details {
    private: int pass;
    public: int validate() {
        cout<<"Enter your password: ";
        cin>>pass;
        if(pass==1234){
            Display();
            return 1;
        }
        else{
            cout<<"Invalid Password!!";
        }

    }
    public: void Display() {
        cout<<"Welcome to MyApp";
    }
};
class user_profile{
    private: string uname;
    string email;
    string name;
    public: void accept() {
        cout<<"\nEnter your Username: ";
        cin>>uname;
        cout<<"Enter your Email: ";
        cin>>email;
        cout<<"Enter your name: ";
        cin>>name;
    }
    public: void display() {
        cout<<"Information entered by the user is\n";

    }
};
int main(){
    login_details obj1;
    int n; 
    n= obj1.validate();
    user_profile obj2;
    if(n==1){
        obj2.accept();
        obj2.display();
    }
    return 0;
}
