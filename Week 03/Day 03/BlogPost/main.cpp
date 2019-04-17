#include <iostream>
#include "BlogPost.h"
int main() {
    BlogPost post("John Doe\n", "Lorem Ipsum\n", "Lorem ipsum\ndolor sit amet.\n", "2000.05.04.");
    std::cout<< post.getauthorName() << post.gettitle() << post.gettext() << post.getpublication();
    std::cout<<std::endl;
    std::cout<<std::endl;
    BlogPost post2("Tim Urban\n", "Wait but why\n", "A popular long-form\n stick-figure-illustrated blog about almost everything.\n", "2010.10.10.\n");
    std::cout<< post2.getauthorName() << post2.gettitle() << post2.gettext() << post2.getpublication();
    std::cout<<std::endl;
    std::cout<<std::endl;
    BlogPost post3("William Turton\n","One Engineer Is Trying to Get IBM to Reckon With Trump\n", "Daniel Hanley a cybersecurity engineer at IBM, doesn’t want to be the center of attention.\n When I asked to take his picture outside one of IBM’s New York City offices,\n he told me that he wasn’t really into the whole organizer profile thing.\n", "2017.03.28.");
    std::cout<< post3.getauthorName() << post3.gettitle() << post3.gettext() << post3.getpublication();

    return 0;
}