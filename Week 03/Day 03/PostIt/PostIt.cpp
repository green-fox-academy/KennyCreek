//
// Created by vezer on 2019. 04. 17..
//
#include "PostIt.h"

PostIt::PostIt(std::string backgroundcolor, std::string text, std::string textcolor) {
    PostIt::_backgroundcolor = backgroundcolor;
    PostIt::_text = text;
    settextcolor(textcolor);
}

void PostIt::setBackground(std::string bground1) {
        _backgroundcolor = bground1;
}
void PostIt::settext(std::string text1) {
    _text = text1;
}
void PostIt::settextcolor(std::string textcolor1){
    _textcolor = textcolor1;
}

std::string PostIt::getBackground() {
    return _backgroundcolor;
}

std::string PostIt::gettext() {
    return _text;
}

std::string PostIt::gettextcolor() {
    return _textcolor;
}



#include "PostIt.h"
