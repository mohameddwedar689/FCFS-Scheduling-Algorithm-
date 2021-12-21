#include<bits/stdc++.h>
using namespace std;
struct mainVar
{
    int pid , arrival , burst , turnaround;
};
void pline(int n)
{
    int i ;
    for(i = 0; i < n ; i++)
    {
        cout << "-";
    }
    cout << endl;
}
int main()
{
    int i , j , num;
    double avg = 0.0 , sum = 0.0 , sumW = 0.0 , avgW = 0.0;
    struct mainVar p[10] , temp;
    cout << "Enter the total number of process: " << endl;   
    cin >> num ;
    for(i = 0 ; i < num ; i++)
    {
        cout << "Enter Arrival Time and Burst Time for process " << i + 1 << endl;
        cin >> p[i].arrival >> p[i].burst;
        p[i].pid = i + 1;
        sumW += p[i].arrival;
    }
    for(i = 0 ; i < num - 1 ; i ++)
    {
        for(j = 0 ; j < num - i - 1 ; j++)
        {
            if(p[j].arrival > p[j + 1].arrival)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < num ; i++)
    {
        sum += p[i].burst;
        p[i].turnaround = sum;
    }

    sum = 0;
    pline(44);
    cout << "PID\tArrival\tBurst\tTurnaround" << endl;
    pline(44);
    for(i = 0; i < num ; i++)
    {
        printf("%d\t%d\t%d\t%d\n" , p[i].pid , p[i].arrival , p[i].burst , p[i].turnaround); 
        sum += p[i].turnaround;
    }
    pline(44);
    avg = sum / (double)num;
    avgW = sumW / (double)num;
    cout << "Total Waiting Time: " << sumW << endl;
    cout << "Average Waiting Time: " << avgW << endl;
    cout << "Total Turnaround Time: " << sum << endl;
    cout << "Average Turnaround Time: " << avg << endl;

    return 0;
}