#include<iostream>
using namespace std;
class Pokimon{
    public:
    int attack;
    string type;
};
 void change(Pokimon* ptr){
        (*ptr).attack = 80;
        (*ptr).type = "Dorimon";
    }
int main(){
    Pokimon pikachu{100,"Dragon"};
        // pikachu.attack=100;
        // pikachu.type="Dragon";
        cout<<pikachu.attack<<" "<<pikachu.type<<endl;
        change(&pikachu);
         cout<<pikachu.attack<<" "<<pikachu.type<<endl;


}