//
// Created by vezer on 2019. 04. 18..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

class Counter{
public:
    Counter(int num = 0);

    void add(int added = 1);
    int get();
    void reset();

private:
    int _num1;
    int _initialvalue;





};
#endif //COUNTER_COUNTER_H
