#include <iostream>
using namespace std;

class Weather{
    public:
        string day;
        string dow;
        string wea;
    Weather(string d,string dow, string w){
        this->day=d;
        this->dow=dow;
        this->wea=w;
    }
    Weather(){}
};

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    string d,dow,wea;

    Weather w1[101];

    for(int i=0;i<n;i++){
        cin>>d>>dow>>wea;
        w1[i]=Weather(d,dow,wea);

    }
    int k;

    for(int i=0;i<n;i++){
        if(w1[i].wea=="Rain"){
            k=i;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(w1[i].wea=="Rain"){
            
            if(w1[i].day<w1[k].day){
                k=i;
            }
        }   
    }

    cout<<w1[k].day<<" "<<w1[k].dow<<" "<<w1[k].wea;


    return 0;
}