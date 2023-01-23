/*  Minecraft Damage Calculator made for fun and to improve my poor programing skills.
I plan to translate this to javascript and then input it to some website but for now those are just dreams kekw
    Currently it is mainly for Minecraft 1.8.9 and lower */

#include <iostream>
using namespace std;

int sword(int type)
{
    cout << "Sword: \n"
         << endl;
    cout << "Choose your sword" << endl
         << "1.Wodeen 2.Stone 3.Iron 4.Gold 5.Diamond 6.Netherite" << endl;
    cin >> type;
    switch (type)
    {
    case 1:
        cout << "You have choosen wooden sword";
        return 1;
        break;
    case 2:
        cout << "You have choosen stone sword";
        return 2;
        break;
    case 3:
        cout << "You have choosen iron sword";

        return 3;
        break;
    case 4:
        cout << "You have choosen gold sword";
        return 4;
        break;
    case 5:
        cout << "You have choosen diamond sword";
        return 5;
        break;
    case 6:
        cout << "You have choosen netherite sword";
        return 6;
        break;
    }
}

int if_potion(int level)
{
Pytanie:
    cout << endl
         << "Provide your strength effect level\n";
    cin >> level;
    if (level < 0)
    {
        cout << "I don't get it, asking again...\n";
        goto Pytanie;
    }
    else
    {
        cout << "You have choosen level: " << level << "\n";
        return level;
    }
}

bool if_armor()
{
Pytanie:
    string armor;
    cout << "Does your enemy wear armor? Y/N\n";
    cin >> armor;
    if (armor == "Y" || armor == "y")
        return true;
    else if (armor == "N" || armor == "n")
        return false;
    else
    {
        cout << "I don't get it, asking again...\n";
        goto Pytanie;
    }
}

int armor(int type)
{
    cout << "Choose armor type: 1. Leather 2.Chain 3.Iron 4.Gold 5.Diamond 6.Netherite" << endl;
    cin >> type;
    switch (type)
    {
    case 1:
        cout << "You have choosen Leather";
        return 1;
        break;
    case 2:
        cout << "You have choosen Chain ";
        return 2;
        break;
    case 3:
        cout << "You have choosen Iron ";
        return 3;
        break;
    case 4:
        cout << "You have choosen Gold ";
        return 4;
        break;
    case 5:
        cout << "You have choosen Diamond ";
        return 5;
        break;
    case 6:
        cout << "You have choosen Netherite ";
        return 6;
        break;
    }
}

int if_ench(string ask, int level)
{
Pytanie:
    cout << endl
         << "Does your enemy's armor have protection enchant Y/N \n";
    cin >> ask;
    if (ask == "Y" || ask == "y")
    {
        level = 0;
        cout << "Provide protection level\n";
        cin >> level;
        return level;
    }
    else if (ask == "N" || ask == "n")
    {
        return 0;
    }
    else
    {
        cout << "I don't get it, asking again...\n";
        goto Pytanie;
    }
}

string decipher(int cipher_sword, int cipher_prot, int cipher_strength, int cipher_armor)
{
    cout << endl
         << "To sum up, You have chosen: ";
    switch (cipher_sword)
    {
    case 1:
        cout << "Wooden Sword";
        break;
    case 2:
        cout << "Stone Sword";
        break;
    case 3:
        cout << "Iron Sword";
        break;
    case 4:
        cout << "Golden Sword";
        break;
    case 5:
        cout << "Diamond Sword";
        break;
    case 6:
        cout << "Netherite Sword";
        break;
    }
    cout << " with ";
    switch (cipher_armor)
    {
    case 1:
        cout << "Leather Armor";
        break;
    case 2:
        cout << "Chain Armor";
        break;
    case 3:
        cout << "Iron Armor";
        break;
    case 4:
        cout << "Golden Armor";
        break;
    case 5:
        cout << "Diamond Armor";
        break;
    case 6:
        cout << "Netherite Armor";
        break;

    default:
        cout << "No Armor";
    }
    cout << " with Protection ";
    cout << cipher_prot;
    cout << " and strength " << cipher_strength << endl;
}
int main()
{
    string ask_armor;
    int level_prot = 0;
    int sword_type = 0;
    int strength_type = 0;
    int armor_type = 0;

    cout << "Armor: \n";
    if (if_armor() == false)
    {
        cout << "You choose no armor\n";
    }
    else
    {
        armor_type = armor(armor_type);
        level_prot = if_ench(ask_armor, level_prot);
        if (level_prot == 0)
        {
            cout << "You don't have a protection enchantment\n";
        }
        else
            cout << "You protection enchantment level is " << level_prot << endl;
    }

    sword_type = sword(sword_type);
    strength_type = if_potion(strength_type);

    cout << endl
         << endl;
    decipher(sword_type, level_prot, strength_type, armor_type);
    return 0;
}