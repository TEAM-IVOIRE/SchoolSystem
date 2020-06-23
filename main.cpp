#include <iostream>
#include "Personnel.h"
using namespace std;
int main()
{
    int choixOption ;
    cout<<"\tGESTION D'ECOLE"<<endl;
    cout<<"****************************"<<endl;
    cout<<"****************************\n\n\n"<<endl;
    
    
    cout << " 1 - Etudiant" << endl;
    cout << " 2 - Professeur" << endl;
    cout << " 3 - Personnels\n\n\n" << endl;
    cout<<"****************************"<<endl;
    cout<<"****************************"<<endl;
    cout << " 0 - Exit"<<endl;
    cout<<"Entrer votre option: "<<endl;
    cin>>choixOption;
    
    switch (choixOption) {
        case 1:
        {
            
            break;
        }
        case 2:
        {
            
            break;
        }
            
        case 3:
        {
            pers();
            break;
        }
        
        default:
            break;
    }
    
    return 0;
    
}
