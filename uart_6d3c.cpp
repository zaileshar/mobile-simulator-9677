#ifndef UART_H
#define UART_H

class UartController {
public:
    virtual void init() = 0;
    virtual void process() = 0;
};

#endif