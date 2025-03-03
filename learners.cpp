/* WAP to store 10 rollno pof Weak Learners of your class and 10 rollno of Advance Learner of your class, according to you.
Store rollno's in two diiferent array and display the record.
*/
#include<iostream>
using namespace std;
class Students{
    private: int weak[10]= {120,93,92,91,77,111,71,115,83,102};
    int adv[10]={96,99,113,101,75,119,112,88,70,100};
    public: void Record() {
        int i;
        cout<<"\n LIST OF ADVANCE LEARNERS"<<endl;
        for(i=0;i<10;i++){
            cout<<adv[i]<<"\t";
        }
        cout<<"\n LIST OF WEAK LEARNERS"<<endl;
        for(i=0;i<10;i++){
            cout<<weak[i]<<"\t";
        }
    }
};

int main(){
    Students obj;
    obj.Record();
    return 0;
} 