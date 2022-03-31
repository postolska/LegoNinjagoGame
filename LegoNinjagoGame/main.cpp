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
    static int player;
public:
    void playerInfo()
    {
        player++;
        cout<<"Player "<<player<<"."<<endl;
    }
    void printData() const
    {
        cout<< "I'm a " << type << " and my name is " << name;
        cout << "\n=====MY ATTRIBUTES====\nDefence: " << defence;
        cout << "\nAttack: " << attack << "\nSpeed: " << speed << endl;
        cout<<endl;
    }
    void readData()
    {
        do
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
                    default:
                        cout<<"Wrong number!"<<endl;
                }
        } while(choose>3 || choose<1);
        
        cout<<"Write a name: ";
        cin>>name;
        cout<<"The system will draw the attribute values"<<endl;
        cout<<endl;
        defence=rand()%100+1;
        attack=rand()%100+1;
        speed=rand()%100+1;
   
    }
    friend void fightNight(Character c1, Character c2);

};

    void fightNight(Character c1,Character c2)
{
        
    if (c1.attack > c2.defence) cout<<"Player 1. won a fight! Congratulations!\n";
    else  cout<<"Player 2. won a fight! Congratulations!\n";
        
    if (c1.attack==c2.defence || c2.attack==c1.defence)
    {
        if(c1.speed > c2.speed) cout<<"Player 1. won a fight! Congratulations!\n";
        else cout<<"Player 2. won a fight! Congratulations!\n";
    }
        
}
int Character::player=0;
int main()
{
    Character c1,c2;
   
 
    c1.playerInfo();
    c1.readData();
    
    c2.playerInfo();
    c2.readData();
    
    c1.printData();
    c2.printData();
    

    fightNight(c1,c2);

    
    return 0;
}
