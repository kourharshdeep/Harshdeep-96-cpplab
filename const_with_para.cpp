/* Program to demonstrate working of constructor with prameter */
#include<iostream>
using namespace std;
class Program{  //Class with name program
    public: Program(string name, int MobNo)//class constructor with parameters
    { 
          cout<<"Name is "<<name;
          cout<<"\n Moblie Number is "<<MobNo;
    } 

};
int main(){
    string nm;
    int mob;
    cout<<"Enter name and mobile no";
    cin>>nm>>mob;
    Program obj(nm,mob);   //class object with parameter 
    // memory utiliz. of name, MobNo and nm,mob  is diff so they are diif ;  only the values they are passing that are same.
    // so if u use name, MobNo which is same, but logically its not same.


     //Program("mahi",1223124); // with or without obj {doubt that it should be declared with obj to intitialize memory}

    return 0;
}   