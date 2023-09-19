#include <iostream>
using namespace std;

float gradeToGradePoint(string grade){
    float gradePoint=0;
    if(grade == "A++"){
        gradePoint=10;
    }
    else if(grade == "A+"){
        gradePoint=9;
    }
    else if(grade == "A"){
        gradePoint=8.5;
    }
    else if(grade == "B+"){
        gradePoint=8;
    }
    else if(grade == "B"){
        gradePoint=7.5;
    }
    else if(grade == "C+"){
        gradePoint=7;
    }
    else if(grade == "C"){
        gradePoint=6.5;
    }
    else if(grade == "D+"){
        gradePoint=6;
    }
    else if(grade == "D"){
        gradePoint=5.5;
    }
    else if(grade == "E+"){
        gradePoint=5;
    }
    else if(grade == "E"){
        gradePoint=4;
    }
    else if(grade == "F"){
        gradePoint=0;
    }
    else{
        cout<<"Wrong Input of Grade!!"<<endl;
    }
    return gradePoint;
}
int main(){
    int numberOfSubjects;
    cout<<"Enter total number of subjects:";
    cin>>numberOfSubjects;
    float totalCredits=0;
    string grade[numberOfSubjects];
    float credits[numberOfSubjects];
    float sgpa=0;
    for(int i=0;i<numberOfSubjects;i++){
        cout<<"Enter obtained grade of subject "<<i+1<<" (in BLOCK letters only): ";
        cin>>grade[i];
        cout<<"Enter credits of subject "<<i+1<<": ";
        cin>>credits[i];
        totalCredits+=credits[i];
    }
    for(int i=0;i<numberOfSubjects;i++){
        float gradePoint= gradeToGradePoint(grade[i]);
        sgpa+= (gradePoint*credits[i]);
    }
    cout<<"Your SGPA is: "<<(sgpa/totalCredits)<<endl;
    return 0;
}


