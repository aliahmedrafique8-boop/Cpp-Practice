#include<iostream>
using namespace std;
int main()
{
    float imposter, player;
    int chance;
    cout << "Enter Imposter Count: ";
    cin >> imposter;
    cout << "Enter Player Count: ";
    cin >> player;
    chance = (imposter/player) * 100;
    cout << "Chance of being an Imposter: " << chance << "%" << endl;
}