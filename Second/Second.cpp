#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 1
    double a, b, x;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a > b) {
        x = b - 5 * a;
    }
    else if (a == b) {
        x = (5 - b) / a;
    }
    else {
        x = (a - 5) / b;
    }
    cout << "X = " << x << endl;

    // 2
    double x1, y1, x2, y2;
    cout << "Enter x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        cout << "The line is parallel to the y-axis" << endl;
    }
    else if (y1 == y2) {
        cout << "The line is parallel to the x-axis" << endl;
    }
    else {
        cout << "The line is not parallel to x or y axis" << endl;
    }

    // 3
    int qty;
    double price, total, discount;
    cout << "Enter quantity and price per item: ";
    cin >> qty >> price;
    total = qty * price;
    if (total >= 300) {
        discount = total * 0.07;
    }
    else if (total >= 200) {
        discount = total * 0.05;
    }
    else if (total >= 100) {
        discount = total * 0.03;
    }
    else {
        discount = 0;
    }
    cout << "Discount: " << discount << endl;

    // 4
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == int(num)) {
        cout << "No decimal part" << endl;
    }
    else {
        cout << "Has decimal part" << endl;
    }

    // 5
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    switch (day) {
    case 1: cout << "Monday" << endl; break;
    case 2: cout << "Tuesday" << endl; break;
    case 3: cout << "Wednesday" << endl; break;
    case 4: cout << "Thursday" << endl; break;
    case 5: cout << "Friday" << endl; break;
    case 6: cout << "Saturday" << endl; break;
    case 7: cout << "Sunday" << endl; break;
    default: cout << "Invalid day number" << endl;
    }

    // 6
    double px, py;
    cout << "Enter x and y: ";
    cin >> px >> py;
    if (px == 0 && py == 0) {
        cout << "Point is at the origin" << endl;
    }
    else if (px == 0) {
        cout << "Point is on y-axis" << endl;
    }
    else if (py == 0) {
        cout << "Point is on x-axis" << endl;
    }
    else if (px > 0 && py > 0) {
        cout << "First quadrant" << endl;
    }
    else if (px < 0 && py > 0) {
        cout << "Second quadrant" << endl;
    }
    else if (px < 0 && py < 0) {
        cout << "Third quadrant" << endl;
    }
    else {
        cout << "Fourth quadrant" << endl;
    }

    // 7
    double uah, result;
    int currency;
    cout << "Enter amount in UAH: ";
    cin >> uah;
    cout << "Choose currency: 1-Euro, 2-USD, 3-RUB: ";
    cin >> currency;
    if (currency == 1) {
        result = uah / 42;
        cout << "In Euro: " << result << endl;
    }
    else if (currency == 2) {
        result = uah / 38;
        cout << "In USD: " << result << endl;
    }
    else if (currency == 3) {
        result = uah / 0.42;
        cout << "In RUB: " << result << endl;
    }
    else {
        cout << "Invalid currency" << endl;
    }

    // 8
    int d, m, y, h, min;
    cout << "Enter day month year: ";
    cin >> d >> m >> y;
    cout << "Enter hour and minute: ";
    cin >> h >> min;
    if (d >= 1 && d <= 31 && m >= 1 && m <= 12 && y > 0 && h >= 0 && h < 24 && min >= 0 && min < 60) {
        cout << "Date and time are valid" << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

    // 9
    int ticket;
    cout << "Enter 6-digit ticket number: ";
    cin >> ticket;
    int s1 = ticket / 100000 % 10 + ticket / 10000 % 10 + ticket / 1000 % 10;
    int s2 = ticket / 100 % 10 + ticket / 10 % 10 + ticket % 10;
    if (s1 == s2) {
        cout << "Lucky ticket" << endl;
    }
    else {
        cout << "Not a lucky ticket" << endl;
    }

    // 10
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 60) {
        cout << "Time to retire" << endl;
    }
    else {
        cout << "Not retirement age yet" << endl;
    }

    // 11
    int card;
    cout << "Enter card number (0-35): ";
    cin >> card;
    string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    string ranks[] = { "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    if (card >= 0 && card < 36) {
        cout << suits[card / 9] << " " << ranks[card % 9] << endl;
    }
    else {
        cout << "Invalid card number" << endl;
    }

    // 12
    int hour, minute;
    cout << "Enter hour and minute: ";
    cin >> hour >> minute;
    if (hour >= 5 && hour < 12) {
        cout << "Good morning" << endl;
    }
    else if (hour >= 12 && hour < 18) {
        cout << "Good afternoon" << endl;
    }
    else if (hour >= 18 && hour < 22) {
        cout << "Good evening" << endl;
    }
    else {
        cout << "Good night" << endl;
    }

    // 13
    int height, weight;
    cout << "Enter height and weight: ";
    cin >> height >> weight;
    int ideal = height - 110;
    if (weight > ideal) {
        cout << "Lose " << weight - ideal << " kg" << endl;
    }
    else if (weight < ideal) {
        cout << "Gain " << ideal - weight << " kg" << endl;
    }
    else {
        cout << "Weight is ideal" << endl;
    }

    // 14
    int dd, mm, yyyy;
    cout << "Enter day month year: ";
    cin >> dd >> mm >> yyyy;
    dd += 1;
    if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd > 30) {
        dd = 1;
        mm++;
    }
    else if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10) && dd > 31) {
        dd = 1;
        mm++;
    }
    else if (mm == 2) {
        bool leap = (yyyy % 4 == 0 && (yyyy % 100 != 0 || yyyy % 400 == 0));
        if ((leap && dd > 29) || (!leap && dd > 28)) {
            dd = 1;
            mm++;
        }
    }
    else if (mm == 12 && dd > 31) {
        dd = 1;
        mm = 1;
        yyyy++;
    }
    cout << "Next date: " << dd << "." << mm << "." << yyyy << endl;

    // 15
    int number;
    cout << "Enter a 5-digit number: ";
    cin >> number;
    bool allPrime = true;
    for (int i = 0; i < 5; i++) {
        int digit = number % 10;
        number /= 10;
        if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
            allPrime = false;
        }
    }
    if (allPrime) {
        cout << "All digits are prime numbers" << endl;
    }
    else {
        cout << "Not all digits are prime numbers" << endl;
    }

    // 16
    int year;
    cout << "Enter year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Leap year" << endl;
    }
    else {
        cout << "Not a leap year" << endl;
    }

    return 0;
}
