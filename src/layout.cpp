#include <iostream>
#include "layout.hpp"

void boxTop(int width) {
    std::cout <<"╔";
    for(int i=0; i< width; i++) {
        std::cout <<"=";
    }
    std::cout<<"╗\n";
}

void boxBottom(int width){
    std::cout <<"╚";
    for(int i=0; i< width; i++){
        std::cout << "=";
    }
    std::cout << "╝\n";
}

void boxSeperator(int width){
    std::cout << "╠";
    for(int i=0; i< width; i++){
        std::cout << "=";
    }
    std::cout << "╣\n";
}

