#include "Life.hpp"

Life::Life() {
    //placeOfBirth = {"Northen America","Southen America","Africa","Europe","Australia","Asia"}; //Excess elements in scalar initializer
};


string Life::chooseSchoolLevel(int* param){
    string result;
    if (param[5]>=random(6, 10))
    {
        return schoolLevel[0];
    } else if (param[5]>=random(3, 7))
    {
        return schoolLevel[1];
    } else return schoolLevel[2];
};

string Life::choosePlaceOfBirth(){
    return placeOfBirth[rand()%6];
};

string Life::chooseSchoolFavouriteSubject(int *param1){
    if (desigion(param1[5], random(7, 10), param1[2], random(5, 10))) {
        return schoolFavouriteSubject[0];
    } else if (desigion(param1[5], random(3, 7), param1[2], random(2, 7))){
        return schoolFavouriteSubject[2];
    } else return schoolFavouriteSubject[1];
};


int Life::random(int a,int b){
    srand(time(NULL));
    return rand()%b+a;
};

bool Life::desigion(int p1,int r1, int p2, int r2){
    if ((p1>=r1) && (p2>=r2)){
        return true;
    } else return false;
};
