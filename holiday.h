#pragma once
#include "dayOfYear.h"

namespace YooSeoyoung2693186
{
    class holiday
    {
        dayOfYear date;
        bool parkingEnforcement;
    public:
        holiday(dayOfYear d= dayOfYear{1,1}, bool p=false)
            :date{d}, parkingEnforcement{p}
        {}
        void print() const 
        {
            date.print();
            if(parkingEnforcement)
                std::cout<< "Parking laws will be enforced.\n";
            else
                std::cout << "Parking laws will NOT be enforced.\n";
        }
        const dayOfYear& getDate() const {return date;}
        void setDate(const dayOfYear& d){date = d;}
    };
}