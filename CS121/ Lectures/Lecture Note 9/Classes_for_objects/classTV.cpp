#include <iostream>

using namespace std;

class TV{
    public:
    int channel; 
    int volumeLevel; //Default volume level is 1
    bool on; // By default TV is off

    TV()
    {
        channel = 1; // Default channel is 1
        volumeLevel = 1; // Default volunme level is 1
        on = false; // By default, TV is off
    }

    void turnOn(){
        on = true;
    }

    void turnOff(){
        on = false;
    }

    void setChannel(int newChannel){
        if (on && newChannel >= 1 && newChannel <= 120)
            channel = newChannel;
    }

    void setVolume(int newVolume){
        if (on && newVolume >= 1 && newVolume <= 7)
            volumeLevel = newVolume;
    }

    void channelUp(){
        if (on && channel < 120)
        channel++;
    }

    void channelDown(){
        if (on && channel > 1)
        channel--;
    }

    void volumeUp(){
        if (on && volumeLevel < 7)
        volumeLevel++;
    }

    void volumeDown(){
        if (on && volumeLevel > 1)
        volumeLevel--;
    }
};

int main(){
    TV tv1;
    tv1.turnOn();
    tv1.setChannel(30);
    tv1.setVolume(3);

    TV tv2;
    tv2.turnOn();
    tv2.channelUp();
    tv2.channelUp();
    tv2.volumeUp();

    cout << "TV 1's channel is " << tv1.channel
    << " and volume level is " << tv1.volumeLevel << endl;
    cout << "TV 2's channel is " << tv2.channel
    << " and volume level is " << tv2.volumeLevel << endl;

    return 0;
}