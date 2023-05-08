#include<iostream>
using namespace std;

int userBirthDate;
int nearestLeap;

int findBirthDate(){

cout<<"what is your birth year? : ";
cin>>userBirthDate;
}

int wasItNearLeap(int userBirthDate){

for(int year=1; year<=3; year++){
    
     if ((userBirthDate+year)%4==0){
       nearestLeap=userBirthDate+year;
       cout<<"leap year was in "<<nearestLeap<<", you missed it by "<<year<< " year"<<endl;
   }
 }
}

int checkIfLeap(){

    if(userBirthDate%4==0){
      cout<<"nice, you were born in leap year!!!"<<endl;
    }

     else{
      wasItNearLeap(userBirthDate);
     }
}

int main (){

    findBirthDate();
    checkIfLeap();
    return 0;
}