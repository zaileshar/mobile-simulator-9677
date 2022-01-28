#ifndef FIFO_H
#define FIFO_H

class FifoController {
public:
    virtual void init() = 0;
    virtual void process() = 0;
};

#endif