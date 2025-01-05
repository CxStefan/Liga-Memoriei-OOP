#ifndef CARD_H
#define CARD_H

using namespace System;

public ref class Card
{
public:
    Card() { this->name = ""; this->value = 0; }
    Card(String^ name, int value) { this->name = name; this->value = value; }
    String^ getName() { return name; }
    int getValue() { return value; }
    void setName(String^ name) { this->name = name; }
    void setValue(int value) { this->value = value; }

private:
    String^ name;
    int value;
};

#endif
