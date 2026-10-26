#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 5;
const int COURSE_COUNT = 3;

// Function prototypes
void calculateStudent(int i, double Score[][3], double &total, double &average);
void displayAll(int n, string NameArr[], double Score[][3]);
int findTopStudent(int n, double Score[][3]);

int main()
{

    cout << fixed << setprecision(2);

    // Test data stored directly in main()
    int n = 3;
    string NameArr[MAX] = {"Alice", "Bob", "Carl"};
    double Score[MAX][3] = {
        {90, 85, 95},
        {70, 80, 75},
        {88, 92, 84}};

    cout << fixed << setprecision(2);

    // TODO:
    // 1. print the title
    // 2. call displayAll(...)
    displayAll(n, NameArr, Score);

    // 3. find the top student index
    int topIndex = findTopStudent(n, Score);

    // 4. call calculateStudent(...) for the top student
    double total;
    double average;

    calculateStudent(topIndex, Score, total, average);

    // 5. print the top student's name and total

    cout << "\nTop student: "
         << NameArr[topIndex]
         << " | Total = " << total
         << " | Average = " << average
         << endl;

    return 0;
}

// Calculate total and average for one student
void calculateStudent(int i, double Score[][3], double &total, double &average)
{
    // TODO:
    // 1. calculate the total of the 3 courses for student i
    total = Score[i][0] + Score[i][1] + Score[i][2];
    // 2. calculate the average
    average = total / 3.0;
}

// Display all students' information
void displayAll(int n, string NameArr[], double Score[][3])
{
    double total;
    double average;

    cout << "\n=== Student Grade Report ===\n"
         << endl;

    // TODO:
    // 1. loop through each student
    for (int i = 0; i < n; i++)
    {

        // 2. call calculateStudent(...) for each student
        calculateStudent(i, Score, total, average);

        // 3. print name, 3 grades, total, and average
        cout << NameArr[i]
             << " | Math = " << Score[i][0]
             << " | C Programming = " << Score[i][1]
             << " | Operating Systems = " << Score[i][2]
             << " | Total = " << total
             << " | Average = " << average
             << endl;
    }

    // Hint: do not repeat the total/average logic here
}

// Find the index of the student with the highest total score
int findTopStudent(int n, double Score[][3])
{
    // TODO:
    // Hint: reuse calculateStudent(...) instead of recalculating totals here

    double total;
    double average;

    calculateStudent(0, Score, total, average);

    double maxTotal = total;
    int topIndex = 0;

    for (int i = 1; i < n; i++)
    {
        calculateStudent(i, Score, total, average);

        if (total > maxTotal)
        {
            maxTotal = total;
            topIndex = i;
        }
    }

    return topIndex;
}