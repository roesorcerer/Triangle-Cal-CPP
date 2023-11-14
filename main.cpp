

/* 
 * File:   main.cpp
 * Author: Rowan Stratton 
 *
 * Created on January 7, 2021, 3:59 PM
 */


#include<iostream>
#include<iomanip>

using namespace std;

/*
 * 
 */
int main() {

    int side1=3; //hold value for side1
    int side2=4; //hold value for side2
    int area=0; //initial value set to 0
    
    area=(side1*side2)/2; //Formula to calculate area
    
    cout<<"The sides of the triangle measure "<<side1<< " and "<<side2<<"."
            <<" The area is "<<area<<"."<<endl; //output first statement for the area of the first triangle. 
    
    double side3=0; //Variable for side3,side4 and area1 initialized to 0
    double side4=0;
    double area1=0;
    
    side3=side1*5; //takes side1 held value and multiply by 5 to change value of side3
    side4=side2*5; //takes side2 held value and multiply by 5 to change value of side4
        
    area1=(side3*side4)/2; //Formula to calculate area1 using updated values. 
    
        cout<<"The sides of the triangle measure "<< fixed << setprecision(1) << side3<<" and "<<side4<<"."<<" The area is "<<area1<<"."<<endl;
        //Output statement displaying side3 and side4 with area1 formula. Set precision to display decimal point to the tenth. 
        
    return 0; //end program.
}
