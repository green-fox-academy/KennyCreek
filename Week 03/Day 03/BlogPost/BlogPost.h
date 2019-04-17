//
// Created by vezer on 2019. 04. 17..
//



#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H
#include <iostream>

class BlogPost{
public:
    BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);
    void setauthorName(std::string author);
    void settitle(std::string title1);
    void settext (std::string text1);
    void setpublication (std::string pudate);

    std::string getauthorName();
    std::string gettitle();
    std::string gettext();
    std::string getpublication();

private:
    std::string _authorName;
    std::string _title;
    std::string _text;
    std::string _publicationDate;


};

#endif //BLOGPOST_BLOGPOST_H