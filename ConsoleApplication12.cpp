#include <iostream>

#include <iomanip>

#include <cctype>

//using standard namespace

using namespace std;

//Definig the surfboard costs

#define Ssurfboardcost 175.00;

#define Msurfboardcost 190.00;

#define Lsurfboardcost 200.00;

#define XXXSsurfboardcost 210.00;

//Declaring some functions 

void ShowUsage();

void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXS);

void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS);

void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS);


//Defining the function ShowUsage().

void ShowUsage()

{

    //Displaing the options for selection.

    cout << "\nTo show program usage 'S'" << endl;

    cout << "To purchase a surfboard press 'P'";

    cout << endl;

    cout << "To display current purchase press 'C'";

    cout << endl;

    cout << "To display total amount due press 'T'";

    cout << endl;

    cout << "To quit the program press 'Q'" << endl;

}
//Defining the function MakePurchase().

void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXS)

{

    //Declaring variables and initial value.

    int quantity = 0;

    char size = '\0';

    //ask the user to enter quantity and size

    cout << "Please enter the quantity and type ";

    cout << "(S=small, M=medium, L=large, X=XXXS) of ";

    cout << "surfboard you would like to purchase:";

    cin >> quantity >> size;

    //If the surfboard's size is small, then it adds the quantity to total small surfboards. 


    if (size == 's' || size == 'S')

    {

        iTotalSmall = iTotalSmall + quantity;

    }

    //If the surfboard's size is medium, then it adds the quantity to total medium surfboards. 

    else if (size == 'm' || size == 'M')

    {

        iTotalMedium = iTotalMedium + quantity;

    }

    //If the surfboard's size is large, then it adds the quantity to total large surfboards. 

    else if (size == 'l' || size == 'L')

    {

        iTotalLarge = iTotalLarge + quantity;

    }

    else if (size == 'x' || size == 'X')

    {

        iTotalXXXS = iTotalXXXS + quantity;

    }
}
//Defining the DisplayPurchase()function.

void DisplayPurchase(const int iTotalSmall, const int

    iTotalMedium, const int iTotalLarge, const int iTotalXXXS)

{

    //If the total quantity of small surfboards is more than 0, then show the quantity.

    if (iTotalSmall > 0)

    {

        cout << "The total number of small ";

        cout << "surfboards is " << iTotalSmall;

        cout << endl;

    }

    //If the total quantity of medium surfboards is more than 0, then show the quantity.

    if (iTotalMedium > 0)

    {

        cout << "The total number of medium ";

        cout << "surfboards is " << iTotalMedium;

        cout << endl;

    }

    //If the total quantity of large surfboards is more than 0, then show the quantity.

    if (iTotalLarge > 0)

    {

        cout << "The total number of large ";

        cout << "surfboards is " << iTotalLarge;

        cout << endl;

    }

    if (iTotalXXXS > 0)

    {

        cout << "The total number of XXXS ";

        cout << "surfboards is " << iTotalXXXS;

        cout << endl;

    }
}

//Defining the DisplayTotal()function

void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS)

