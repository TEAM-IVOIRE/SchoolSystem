
#include <iostream>
#include <cstring>
#include <fstream>
#define FILE_NAME "/Users/chimistemignon/Desktop/infos.txt"
using namespace std;

class Student
{
    private :
    int  age  , numero_de_tel;
    string matricule, email, nom , prenom , filiere;
    
public:
    void ajout_infos()
    {
        
        printf("Entrer matricule: ");
        cin>>matricule;
        while(matricule.length() != 8)
        {
            cout<<"ressayer\n";
            cin>>matricule;
        }
        printf("Age: ");
        cin>>age;
        printf("Numero_de_tel: ");
        cin>>numero_de_tel;
        cin.ignore(1);
        printf("Email: ");
        cin>>email;
        printf("Nom: ");
        cin>>nom;
        printf("Prenom:");
        cin>>prenom;
        printf("Filiere: ");
        cin>>filiere;
    }
    
    void display_infos()
    {
        cout<<"Matricule: "<<matricule<<endl
        <<"Age: "<<age<<endl
        <<"Numero_de_tel: "<<numero_de_tel<<endl
        <<"Email: "<<email<<endl
        <<"Nom: "<<nom<<endl
        <<"Prenom: "<<prenom<<endl
        <<"Filiere: "<<filiere<<endl;
    }
};

void  pers()
{
    Student etudiant;
    int choixOption;
    fstream file;
    
    do {
    cout << " 1 - Ajout infos Etudiant" << endl;
    cout << " 2 - Ajout de Scolarité" << endl;
    cout << " 3 - Modification" << endl;
    cout << " 4 - Afficher Etudiants" << endl;
    cout << " 5 - Suppression\n\n\n" << endl;
    cout<<"****************************"<<endl;
    cout << " 0 - Exit"<<endl;
    
    cout<<"Entrer votre option: \n"<<endl;
    cin>>choixOption;
    
    switch (choixOption) {
        case 1:
        {
            etudiant.ajout_infos();
            file.open(FILE_NAME,ios::out);
            if(!file){
                cout<<"Error in creating file...\n";
            }
            file.write((char*)&etudiant,sizeof(etudiant));
            file.close();
            cout<<"Infos Sauvgardés.\n\n";
            
            //open file again
            file.open(FILE_NAME,ios::in);
            if(!file){
                cout<<"Error in opening file...\n";
            }

            if(file.read((char*)&etudiant,sizeof(etudiant))){
                    cout<<endl<<endl;
                    cout<<"Data extracted from file..\n";
                    //print the object
                    etudiant.display_infos();
            }
            else{
                cout<<"Error in reading data from file...\n";
            }

            file.close();
            break;
        }
        case 2:
        {
            
            break;
        }
            
        case 3:
        {
            break;
        }
            
        default:
            break;
    }
    }while (choixOption !=0);
    
}
