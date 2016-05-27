#ifndef Life_hpp
#define Life_hpp

#include <stdio.h>
#include "iostream"
#include <vector>

using namespace std;

class Life
{
    string *placeOfBirth = new string[6];
    string schoolLevel[3] = {"high","mid","low"};
    string schoolFavouriteSubject[3]={"math","languages","chemistry"};
    string schoolSocietyPosition[3]={"leader","shy","common"};
    int random (int a, int b);
    bool desigion (int p1,int r1, int p2, int r2);
    
public:
    Life();
    string choosePlaceOfBirth ();
    string chooseSchoolLevel (int param[]);
    string chooseSchoolFavouriteSubject(int *param1);
    string chooseSocietyPosition(int param[]);
    bool make (int n, int a);
};

#endif /* Life_hpp */
