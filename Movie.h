#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
class Movie{
   private:
   std::string name;
   std::string rating;
   int viewcount;

   public:
   Movie(std::string,std::string,int);
   ~Movie(){};
   Movie(const Movie&); 
   
   std::string get_name() const{return name;}
   std::string get_rating() const{return rating;}
   int get_viewcount() const{return viewcount;}
   
   void set_name(std::string);
   void set_rating(std::string);
   void set_viewcount(int);
   
   void increment(){viewcount++;}
   
};

#endif // MOVIE_H
