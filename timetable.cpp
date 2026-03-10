#include<iostream>
#include<string>
using namespace std;

struct Course
{
    string name;
    string faculty;
    int hours;
};

int main()
{
    string days[5] = {"Mon","Tue","Wed","Thu","Fri"};
    string times[5] = {"10-11","11-12","12-1","1-2","2-3"};

    string timetable[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            timetable[i][j] = "-";
        }
    }

    Course courses[4];

    cout<<"\nEnter details for 4 courses\n";

    for(int i=0;i<4;i++)
    {
        cout<<"\nEnter Course Name: ";
        cin>>courses[i].name;

        cout<<"Enter Faculty Name: ";
        cin>>courses[i].faculty;

        courses[i].hours = 5;
    }

    int row = 0;
    int col = 0;

    for(int i=0;i<4;i++)
    {
        for(int h=0; h<courses[i].hours; h++)
        {
            if(row == 2)
            {
                row++;
            }

            timetable[row][col] = courses[i].name;

            col++;

            if(col == 5)
            {
                col = 0;
                row++;
            }

            if(row == 5)
            {
                row = 0;
            }
        }
    }

    cout<<"\nGenerated Timetable\n\n";

    cout<<"\tMon\tTue\tWed\tThu\tFri\n";

    for(int i=0;i<5;i++)
    {
        cout<<times[i]<<"\t";

        for(int j=0;j<5;j++)
        {
            if(i == 2)
                cout<<"BREAK\t";
            else
                cout<<timetable[i][j]<<"\t";
        }

        cout<<endl;
    }

    cout<<"\n";
    return 0;
}