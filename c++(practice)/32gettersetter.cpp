#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    Stove(int temperature){
        setTemp(temperature);
    }

    int getTemp(){
        return temperature;
    }
    void setTemp(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
        
    }
};

int main()
{
    Stove stove(5);
    // stove.temperature = 100000; // public 으로 하면 이렇게 밖에서도 접근 가능

    return 0;
}