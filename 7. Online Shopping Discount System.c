#include <stdio.h>
#include <conio.h>

int main () {
    float purchase_amount, final_amount;
    char is_member;

    printf("Enter the purchase amount :");
    scanf("%f",&purchase_amount);

    if (purchase_amount > 2000) {
        printf("Are you member? (Y/N): ");
        scanf("%c", &is_member);} {

        if (is_member == 'y' || is_member == 'Y') {
            final_amount = purchase_amount * 0.80;
            printf("Your are member. You get 20%% discount.\n");
        } else {
            final_amount = purchase_amount * 0.90;
            printf("Your are not member. You get 10%% discount.\n");
        }
    } else {
        final_amount = purchase_amount;
        printf("No discount applied a the amount is less than or equal to 2000.\n");
    }

    printf("The final amount after discount is: %.2f\n", final_amount);

    printf("Press any key to exit...\n");

    getch();

    return 0;
}