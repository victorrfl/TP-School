#include <iostream>


using namespace std;

int main()
{
    int const nomEleve(2);

    string eleve[nomEleve];
    eleve[0] = "Jean Louis";
    eleve[1] = "Bernard";

    int const nombreNotes(4);

    double notes[nombreNotes];
    notes[0] = 17;
    notes[1] = 6;
    notes[2] = 19;
    notes[3] = 10;

    double moyenne(0);
    for(int i(0); i<nombreNotes; i++)
    {
        moyenne += notes[i];
    }
    moyenne /= nombreNotes;

    cout << "La moyenne de " << eleve[0] << " est :" << moyenne << endl;



    int const nombreNotesDeux(4);

    double notesDeux[nombreNotesDeux];
    notesDeux[0] = 13;
    notesDeux[1] = 4;
    notesDeux[2] = 11;
    notesDeux[3] = 10;

    double moyenneDeux(0);
    for(int i(0); i<nombreNotesDeux; i++)
    {
        moyenneDeux += notesDeux[i];
    }
    moyenneDeux /= nombreNotesDeux;

    cout << "La moyenne de " << eleve[1] << " est :" << moyenneDeux << endl;

    int const moyenneClasse(2);
    double moyenneEleve[moyenneClasse];
    moyenneEleve[0] = moyenne;
    moyenneEleve[1] = moyenneDeux;
    double moyenneGlobale(0);
    for(int i(0); i<moyenneClasse; i++)
    {
        moyenneGlobale += moyenneEleve[i];
    }
    moyenneGlobale /= moyenneClasse;

    cout << "La moyenne de la classe est : " << moyenneGlobale << endl;

    if(moyenneGlobale < 10)
    {
        cout << "En dessous de la moyenne bougez vous !!" << endl;
    }
    else
    {

        cout << "Vous pouvez faire mieux noublard !" << endl;
    }
}
