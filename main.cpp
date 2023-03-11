#include <iostream>    
using namespace std;    
    
int main() {    
    int start_hr, start_min, end_hr, end_min; // 停車起始時間和結束時間的時與分    
    int duration; // 停車時長（分鐘）    
    int fee = 0; // 停車費    
    
    // 輸入停車起始時間和結束時間    
    cin >> start_hr >> start_min;    
    cin >> end_hr >> end_min;    
    
    // 計算停車時長（以分鐘為單位）    
    duration = (end_hr - start_hr) * 60 + (end_min - start_min);    
   //cout<<duration<<endl; 
    // 計算停車費    
    if (duration <= 120) { // 停車2小時以內    
        fee = (duration/ 30) * 30;    
    } else if (duration <= 240) { // 停車超過2小時，但未滿4小時    
        fee = (duration - 120) / 30 * 40+120;    
    } else { // 停車超過4小時以上    
        fee = (duration - 240) / 30 * 60+120+160;    
    }    
    
    // 輸出停車費    
    cout << fee << endl;    
    
    return 0;    
}
