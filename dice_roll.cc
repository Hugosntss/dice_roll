#include <iostream>
using namespace std;

int dice(){

    int dice_roll;
    int maxValue = 6; // maximum value of the dice
    int minValue = 1; // minimum value of the dice

    dice_roll = rand() %(maxValue - minValue +1) + minValue;

return dice_roll;
}

int main(){

    srand(time(0)); // srand has the task to call a random number cited before
    for(int i=0;i<2;i++) 
{
cout<< dice()<< endl;
}
}

