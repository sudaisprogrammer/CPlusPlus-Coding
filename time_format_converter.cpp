#include<iostream>
using namespace std;

struct TimeformatConverter{
    int hours;
    int minutes;
    int seconds;
    string period = " ";
    //constructor to initailse data members;
    TimeformatConverter(int h,int m,int s):hours(h),minutes(m),seconds(s){}
    void changeFormat(){
        if(hours<=0 || hours>=24){
            cout<<"invalid time\n";
        }
        //this function will convert 24 hour time to 12 equivalent
        //like if its 23:12 pm then in 12 hour it will be 11:12 pm
        if(hours>=12){
            this->hours = 24-hours;
        }

    }
    string changePeriod(){
        if(hours>=12){
            this->period = "PM";
        }
        else{
            this->period = "AM";
        }
        return period;
    }
    int convertToseconds(){
        this->seconds = (hours*60*60)+(minutes*60)+seconds;
        return seconds;
    }
    double convertToMinutes(){
        double min  = this->minutes;
        min = static_cast<double>(minutes+(hours*60)+(seconds/60.0));
        return min;
    }
    double convertToHours(){
        double hr = this->hours;
        hr = static_cast<double>(hours+(minutes/60.0)+(seconds/3600.0));
        return hr;
    }
    void showTime(){
        cout<<"Time is "<<hours<<":"<<minutes<<":"<<seconds<<" "<<changePeriod();
    }
};
int main(){
    TimeformatConverter t1 = TimeformatConverter(18,3,45);
    t1.changePeriod();
    t1.showTime();

    t1.changeFormat();
    // cout<<"Seconds are "<<t1.convertToseconds()<<endl;
    // cout<<"minutes are "<<t1.convertToMinutes()<<endl;
    // cout<<"Hours are "<<t1.convertToHours();
    return 0;
}