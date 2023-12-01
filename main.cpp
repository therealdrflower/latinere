#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;

int main() {

    // Lating Endings
    string ff_end[] = {"a", "ae", "ae", "am", "a", "ae", "arum", "is", "as", "is"}; // 1st Fe. endings
    string sm_end[] = {"us", "i", "o", "um", "o", "i", "orum", "is", "os", "os"}; // 2nd Ma. endings
    string sn_end[] = {"um", "i", "o", "um", "o", "i", "orum", "is", "as", "is"}; // 2nd Ne. endings

    string ff_word[] = {
        "Agricol", "Aqu", "Aur", "Caus", "Culp", "Cura", "Form", "Fortun", "Hor", "Lun",
        "Mens", "Natur", "Naut", "Port", "Puell", "Ros", "Silv", "Terr", "Victori", "Vill",
        "Ann", "Poet", "Sententi", "Spe", "Stell", "Tabul", "Und", "Vit", "Port", "Fabul",
        "Gemin", "Leg", "Part", "Prob", "Regin", "Sagitt", "Scal", "Serv", "Soror", "Spic",
        "Tempest", "Val", "Vest", "Vi", "Vindict", "Vit", "Volupt", "Mur", "Nav", "Oliv"
    }; //1st Fe. words
    string sm_word[] = {
        "Amic", "Domin", "Magistr", "Equ", "Hort", "Liber", "Mur", "Popul", "Vir", "Vent",
        "Agr", "Ann", "Loc", "Numer", "Or", "Puer", "Soci", "Vent", "Vicol", "Voc"
    }; //2nd Ma. words
    string sn_word[] = {
        "Bell", "Don", "Exempl", "Fact", "Gaudi", "Pericul", "Praemi", "Regn", "Sign", "Templ",
        "Ver", "Animal", "Calcar", "Certamen", "Culmen", "Fulmen", "Ius", "Pelag", "Studi", "Troph"
    }; //2nd Ne. words

    //random words
    srand(time(0)); // Initialize random number generator.

    int gender = 1 + rand() % 3; // Gender will be 1, 2, or 3

    int word, ending;

    //1st Feminine
    if(gender == 1) {
        word = rand() % 50;  // Array indices 0-49
        ending = rand() % 10; // Array indices 0-9
        cout << ff_word[word] << ff_end[ending] << endl;
    }

    //2nd Masculine
    else if(gender == 2) {
        word = rand() % 20;  // Array indices 0-19
        ending = rand() % 10; // Array indices 0-9
        cout << sm_word[word] << sm_end[ending] << endl;
    }

    //2nd Neuter
    else if(gender == 3) {
        word = rand() % 20;  // Array indices 0-19
        ending = rand() % 10; // Array indices 0-9
        cout << sn_word[word] << sn_end[ending] << endl;
    }

    std::cout << "Gender: ";
    string userGender;
    cin >> userGender;
    if(userGender != "f" && gender == 1)
    {
        cout << "Wrong!\n";
        return 1;
    }
    if(userGender != "m" && gender == 2)
    {
        cout << "Wrong!\n";
        return 1;
    }
    if(userGender != "n" && gender == 3)
    {
        cout << "Wrong!\n";
        return 1;
    }
    cout << "Case: ";
    string userCase;
    cin >> userCase;

    if(stoi(userCase) != ending)
    {
        cout << "Wrong! " << ending << endl;
        return 1;
    }

    return 0;
}