{
    //decalring the variables and initial value. 
    double small_s_amt, medium_s_amt, large_s_amt, XXXS_s_amt, total_amt_due;

    small_s_amt = medium_s_amt = large_s_amt = XXXS_s_amt = total_amt_due = 0;

    //Set the precision for the double values to two digit pass the decimal point.

    cout << fixed << setprecision(2);

    //If the total quantity of small surfboards is more than 0, then display its quantity and total.

    if (iTotalSmall > 0)

    {

        //Calculate the total of the small surfboards


        small_s_amt = iTotalSmall * Ssurfboardcost;

        cout << "The total number of small surfboards ";

        cout << "is " << iTotalSmall;

        cout << " at a total of $";

        cout << small_s_amt << endl;

        //Adding the total of small surfboards with the total amount.

        total_amt_due = total_amt_due + small_s_amt;

    }

    //If the total quantity of medium surfboards is more than 0, then display its quantity and total.


    if (iTotalMedium > 0)

    {

        //Calculate the total of the medium surfboards

        medium_s_amt = iTotalMedium * Msurfboardcost;

        cout << "The total number of medium ";

        cout << "surfboards is " << iTotalMedium;

        cout << " at a total of $";

        cout << medium_s_amt << endl;

        //Adding the total of medium surfboards with the total amount.

        total_amt_due = total_amt_due + medium_s_amt;

    }

    //If the total quantity of large surfboards is more than 0, then display its quantity and total.


    if (iTotalLarge > 0)

    {

        //Calculate the total of the large surfboards
        large_s_amt = iTotalLarge * Lsurfboardcost;

        cout << "The total number of large ";

        cout << "surfboards is " << iTotalLarge;

        cout << " at a total of $";

        cout << large_s_amt << endl;

        //Adding the total of large surfboards to the total amount.

        total_amt_due = total_amt_due + large_s_amt;

    }

    if (iTotalXXXS > 0)

    {

        //Calculate the total of the large surfboards
        XXXS_s_amt = iTotalXXXS * XXXSsurfboardcost;

        cout << "The total number of XXXS ";

        cout << "surfboards is " << iTotalXXXS;

        cout << " at a total of $";

        cout << XXXS_s_amt << endl;

        //Adding the total of large surfboards to the total amount.

        total_amt_due = total_amt_due + XXXS_s_amt;

    }

    //Showing the total amount due.

    cout << "Amount due: $" << total_amt_due << endl;

}
//starting the main function 
int main()

{

    //Declaring variables and initial value.

    char selection, size;

    int count, smalltotal, mediumtotal, largetotal, XXXStotal;

    smalltotal = 0, mediumtotal = 0, largetotal = 0, XXXStotal = 0;



    //Displaying the heading.

    cout << "************************************************************"
        "\n***** Welcome to my Johnny Utah's PointBreak Surf Shop *****"
        "\n************************************************************";


    // Recalling the function ShowUsage() to display the options for selection.

    ShowUsage();


    //Asking the user to select an option

    cout << "\nPlease enter selection: ";
    //taking input of selection
    cin >> selection;

    // starting a while function untill the selection=q or Q

    while (selection != 'q' && selection != 'Q')

    {

        //If the choice is s, then ShowUsage() function will show up.

        if (selection == 's' || selection == 'S')

        {

            ShowUsage();

        }

        //If the choice is p, then MakePurchase() function will work through following order.

        else if (selection == 'p' || selection == 'P')

        {

            MakePurchase(smalltotal, mediumtotal, largetotal, XXXStotal);

            cout << endl;

        }

        //If the choice is c, then show DisplayPurchase() function by following order.

        else if (selection == 'c' || selection == 'C')

        {

            //If the quantity of all the three surfboards is 0, then display "No purchase made yet." message.

            if (smalltotal == 0 &&

                mediumtotal == 0 &&

                largetotal == 0 && XXXStotal == 0)

            {

                cout << "No purchase made yet." << endl;

            }

            else
                //If the quantity of any of the three surfboards is not 0, then display the quantities. 
            {

                DisplayPurchase(smalltotal,

                    mediumtotal,

                    largetotal, XXXStotal);

            }

        }

        //If the choice is t, then DisplayTotal() function will show up by following order.

        else if (selection == 't' || selection == 'T')

        {

            //If the quantity of all the three surfboards is 0, then display "No purchase made yet." message.

            if (smalltotal == 0 &&

                mediumtotal == 0 &&

                largetotal == 0 && XXXStotal == 0)

            {

                cout << "No purchase made yet." << endl;

            }

            else
                // If there is any purchase,then display the total purchace.
            {

                DisplayTotal(smalltotal,

                    mediumtotal,

                    largetotal, XXXStotal);

            }

        }

        //If the user puts an invalid entry, it will display "invalid choice!" message.

        else

        {

            cout << "Invalid choice!" << endl;

        }

        //Again it will ask the user to enter the selection.

        cout << "\nPlease enter selection: ";

        cin >> selection;

    }
    //If the user quits the program it will display "thank you"
    cout << "Thank you" << endl;

}
