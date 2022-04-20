#include "parser.hpp"

t_data read_from_csv_file(std :: fstream &file){
    
    t_data x;
    char c;
    std :: string movie;
    std :: string rating;
    std :: string buffer;    
    std :: getline(file,buffer,',');
    
        file >> c;
        if(c == '"'){
            std :: getline(file,movie,'"');   
            file >> c;     
        }else{
            file.putback(c);
            std :: getline(file,movie,',');
        }
        std :: getline(file,rating);
    
    

    std :: cout << movie << std :: endl;
    std :: cout << rating << std :: endl;
    return x;
}

