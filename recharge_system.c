#include <stdio.h>
void customer_registration(long int *mobile_number, int *wallet_balance)
{
    int count;
    long int temp ;
     do
        {
            count = 0;
            printf("Enter 10-digit mobile number: ");
            scanf("%ld", mobile_number);
            temp = *mobile_number;
            while(temp > 0)
            {
                count++;
                temp = temp/10;
            }
            if(count == 10)
            {
                printf("Enter Initial Wallet Balance: ");
                scanf("%d", wallet_balance);
                if(*wallet_balance < 0)
                printf("Invalid Amount! Enter only positive value\n");
                else if(*wallet_balance > 0)
                printf("Customer Registered Successfully!\n");
            }
            else if(count < 10)
            {
                printf("Invalid mobile number! Enter exactly 10-digits\n");
            }
        }while (count != 10);
    }
    void view_recharge_plans()
    {
        printf("\n=====Recharge Plans=====\n");
        printf("1) Rs. 199 - 28 days\n");
        printf("2) Rs. 299 - 28 days\n");
        printf("3) Rs. 399 - 56 days\n");
        printf("4) Rs. 599 - 84 days\n");
    }
    void recharge_mobile_number( int *wallet_balance, int *count, int *total_recharge)
    {
        int select;
        *total_recharge = 0;
        printf("\n=====Recharge Plans=====\n");
        printf("1) Rs. 199 - 28 days\n");
        printf("2) Rs. 299 - 28 days\n");
        printf("3) Rs. 399 - 56 days\n");
        printf("4) Rs. 599 - 84 days\n");
        printf("Select Recharge plans: ");
        scanf("%d", &select);
            printf("Recharge Successful!\n");
            switch(select)
            {
                case 1:
                if(*wallet_balance >= 199)
                {
                    (*count)++;
                printf("Recharge Amount: Rs. 199.00\n");
                printf("Validity: 28 days\n");
                printf("Available Balance: Rs.%d\n", *wallet_balance = *wallet_balance - 199);
                *total_recharge = *total_recharge+199;
                }
                else
                printf("Insufficient Balance\n");
                break;
                case 2:
                if(*wallet_balance >= 299)
                {
                    (*count)++;
                printf("Recharge Amount: Rs. 299.00\n");
                printf("Validity: 28 days\n");
                printf("Available Balance: Rs.%d\n", *wallet_balance = *wallet_balance - 299);
                *total_recharge = *total_recharge+299;
                }
                else
                printf("Insufficient Balance\n");
                break;
                case 3:
                if(*wallet_balance >= 399)
                {
                    (*count)++;
                printf("Recharge Amount: Rs. 399.00\n");
                printf("Validity: 56 days\n");
                printf("Cashback of Rs.50  added successfully\n");
                printf("Available Balance: Rs.%d\n", *wallet_balance = *wallet_balance - 399 + 50);
                *total_recharge = *total_recharge+399;
                }
                else
                printf("Insufficient Balance\n");
                break;
                case 4:
                if(*wallet_balance >= 599)
                {
                    (*count)++;
                printf("Recharge Amount: Rs. 599.00\n");
                printf("Validity: 84 days\n");
                printf("Cashback of Rs.50  added successfully\n");
                printf("Available Balance: Rs.%d\n", *wallet_balance = *wallet_balance - 599 +50);
                *total_recharge = *total_recharge+599;
                }
                else
                printf("Insufficient Balance\n");
                break;
                default:
                printf("Invalid option\n");
                break;
            }
        }
        int add_money_to_wallet(int wallet_balance)
        {
            int amount;
            printf("Enter amount to be added: ");
            scanf("%d", &amount);
            wallet_balance = wallet_balance + amount;
            return wallet_balance;
        }
        void customer_details(long int mobile_number, int wallet_balance, int count, int total_recharge)
        {
            printf("Mobile Number: %ld\n", mobile_number);
            printf("Wallet Balance: Rs.%d\n", wallet_balance); 
            printf("Total Recharge: Rs.%d\n", total_recharge);
            printf("Successful Recharges: %d\n", count);
        }
    int main() {
        int choice, count = 0, wallet_balance, total_recharge, flag = 0;
        long int mobile_number;
        do
        {
            printf("\n=====Mobile Recharge System=====\n");
            printf("1. Customer Registration\n");
            printf("2. View Recharge Plans\n");
            printf("3. Recharge Mobile Number\n");
            printf("4. Add Money to Wallet\n");
            printf("5. Display Customer Details\n");
            printf("6. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            switch(choice)
            {
                case 1:
                if(flag > 0)
                {
                    printf("Customer Already Registered!\n");
                    break;
                }
                customer_registration(&mobile_number, &wallet_balance);
                flag++;
                break;
                case 2:
                view_recharge_plans();
                break;
                case 3:
                recharge_mobile_number(&wallet_balance, &count, &total_recharge);
                break;
                case 4:
                wallet_balance = add_money_to_wallet(wallet_balance);
                printf("Money added successfully!\n");
                printf("Updated wallet balance: Rs.%d", wallet_balance);
                break;
                case 5:
                customer_details(mobile_number, wallet_balance, count, total_recharge);
                break;
                case 6:
                printf("Thankyou for visiting Mobile Recharge Sysytem\n");
                break;
                default:
                printf("Invalid choice\n");
                break;
            }
        }while(choice != 6);
    }