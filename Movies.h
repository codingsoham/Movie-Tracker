#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"
#include <vector>
class Movies
{
private:
    std::vector<Movie> nmovies;
public:
    Movies(){};
    ~Movies(){};
      
    bool addmovie(std::string,std::string,int);
    bool increment(std::string);
    void display();
    
};

#endif // MOVIES_H
