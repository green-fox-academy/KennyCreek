//
// Created by vezer on 2019. 04. 17..
//

#include "BlogPost.h"

BlogPost::BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate){
    BlogPost::_authorName = authorName;
    _title = title;
    BlogPost::_text = text;
    BlogPost::_publicationDate = publicationDate;
}

void BlogPost::setauthorName(std::string author) {
    _authorName = author;
}

void BlogPost::settitle(std::string title1) {
    _title = title1;
}

void BlogPost::settext(std::string text1) {
    _text = text1;
}

void BlogPost::setpublication(std::string pudate) {
    _publicationDate = pudate;
}

std::string BlogPost::getauthorName() {
    return _authorName;
}

std::string BlogPost::gettitle() {
    return _title;
}

std::string BlogPost::gettext() {
    return _text;
}

std::string BlogPost::getpublication() {
    return _publicationDate;
}

