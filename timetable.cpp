#include<iostream>
#include<string>
using namespace std;

int main()
{
    string days[5] = {"Mon","Tue","Wed","Thu","Fri"};
    string times[5] = {"10-11","11-12","12-1","1-2","2-3"};

    string timetable[5][5];
    string facultyTable[5][5];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            timetable[i][j] = "-";
            facultyTable[i][j] = "-";
        }
    }

    string courses[4];
    string faculty[4];

    cout<<"\nEnter details for 4 courses\n";

    for(int i=0;i<4;i++)
    {
        cout<<"\nEnter Course Name: ";
        cin>>courses[i];

        cout<<"Enter Faculty Name: ";
        cin>>faculty[i];
    }

    int row = 0;
    int col = 0;

    for(int i=0;i<4;i++)
    {
        for(int h=0;h<5;h++)
        {
            if(row == 2)
            {
                row++;
            }

            timetable[row][col] = courses[i];
            facultyTable[row][col] = faculty[i];

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

        cout<<"\t";

        for(int j=0;j<5;j++)
        {
            if(i == 2)
                cout<<" \t";
            else
                cout<<facultyTable[i][j]<<"\t";
        }

        cout<<endl;
        cout<<endl;
    }

    return 0;
}
