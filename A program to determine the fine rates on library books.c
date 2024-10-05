//Author: Kelvin Kariuki Waithera 
//Course: Computer systems engineering 
//Adm:PA107/G/24231/24
//program to determine the fine rate of library books
#include <stdio.h>
#include <stdlib.h>
int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;
    printf("Enter book ID, due date, and return date: ");
    scanf("%d,%d,%d", &bookID, &dueDate, &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 7) {
        fineRate = 10;
    } else if (daysOverdue <= 14) {
        fineRate = 20;
    } else {
        fineRate = 30;
    }

    fineAmount = daysOverdue * fineRate;

    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: %.2f Ksh per day\n", fineRate);
    printf("Fine Amount: %.2f Ksh\n", fineAmount);

    return 0;
}