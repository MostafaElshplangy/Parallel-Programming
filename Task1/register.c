#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct User_Data
{
    char userName[50];
    char password[20];
    char name[50];
    int age;
    char phone[20];
}User;

void Signing_Up(User *userInfo)
{
    printf("\n\n\n(((((((((( Registeration Form ))))))))))\n");
    printf("\nEnter Your Name: ");
    scanf("%s", userInfo->name);
    printf("=========================================================\n");
    printf("\nEnter Your UserName: ");
    scanf("%s", userInfo->userName);
    printf("=========================================================\n");
    printf("\nEnter Your Password: ");
    scanf("%s", userInfo->password);
    printf("=========================================================\n");
    printf("\nEnter Your Age: ");
    scanf("%d", &userInfo->age);
    printf("=========================================================\n");
    printf("\nEnter Your Phone: ");
    scanf("%s", userInfo->phone);
    printf("=========================================================\n");
    printf("\n(((((((((( User Named: %s with UserName: %s is Registered ))))))))))", userInfo->name, userInfo->userName);
    printf("\n=========================================================\n\n\n");
}

void User_Info(User *currentUser)
{
    printf("\n(((((((((((((((( USER DATA ))))))))))))))))\n");
    printf("\n=========================================================\n");
    printf("\nYour Name is : %s", currentUser->name);
    printf("\n=========================================================\n");
    printf("\nYour Age is : %d", currentUser->age);
    printf("\n=========================================================\n");
    printf("\nYour Phone is : %s", currentUser->phone);
    printf("\n=========================================================\n\n\n");
}

void LogIn(struct User_Data *user)
{
    char user_Name[50];
    char password[20];
    char current_UserName[50];
    char current_Password[20];
    strcpy(current_UserName, user_Name);
    strcpy(current_Password, password);

    printf("\n\n\n (((((((((((( Login Form ))))))))))))\n");
    printf("\nEnter Your UserName: ");
    scanf("%s", &user_Name);
    printf("==========================================================\n");
    printf("\nEnter Your Password: ");
    scanf("%s", &password);
    printf("==========================================================\n");
    
    if (strcmp(user_Name, current_UserName) == 1 && strcmp(password, current_Password) == 1)
    {
        printf("\n((((((( Successfully Logged in :-) )))))))\n");
        printf("\n==========================================================\n");
        User_Info(user);
        printf("\n==========================================================\n");
    }
    else
    {
        printf("\n\n\n((((((( Failed to Login please try again )))))))\n\n\n");
    }
}

int main(int argc, char const *argv[])
{
    User userMostafa;
    Signing_Up(&userMostafa);
    LogIn(&userMostafa);
    // User_Info(&userMostafa);
    return 0;
}