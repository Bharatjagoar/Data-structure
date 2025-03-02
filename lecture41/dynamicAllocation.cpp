#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class stud
{
    private:
        string name = "bharat";
        int age = 23;

    public:
        void ReadInfo(){
            cout<<"my name is :: "<<this->name<<" my age is :: "<<this->age <<endl;
        }
};
int main()
{
    stud *s1 = new stud;
    stud s2;
    s1->ReadInfo();
    s2.ReadInfo();
    return 0;
}