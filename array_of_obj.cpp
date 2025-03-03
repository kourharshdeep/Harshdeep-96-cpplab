/* Program to demonstrate working of Array of Object(Method 1) 25/02/25 */
#include<iostream>
using namespace std;
class Program{  //class declaration
    private: int Regno; float Marks; //Private Member of Class
    public: Program(int R, float M){ //parametrized constructor of class //value ke saath memory intialize kewayega
        Regno=R;
        Marks = M;//local variable h
    }
    public: void Display(){ //function of class
        cout<<"\n RegNumber= "<<Regno<<"\t"<<"Marks= "<<Marks<<"\n";
    }
};
int main(){
    Program obj[3]= {{101,450}, {102,430}, {103,440}}; //Array of object with manual initialization
     //jaise hi object create hhua too value bhi dedi..
     //jis order mein constructor mein value pass hui ha ussi order mein display hogi beshak reverse loop chaloao
    int i;
    for(i=0;i<3;i++){
        obj[i].Display(); //calling of Display Function with Array of Object
    }
    //obj[2].Display();  //value stored at this position too we can trace it sequentially...
    cout<<"\nfor reverse order:\n";
    for (i=2;i>=0;i--){
        obj[i].Display();
    }
    return 0;
}
