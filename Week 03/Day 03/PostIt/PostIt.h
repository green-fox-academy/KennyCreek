//
// Created by vezer on 2019. 04. 17..
//

#ifndef POSTIT_POSTIT_H
#define POSTIT_POSTIT_H
#include <iostream>



class PostIt{
public:
    PostIt(std::string backgroundcolor, std::string text, std::string textcolor);
    void setBackground(std::string bground1);
    void settext(std::string text1);
    void settextcolor(std::string textcolor1);

    std::string getBackground();
    std::string gettext();
    std::string gettextcolor();

private:
    std::string _backgroundcolor;
    std::string _text;
    std::string _textcolor;
};
#endif //POSTIT_POSTIT_H