#include<iostream>
using namespace std;
const int max_vaild_year= 9999;
const int min_vaild_year= 1800;
bool is_Leap(int year){
  return (((year % 4)&&(year!=100))||(year%400))
    }
bool is_valid_date(int d, int m, int y)(
    if(m<1|| m> 12){
        return false;}
    if(d<1|| d> 31){
        return false;}
    if(y<min_valid_year|| y> max_valid_year){
        return false;}
    if(m== 2){
    if(is_leap(y)){
      return (d<=29)
        }
    else{
     return (d<= 28)
    }
if (m == 4 || m == 6 || 
        m == 9 || m == 11) 
        return (d <= 30); 
  
    return true; 
} 
  
// Driver code 
int main(void) 
{ 
isValidDate(10, 12, 2000)? cout << "Yes\n" : 
                           cout << "No\n"; 
  
isValidDate(31, 11, 2000)? cout << "Yes\n" : 
                           cout << "No\n"; 
} 
      



