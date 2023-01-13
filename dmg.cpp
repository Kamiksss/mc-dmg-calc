#include <iostream>
using namespace std;

bool if_armor(){
    Pytanie: 
    string armor;
    cout<<"Czy masz zbroję? Y/N \n";
    cin >> armor;
    if(armor == "Y" || armor == "y")
        return true;
    else if(armor == "N" || armor == "n")
        return false;
    else{
        cout<<"Przepraszam nie rozumiem, ponawianie pytania... \n";
        goto Pytanie;
        }
    
}

int if_ench(string ask, int level){
    Pytanie: 
    cout<<"Czy twoja zbroja ma enchant Protection? Y/N \n";
    cin >> ask;
    if(ask == "Y" || ask == "y"){
        level = 0;
        cout<<"Podaj poziom enchantu Protection \n";
        cin>>level;
        return level;
        }
    else if(ask == "N" || ask == "n"){
        cout<<"Nie masz protection, koniec programu";
        return 0;
        }
    else{
        cout<<"Przepraszam nie rozumiem, ponawianie pytania... \n";
        goto Pytanie;
        }

}


int main(){
    cout<<"Working in progress..."<<endl;

       string ask;
       int level=32;
        

    cout<<"Pytania o zbroje: \n"<<endl;
    if(if_armor()== false){
        cout<<"Nie masz zbroi, program na razie na tym się kończy";
    }
    else
        level = if_ench(ask, level);
        
            cout<<"Poziom prota to "<< level;
}