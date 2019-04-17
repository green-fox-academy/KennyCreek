#include <iostream>
#include "PostIt.h"


int main() {
    PostIt post("Orange","Idea1","Blue" );
    std::cout<< post.getBackground() <<std::endl;
    std::cout<< post.gettext() <<std::endl;
    std::cout<<post.gettextcolor() <<std::endl;
    return 0;
}