#include "Movie.h"

Movie::Movie(std::string m_name,std::string m_rating,int m_viewcount)
     :name{m_name},rating{m_rating},viewcount{m_viewcount}{    
}
Movie::Movie(const Movie &source)
      :Movie(source.name,source.rating,source.viewcount){
    
}
void Movie::set_name(std::string name){
    this->name=name;
}
void Movie::set_rating(std::string rating){
    this->rating=rating;
}
void Movie::set_viewcount(int count){
    viewcount=count;
}


