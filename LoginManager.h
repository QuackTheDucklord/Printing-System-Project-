#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H
#include <vector>
#include <iostream> 

using namespace std;

class LoginManager 
{
public:
    int choice; 
    int currentBalance = 1000;
    bool studentCheck;
    int index = 0;
    string currentUser;
    string userNameAttempt;
    string passwordAttempt;
    void viewStudentMenu();
    void viewAdminMenu();
    void login();

    vector<string> userName = {"cyates", "cking", "mespinoza", "lguerra", "kschroeder", "lmaldonado", "asolomon", "rfrancis", "mgay", "dgrant", "lharris", "spatton", "bhull", "mhoward", "ccunningham", "tgood", "kjacobson", "bvalenzuela","sdaugherty", "hkrueger", "trichards","nruiz", "aliu", "sfrazier", "dfinley", "tterry", "eandersen", "bgreer", "iknight", "aflynn"};

    vector<string> passWord = {"moxa97", "tihi27", "lumo10", "yasa40", "waca61", "bupo41", "sino67", "zogu92", "zadu67", "dota36", "gufe15", "cudo77", "zito25", "hiva18", "jite79", "cute11", "koba39", "bipi40", "wobu60", "wami19", "gupe73", "himu52", "kare10", "seme37", "vaci37", "fulu86", "pive34", "kuti93", "tono59", "fiso29"};

    vector<int> balance = {1000, 1000, 1000,1000, 1000, 1000,1000, 1000, 1000,1000, 1000, 1000,1000, 1000, 1000,1000, 1000, 1000,1000, 1000, 1000,1000, 1000, 1000,1000, 1000, 1000,1000, 1000, 1000};

    vector<string> fullName = {"Camden Yates", "Claire King", "Michael Espinoza", "London Guerra", "Kaiya Schroeder", "Lillian Maldonado", "Armani SOlomon", "Rashad Francis", "Marcel Gay", "Diya Grant", "Leanna Harris", "Serenity Patton", "Braiden Hull", "Mila Howard", "Cordell Cunningham", "Trevon Good", "Kaden Jacobson", "Brycen Valenzuela", "Steven Daugherty", "Helen Krueger", "Theodore Richards", "Nash Ruiz", "Aryana Liu", "Sean Frazier", "Desmond Finley", "Tamia Terry", "Evie Andersen", "Brycen Greer", "Izabelle Knight", "Alessandra Flynn"};

private:
  string specialPasswordAttempt; 
};

#endif
