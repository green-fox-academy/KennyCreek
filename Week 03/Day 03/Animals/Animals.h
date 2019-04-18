//
// Created by vezer on 2019. 04. 17..
//

#ifndef ANIMALS_ANIMALS_H
#define ANIMALS_ANIMALS_H



class Animals{
public:
    Animals(int hunger  = 50 , int thirst = 50);

    void eat();
    void drink();
    void play();

    int getHunger();
    int getThirst();
    int getPlay();

private:

    int _hunger;
    int _thirst;

};

#endif //ANIMALS_ANIMALS_H
