// still testing

#include <iostream>
using namespace std;

int sword(int type)
{
    cout << "Wybierz swój miecz" << endl
         << "1.Wodeen 2.Stone 3.Iron 4.Gold 5.Diamond 6.Netherite" << endl;
    cin >> type;
    switch (type)
    {
    case 1:
        cout << "Wybrałeś drewniany miecz";
        return 1;
        break;
    case 2:
        cout << "Wybrałeś kamienny miecz";
        return 2;
        break;
    case 3:
        cout << "Wybrałeś żelazny miecz";

        return 3;
        break;
    case 4:
        cout << "Wybrałeś złoty miecz";
        return 4;
        break;
    case 5:
        cout << "Wybrałeś diamentowy miecz";
        return 5;
        break;
    case 6:
        cout << "Wybrałeś netherite miecz";
        return 6;
        break;
    }
}

bool if_armor()
{
Pytanie:
    string armor;
    cout << "Czy przeciwnik ma zbroję? Y/N \n";
    cin >> armor;
    if (armor == "Y" || armor == "y")
        return true;
    else if (armor == "N" || armor == "n")
        return false;
    else
    {
        cout << "Przepraszam nie rozumiem, ponawianie pytania... \n";
        goto Pytanie;
    }
}

int if_ench(string ask, int level)
{
Pytanie:
    cout << "Czy zbroja przeciwnika ma enchant Protection? Y/N \n";
    cin >> ask;
    if (ask == "Y" || ask == "y")
    {
        level = 0;
        cout << "Podaj poziom enchantu Protection \n";
        cin >> level;
        return level;
    }
    else if (ask == "N" || ask == "n")
    {
        return 0;
    }
    else
    {
        cout << "Przepraszam nie rozumiem, ponawianie pytania... \n";
        goto Pytanie;
    }
}

int main()
{
    cout << "Working in progress..." << endl;

    string ask_armor;
    int level_prot = 0;
    int sword_type = 0;

    cout << "Pytania o zbroje: \n"
         << endl;
    if (if_armor() == false)
    {
        cout << "Brak zbroi\n";
    }
    else
    {
        level_prot = if_ench(ask_armor, level_prot);
        if (level_prot == 0)
        {
            cout << "Brak prota\n";
        }
        else
            cout << "Poziom prota to " << level_prot;
    }

    cout << "Pytania o miecz \n";
    sword_type = sword(sword_type);
    cout << sword_type;
}