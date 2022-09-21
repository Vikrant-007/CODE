#include<iostream>
using namespace std;
enum Weapons
{
    WEAPONS_MISSILE,   //here values by default start with 0 and keep increasig by 1
    WEAPOND_CANNON,    //can assign a value to only one member
    WEAPONS_RAILGUN,
    WEAPONS_ANTIAIRCRAFTGUN,
    WEAPON_TORPEDO
};

void printweaponsname(Weapons weapons)   // function to print names
{
    switch (weapons)
    {
    case WEAPONS_MISSILE:
        cout<<"missile activated";
        break;

    case WEAPOND_CANNON:
        cout<<"cannon activated";
        break;

    case WEAPONS_RAILGUN:
        cout<<"railgun activated";
        break;
         
    case WEAPONS_ANTIAIRCRAFTGUN:
        cout<<"antiaircraft activated";
        break;

    case WEAPON_TORPEDO:
        cout<<"torpedo activated";
        break;


    default:
        break;
    }
}
 
int main()
{
    Weapons missile_1 = WEAPONS_MISSILE;
    Weapons torprido(WEAPON_TORPEDO);           //cant assign aly value
    Weapons cannon =static_cast<Weapons>(10);  //brute force to assign value 

    cout<<torprido<<endl<<missile_1<<endl <<cannon;
    cout<<endl;
    printweaponsname(missile_1);   // calling function
    return 0;

}