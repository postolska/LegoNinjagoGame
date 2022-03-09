//
//  main.cpp
//  LegoNinjagoGame
//
//  Created by Paula Ostolska on 07/03/2022.
//

#include <iostream>
using namespace std;


class Character
{
private:
    string name, type;
    unsigned int defence, attack, speed, choose;
public:
    void printData() const
    {
        cout << "I'm a " << type << " and my name is " << name;
        cout << "\n=====MY ATRIBUTES====\nDefence: " << defence;
        cout << "\nAttack: " << attack << "\nSpeed: " << speed << endl;
        cout<<endl;
    }
    void readData()
    {
        cout<<"Choose type: "<<endl;
           
            cout<<"[1] Human \n";
            cout<<"[2] Snake \n";
            cout<<"[3] Badass\n";
            cout<<endl;
            cin>>choose;
            switch(choose)
                {
                    case 1: type = "Human";
                        break;
                    case 2: type = "Snake";
                        break;
                    case 3: type = "Badass";
                        break;
                }
        
        cout<<"Write a name: ";
        cin>>name;
        cout<<"Set my atributes!"<<endl;
        cout<<"===VALUE RANGE 0-100==="<<endl;
        do
        {
        cout<<"Defence: ";
        cin>>defence;
        cout<<"Attack: ";
        cin>>attack;
        cout<<"Speed: ";
        cin>>speed;
        cout<<endl;
        }while(( defence>100) || (attack>100) || (speed>100));
    }
};
int main()
{
    Character c1,c2,c3;
 
    c1.readData();
    c1.printData();
    c2.readData();
    c2.printData();
    c3.readData();
    c3.printData();
    
    cout<<endl;
    
    cout<<"Size of object 1 is: "<<sizeof(c1)<<" bytes"<<endl;
    cout<<"Size of object 2 is: "<<sizeof(c2)<<" bytes"<<endl;
    cout<<"Size of object 3 is: "<<sizeof(c3)<<" bytes"<<endl;
    
    
    return 0;
}
