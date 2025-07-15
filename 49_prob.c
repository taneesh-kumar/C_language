#include<stdio.h>

typedef struct Bank{
    int accNum;
    char accHolderName[50];
    char accType[7];
    double balance;
    char phoneNum[10];
    char email[50];
}account;

void bank_account_input(account *info){
    printf("Enter account number : ");
    scanf("%d", &info->accNum);

    getchar(); // Clear newline left by scanf

    printf("Enter account holder name : ");
    fgets(info->accHolderName, sizeof(info->accHolderName), stdin);
    
    printf("Enter account Type (savings/current) name : ");
    fgets(info->accType, sizeof(info->accType), stdin);

    printf("Enter account Balance : ");
    scanf("%lf", &info->balance);

    getchar(); // Clear newline left by scanf

    printf("Enter your phone number : ");
    fgets(info->phoneNum, sizeof(info->phoneNum), stdin);
    
    printf("Enter your Email : ");
    fgets(info->email, sizeof(info->email), stdin);
}

void disp_details(const account *accInfo){
    printf("\n\n   Bank Account Details   \n\n");
    printf("Account Number : %d\n", accInfo->accNum);
    printf("Holder Name : %s", accInfo->accHolderName);
    printf("Account Type : %s", accInfo->accType);
    printf("Balance : %lf\n", accInfo->balance);
    printf("Phone Number : %s", accInfo->phoneNum);
    printf("Email : %s", accInfo->email);
}


int main(){
    account accInfo;

    bank_account_input(&accInfo);

    disp_details(&accInfo);

    return 0;
}