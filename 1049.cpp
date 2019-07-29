#include <iostream>
#include <cstring>
#include <cstring>

using namespace std;

int main ()
    {

        char pal1 [30];
        char pal2 [30];
        char pal3 [30];

        cin>>pal1;
        cin>>pal2;
        cin>>pal3;
    
        if((strcmp (pal1,"vertebrado"))==0)
        {
            if(strcmp(pal2,"ave")==0)
            {
                if(strcmp(pal3,"carnivoro")==0)
                {
                    cout<<"aguia"<<endl;
                }
                if(strcmp(pal3,"onivoro")==0)
                {
                    cout<<"pomba"<<endl;
                }
            }

            if(strcmp(pal2,"mamifero")==0)
            {
                if(strcmp(pal3,"onivoro")==0)
                {
                    cout<<"homem"<<endl;
                }
                if(strcmp(pal3,"herbivoro")==0)
                {
                    cout<<"vaca"<<endl;
                }
            }
        }

        if(strcmp(pal1,"invertebrado")==0)
        {
            if(strcmp(pal2,"inseto")==0)
            {
                if(strcmp(pal3,"hematofago")==0)
                {
                    cout<<"pulga"<<endl;
                }
                if(strcmp(pal3,"herbivoro")==0)
                {
                    cout<<"lagarta"<<endl;
                }
            }

            if(strcmp(pal2,"anelideo")==0)
            {
                if(strcmp(pal3,"hematofago")==0)
                {
                    cout<<"sanguessuga"<<endl;
                }
                if(strcmp(pal3,"onivoro")==0)
                {
                    cout<<"minhoca"<<endl;
                }
            }
        }

        return 0;
    }
