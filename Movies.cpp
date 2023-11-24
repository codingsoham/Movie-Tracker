#include "Movies.h"
#include "Movie.h"

bool Movies::addmovie(std::string name,std::string rating,int count){
    
    for(const auto &check:nmovies){
        if(check.get_name()==name)
            return false;
    }
    
    nmovies.push_back(Movie{name,rating,count});
    return true;
}

bool Movies::increment(std::string name){
    for(auto &check:nmovies){
        if(check.get_name()==name){
            check.increment();
            return true;
        }
    }
    return false;
}

void Movies::display(){
    if(nmovies.size()==0)
        std::cout<<"Sorry, No movies to display.\n";
    else{    
        std::cout<<"==========================================\n";
        for(const auto &dis:nmovies){
           std::cout<<dis.get_name()<<", "<<dis.get_rating()<<", "<<dis.get_viewcount()<<std::endl;
        }
        std::cout<<"==========================================\n";    
    }
}

