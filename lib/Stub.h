//
// Created by cyran on 03.03.18.
//

#ifndef MEASURETIME_STUB_H
#define MEASURETIME_STUB_H

#include <thread>
#include <chrono>
#include "IPreparable.h"
#include "IRunnable.h"

class Stub: public IPreparable,
            public IRunnable {
private:
    unsigned int data_size = 0;
    int* data = nullptr;

public:
    ~Stub();

    void prepare(unsigned int data_size,
                 const Case& exp_case) override;
    void prepare(unsigned _data_size) {
        prepare(_data_size, Case::average);
    }
    void run() override;

};


#endif //MEASURETIME_STUB_H
