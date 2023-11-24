#include <iostream>
#include "Movies.h"

using namespace std;

void addmovie(Movies&,string,string,int);
void increment(Movies&,string);
int main(){
    
    Movies my_movies;
    cout<<"-------------------------------------------\n";
    cout<<"Welcome to your MovieTracker System:\n";
    cout<<"-------------------------------------------\n";
    bool condition=true;
    do{ 
        int n; 
        cout<<"\n1. Display Watched Movies.\n";
        cout<<"2. Add a Movie to your watchlist.\n";
        cout<<"3. Increment watch count.\n";
        cout<<"4. Quit\n";
        cout<<"\nEnter your choice: ";
        cin>>n;
        
        switch(n){
            case 1:
              cout<<"Current Movies Watchlist: \n";
              my_movies.display();
              break;
            case 2:{
              string movie;
              string rating;
              int count;              
              cout<<"Enter Movie Name, Movie Rating and Watch count with a space: ";
              cin>>movie>>rating>>count;
              addmovie(my_movies,movie,rating,count);
              break;
            }
            case 3:{
              string name;
              cout<<"Enter Movie Name: ";
              cin>>name;
              increment(my_movies,name);break;
            }
            case 4:
               condition=false;break;
            default:
               cout<<"Enter valid input!\n";  
        }
    }while(condition);
       
    return 0;
}

void addmovie(Movies &obj,string name,string rating,int count){
    if(obj.addmovie(name,rating,count))
        cout<<name<<" added."<<endl;
    else
        cout<<name<<" already exist."<<endl;
}

void increment(Movies &obj,string name){
    if(obj.increment(name))
        cout<<name<<" incremented."<<endl;
    else
        cout<<name<<" not found."<<endl;
}