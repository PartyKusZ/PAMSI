#include "parser.hpp"

t_datas read_from_csv_file(std :: fstream &file){
    
    t_datas x;
    std :: string coma = ",";
    int index1;
    int index2;
    std :: string movie;
    std :: string rating;
    std :: string buffer;    
    

    std :: getline(file,buffer);
    index1 = buffer.find_first_of(coma);
    index2 = buffer.find_last_of(coma);
    movie = buffer.substr(index1 + 1, index2 - index1 - 1);
    rating = buffer.substr(index2 + 1, buffer.length() - index2);


    //std :: cout << movie << std :: endl;
    //std :: cout << rating << std :: endl;
    x.move = movie;
    x.rating = rating;
    return x;
}

