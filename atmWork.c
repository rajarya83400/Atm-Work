#include <stdio.h>
int main()
{

    int remaining_balance, home_page, updatebalance , changepin;
    char lang, input1;

    printf("Select Language\n");
    printf("1 = English\n2 = Hindi\n");

    scanf("%c", &lang);

    if (lang == '1')
    {
        int input2, atmpin1, atmpin2=1234 , commonpin, total_balance, rupees1 , addbalance ;
        int main_balance;
        total_balance = 10000;
        commonpin=atmpin2;        


        do
        {

            printf("select opertation: \n");
            printf("1 = check balance\n");
            printf("2 = deposite\n");
            printf("3 = withdrow\n");
            printf("4 = change pin\n");
            printf("5 = exit\n");
            scanf("%d", &input2);

            switch (input2)

            {



            case 1: // check balance start

                printf("enter PIN.");
                scanf("%d", &atmpin1);
                if (atmpin1 == commonpin)
                {
                    printf("total balance = %d\n", total_balance);
                }
                else
                {
                    printf("wrong pin.\n");
                }
                break;





            case 2: // deposite start........

            
                printf("enter PIN.");
                scanf("%d", &atmpin1);
                if (atmpin1 == commonpin)
                {
                    printf("total balance is %d\n\n" , total_balance);
                    printf("enter adding ammount:=  ");
                    scanf("%d" , &addbalance );
                    
                    total_balance = total_balance+addbalance;
                    printf("total amount is %d\n" , total_balance);
                    

                }
                else
                {
                    printf("wrong pin.\n");
                }
                break;






            case 3: // withdrow start

                printf("enter PIN.");
                scanf("%d", &atmpin1);
                if (atmpin1 == commonpin)
                {
                    printf("total balance = %d", total_balance);
                    printf("\n1 = 1000\n2 = 2000\n3 = 5000\n4 = 10000\n5 = custom amount\n");
                    printf("Enter Amount:= \n");
                    scanf("%d", &rupees1);

                    if (rupees1 == 1)
                    {
                        if (total_balance<1000)
                        {
                            printf("insufficent balance\n");
                        }else{
                        
                        printf("collect 1000 rupees.\n");
                        total_balance = total_balance - 1000;
                        printf("remaning balance is %d\n", total_balance);
                        }
                    }
                    else if (rupees1 == 2)
                    {
                         if (total_balance<2000)
                        {
                            printf("insufficent balance\n");
                        }else{
                        printf("collect 2000 rupees. \n");
                        total_balance = total_balance - 2000;
                        printf("remaining balance is %d\n", total_balance);
                        }
                    }
                    else if (rupees1 == 3)
                    {
                         if (total_balance<5000)
                        {
                            printf("insufficent balance\n");
                        }else{
                        printf("collect 5000 rupees. \n");
                        total_balance = total_balance - 5000;
                        printf("remaining balance is %d\n", total_balance);
                        }
                    }
                    else if (rupees1 == 4)
                    {
                         if (total_balance<10000)
                        {
                            printf("insufficent balance\n");
                        }else{
                        printf("collect 10000 rupees. \n");
                        total_balance = total_balance - 10000;
                        printf("remaining balance is %d\n", total_balance);
                        }
                    }
                    else if (rupees1 == 5)
                    {
                        int custum;
                        
                        printf("enter rupees: ");
                        scanf("%d", &custum);
                        if(custum<=total_balance){
                            if (total_balance<custum)
                        {
                            printf("insufficent balance\n");
                        }else{
                            printf("collet %d rupees\n", custum);
                        total_balance = total_balance - custum;
                        printf("remaining balance is %d\n", total_balance);
                        }
                        }
            
                    }
                    else
                    {
                        printf("wrong input.\n");
                    }
                }
                else
                {
                    printf("wrong pin.\n");
                }
                break;






            case 4: 
               commonpin=atmpin2;
  
                    printf("enter pin: ");
                     scanf("%d" , &atmpin1);
                     if(atmpin2==commonpin){
                       printf("pin is %d\n" , commonpin);
                         printf("enter new pin\n");
                         scanf("%d" , &commonpin);
                         printf("new pin is %d\n" , commonpin);
                    }else{
                           printf("wrong pin\n");
                         }
                        break;







            default: // exit here
                printf("exit ho gaya");
                break;
            }
        }while (input2!=5);
    }








//-----------------------------------------------------------------------------------------


    if (lang == '2')
    {
        int input2, atmpin1, atmpin2=1234 , commonpin, total_balance, rupees1 , addbalance ;
        int main_balance;
        total_balance = 10000;
        commonpin=atmpin2;        


        do
        {
            printf("-------------------------------------------");
            printf("-------------------------------------------\n");
            printf("kya karna chahte hai....? : \n");
            printf("1 = Rupya check kare\n");
            printf("2 = Rupya daale\n");
            printf("3 = Rupya nikale\n");
            printf("4 = Pin Badle\n");
            printf("5 = Bahar nikle\n");
            printf("yaha daale: ");
            scanf("%d", &input2);

            switch (input2)

            {



            case 1: // check balance start

                printf("Pin Code Dale.");
                scanf("%d", &atmpin1);
                if (atmpin1 == commonpin)
                {
                    printf("Kul Rashi = %d\n", total_balance);
                }
                else
                {
                    printf("Galat Pin Hai.\n");
                }
                break;





            case 2: // deposite start........

            
                printf("Pin Code Dale.");
                scanf("%d", &atmpin1);
                if (atmpin1 == commonpin)
                {
                    printf("kul Rashi  %d Hai\n\n" , total_balance);
                    printf("Kitna Dalna chahte Hai:=  ");
                    scanf("%d" , &addbalance );
                    
                    total_balance = total_balance+addbalance;
                    printf("Jama Karne ke baad kul rashi %d hai\n" , total_balance);
                    

                }
                else
                {
                    printf("Pin Galat hai.\n");
                }
                break;






            case 3: // withdrow start

                printf("Pin Code Daale.");
                scanf("%d", &atmpin1);
                if (atmpin1 == commonpin)
                {
                    printf("kul Rashi = %d", total_balance);
                    printf("\n1 = 1000\n2 = 2000\n3 = 5000\n4 = 10000\n5 = custom amount\n");
                    printf("Kitna nikalna hai := \n");
                    scanf("%d", &rupees1);

                    if (rupees1 == 1)
                    {
                        printf("Prapt Kare 1000 Rupaye.\n");
                     total_balance = total_balance - 1000;
                        printf("Nikalne Ke Baad Kul DhanRashi %d\n", total_balance);
                    }
                    else if (rupees1 == 2)
                    {
                        printf("Prapt Kare 2000 Rupaye. \n");
                     total_balance = total_balance - 2000;
                        printf("Nikalne Ke Baad Kul DhanRashi %d\n", total_balance);
                    }
                    else if (rupees1 == 3)
                    {
                        printf("Prapt Kare 5000 Rupaye. \n");
                     total_balance = total_balance - 5000;
                        printf("Nikalne Ke Baad Kul DhanRashi %d\n", total_balance);
                    }
                    else if (rupees1 == 4)
                    {
                        printf("Prapt Kare 10000 Rupaye. \n");
                     total_balance = total_balance - 10000;
                        printf("Nikalne Ke Baad Kul Dhan1Rashi %d\n", total_balance);
                    }
                    else if (rupees1 == 5)
                    {
                        int custum;
                        printf("Rupaye Daale khud se: ");
                        scanf("%d", &custum);
                        if(custum<=main_balance){
                            printf("Atm Se Prapt kare %d Rupaye\n", custum);
                     total_balance = total_balance - custum;
                        printf("Nikalne Ke Baad Kul DhanRashi %d\n", total_balance);
                        }else{
                            printf("aapke khata me %d rupya nahi hai .\n" , custum);
                        }
                    }
                    else
                    {
                        printf("Kripya Sahi Number Dale.\n");
                    }
                }
                else
                {
                    printf("Pin Galat hai .\n");
                }
                break;






            case 4: 
               commonpin=atmpin2;
  
                    printf("Atm Pin Dale: ");
                     scanf("%d" , &atmpin1);
                     if(atmpin2==commonpin){
                       printf("purana password %d hai\n" , commonpin);
                         printf("naya password daale\n");
                         scanf("%d" , &commonpin);
                         printf("pin safaltapurvak change ho gaya.");
                         printf("aapka naya password %d hai\n" , commonpin);
                    }else{
                           printf("Atm Pin Galat hai \n");
                         }
                        break;







            default: // exit here
                printf("Aap Bahar Nikal Gaye.");
                break;
            }
        }while (input2!=5);
    }


    


}
