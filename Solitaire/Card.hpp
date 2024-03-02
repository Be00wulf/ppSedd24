/* 
 * File:   Card.hpp
 * Author: helmuth
 *
 * Created on 2 de marzo de 2020, 09:48
 */

#ifndef CARD_HPP
#define CARD_HPP
#include <string>
using namespace std;

class Card {
    public:
        Card();
        Card(string value, int type, string color, bool hide);
        void setValue(string value);
        void setType(int type);
        void setColor(string color);
        void setHide(bool hide);
        string getValue();
        int getType();
        string getColor();
        bool isHide();
        ~Card();
    
    private:
        string value;
        int type;
        string color;
        bool hide;
};
#endif /* CARD_HPP */

