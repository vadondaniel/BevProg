#include "std_lib_facilities.h"
int main()
{
    string terminate, unit = "";
    double current = 0, sum = 0, no = 0;
    double max = -9999.99999999999999999, min = 9999.99999999999999999;
    vector<double> vector;
    while (terminate != "|")
    {
        cin >> terminate;
        if (terminate == "|")
        {
            if (max == -9999.99999999999999999)
            {
                max = 0;
            }
            if (min == 9999.99999999999999999)
            {
                min = 0;
            }
            
            cout << "smallest value: " << min << " m\n";
            cout << "biggest value: " << max << " m\n";
            cout << "number of values: " << no << "\n";
            cout << "sum of values: " << sum << " m\n";
            sort(vector);
            for (double value:vector)
            {
                cout << value << " m\n";
            }
        }
        
        if (terminate != "|")
        {
        current = stod(terminate);
        cin >> unit;
        cout << current << ' ' << unit << endl;
        }

        if (unit == "cm" && terminate != "|")
        {
            if (current/100>max)
            {
            cout << "the largest so far\n";
            max = current/100;
            }
            if (current/100<min)
            {
            cout << "the smallest so far\n";
            min = current/100;
            }
            sum += current/100;
            no++;
            if (min == 9999.99999999999999999)
            {
                min = current/100;
            }
            vector.push_back(current/100);
        }

        if (unit == "m" && terminate != "|")
        {
            if (current>max)
            {
            cout << "the largest so far\n";
            max = current;
            }
            if (current<min)
            {
            cout << "the smallest so far\n";
            min = current;
            }
            sum += current;
            no++;
            if (min == 9999.99999999999999999)
            {
                min = current;
            }
            vector.push_back(current);
        }

        if (unit == "in" && terminate != "|")
        {
            if (current*0.0254>max)
            {
            cout << "the largest so far\n";
            max = current*0.0254;
            }
            if (current*0.0254<min)
            {
            cout << "the smallest so far\n";
            min = current*0.0254;
            }
            sum += current*0.0254;
            no++;
            if (min == 9999.99999999999999999)
            {
                min = current*0.0254;
            }
            vector.push_back(current*0.0254);
        }

        if (unit == "ft" && terminate != "|")
        {
            if (current*0.3048>max)
            {
            cout << "the largest so far\n";
            max = current*0.3048;
            }
            if (current*0.3048<min)
            {
            cout << "the smallest so far\n";
            min = current*0.3048;
            }
            sum += current*0.3048;
            no++;
            if (min == 9999.99999999999999999)
            {
                min = current*0.3048;
            }
            vector.push_back(current*0.3048);
        }

        if (unit != "m" && unit != "cm" && unit != "in" && unit != "ft" && terminate != "|")
        {
            cout << "Please enter a valid unit after the value (cm, m, in, ft)\n";
        }
    }
    return 0;
}