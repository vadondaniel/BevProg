#include "std_lib_facilities.h"

struct Point{int x; int y; };

int main(){
    vector<Point> original_points;
    cout << "Please enter 7 (x y) pair" << endl;
    for (size_t i = 0; i < 7; i++)
    {
        Point read;
        cin >> read.x >> read.y;
        original_points.push_back(read);
    }
    ofstream ofstream;
    ofstream.open("mydata.txt");
    for (size_t i = 0; i < 7; i++)
    {
        ofstream << original_points[i].x << " " << original_points[i].y << endl;
    }
    ofstream.close();
    ifstream ifstream;
    ifstream.open("mydata.txt");
    vector<Point> processed_points;
    for (size_t i = 0; i < 7; i++)
    {
        Point read;
        ifstream >> read.x >> read.y;
        processed_points.push_back(read);
    }
    for (size_t i = 0; i < 7; i++)
    {
        cout << "Original - x: " << original_points[i].x << " y: " << original_points[i].y << endl;
    }
        for (size_t i = 0; i < 7; i++)
    {
        cout << "Processed - x: " << processed_points[i].x << " y: " << processed_points[i].y << endl;
    }
    ifstream.close();
    bool wrong=false;
    if (processed_points.size() != original_points.size())
    {
        wrong = true;
    }
    for (size_t i = 0; i < 7; i++)
    {
        if (original_points[i].x != processed_points[i].x)
        {
            wrong = true;
        }
        if (original_points[i].y != processed_points[i].y)
        {
            wrong = true;
        }
    }
    if (wrong)
    {
        cout << "Something's wrong!";
    }
    
    return 0;
}