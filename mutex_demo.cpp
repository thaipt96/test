#include<iostream>
#include<thread>
#include<mutex>


struct Counter {
    int value;
    Counter() : value(0) {}

    void increment(){
        ++value;
    }
    void decrement(){
        if(value == 0){
            throw "Value cannot be less than 0";
        }
        --value;
    }
};

struct ConcurrentCounter {
    std::mutex mutex;
    Counter counter;

    void increment(){
        mutex.lock();
        counter.increment();
        mutex.unlock();
    }

    void decrement(){
        mutex.lock();
        counter.decrement();        
        mutex.unlock();
    }
};
