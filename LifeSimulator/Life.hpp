#ifndef Life_hpp
#define Life_hpp

#include <stdio.h>
#include "iostream"
#include <vector>

using namespace std;

class Life
{
    string placeOfBirth[6] = {"Northen America","Southen America","Africa","Europe","Australia","Asia"};
    string schoolLevel[3] = {"high","mid","low"};
    string schoolFavouriteSubject[3]={"math","languages","chemistry"};
    string schoolSocietyPosition[3]={"leader","shy","nnormal"};
    string universityTypes[10][4] = {
        {"Philology", "Language Teaching", "Cultural Studies", "Translation Studies"},
        {"Law", "Law and Business", "Law and Government", "Law and Public Health"},
        {"Computer Science", "Computer graphics", "Human-computer interaction", "Artificial intelligence"},
        {"Finance", "Corporate finance", "International finance", "Financial economics"},
        {"Art & Design", "Basics of visual arts", "Computer graphics", "Commercial Design"},
        {"Architecture", "Landscape Design", "Urban Planning", "Heritage conservation"},
        {"Managemend", "General Management", "Project Management", "Sales and Marketing"},
        {"Medicine", "Paediatrics", "General practice", "Gynaecology"},
        {"Psychology", "Neuropsychology", "Criminal psychology", "Educational psychology"},
        {"Biology", "Molecular biology", "Animal biology", "Human biology"}
    };
    string jobs[10][5] = {
        {"Translator", "Intempreter", "Journalist", "Publisher", "Copywriter"},
        {"Lawyer", "Judge", "Police", "Administator", "Politic"},
        {"Software Engineer", "Technology Architect", "Mobile Developer", "Web Developer", "Test Analyst"},
        {"Statistician", "Research Analyst", "Financial Advisor", "Financial Manager", "Logistician"},
        {"Web Designer", "Fashion Designer", "Art Director", "Graphic Designer", "Industrial Designer"},
        {"Structural engineer", "Landscape architect", "Town planner", "Drafters", "Construction Managers"},
        {"Retail manager", "Sales executive", "Systems analyst", "Marketing executive", "Human resources officer"},
        {"Dentist", "Psychiatrist", "Surgeon", "Veterinarian", "Nurse"},
        {"School Psychologist", "Clinical Psychologist", "Vocational Counselor", "Special Education Teacher", "Sports Psychologist"},
        {"Research Scientist", "Microbiologist", "Secondary school teacher", "Pharmacologist", "Nature Guard"}
    };
    string hobbies[4][9];/*={
        {"Sport","Swimming","Bodybuilding","Running","Shaping","Fitness","Gymnastics","Aerobics","Badminton"},
        {"Dancing","Ballroom","Club","European","Hustle","Latin American","East","Strip-dance","Bellidans"},
    };*/
    int random (int a);
    int count;
    bool desigion (int p1,int r1, int p2, int r2);
    
    
public:
    Life();
    string choosePlaceOfBirth ();
    string chooseSchoolLevel (int param[]);
    string chooseSchoolFavouriteSubject(int *param1);
    string chooseSocietyPosition(int param[]);
    string chooseUniversityType(int* param);
    string chooseJob(int* param);
};

#endif /* Life_hpp */
