#include <iostream>    
using namespace std;    
    
int main() {    
    int start_hr, start_min, end_hr, end_min; // �����_�l�ɶ��M�����ɶ����ɻP��    
    int duration; // �����ɪ��]�����^    
    int fee = 0; // �����O    
    
    // ��J�����_�l�ɶ��M�����ɶ�    
    cin >> start_hr >> start_min;    
    cin >> end_hr >> end_min;    
    
    // �p�ⰱ���ɪ��]�H���������^    
    duration = (end_hr - start_hr) * 60 + (end_min - start_min);    
   //cout<<duration<<endl; 
    // �p�ⰱ���O    
    if (duration <= 120) { // ����2�p�ɥH��    
        fee = (duration/ 30) * 30;    
    } else if (duration <= 240) { // �����W�L2�p�ɡA������4�p��    
        fee = (duration - 120) / 30 * 40+120;    
    } else { // �����W�L4�p�ɥH�W    
        fee = (duration - 240) / 30 * 60+120+160;    
    }    
    
    // ��X�����O    
    cout << fee << endl;    
    
    return 0;    
}
