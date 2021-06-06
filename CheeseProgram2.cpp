//Create a program that will:
// 1.) open a file of cheese prices for six countries
// 2.) ask for user input for # of kg of cheese producted
// 3.) calculate total number of containers required to hold the cheese (assuming each contained can hold 2.76 kg of cheese)
// 4.) read in data from the text file (country, price per kg)
// 5.) calculate the total cost
// 6.) output the result to the console
// 7.) output the result into a new file
// this program will utilize <iomanip> to use format manipulators, <fstream> to work with files, <iostream> to work w/input and output
// <string> to work with strings
// cheese prices obtained from: https://www.numbeo.com/cost-of-living/country_price_rankings?itemId=12  

using namespace std;



#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
 

    //declare some variables
    int iRank;
    string strCountry;
    float contCost;
    float cheeseProd;
    float cheeseCont = 2.76;
    
    float profitChz = 1.45;
    int numNeed;
    float totCost;
    float totProfit;

    //file variables
    ifstream inFile;
    ofstream outFile;


    //make the title 
    cout << left << setw(70) << setfill('*') << "*" << endl;
    cout << "***************** Welcome to my Cheesy Program ***********************" << endl;
    cout << left << setw(70) << setfill('*') << "*" << endl;
    cout << endl;

    //open the file and verify it opens. program will close if file did not open
    inFile.open("cheeseprice.txt");
    if (inFile.fail())
    {
        return 0;

    }
    //open the file and verify it opens. program will close if file did not open
    outFile.open("cheeseprice_formatted.txt");
    if (outFile.fail())
    {
        return 0;
    }

    cout << "Please enter the total number of kilograms of cheese produced: ";
    cin >> cheeseProd;
    numNeed = ceil(cheeseProd / cheeseCont);
    cout << "The number of container(s) needed to hold the cheese is: " << right << setw(9) << setfill(' ') << numNeed << endl;
    //read in data
    //process first line of data
    inFile >> iRank >> strCountry >> contCost;
    totCost = numNeed * contCost;
    cout << "In " << strCountry << " it would cost $" << right << setw(34) << "$" << totCost << endl;
    outFile << "In " << strCountry << " it would cost $" << right << setw(34) << "$" << totCost << endl;
   
    //process second line of data
    inFile >> iRank >> strCountry >> contCost;
    totCost = numNeed * contCost;
    cout << "In " << strCountry << " it would cost: " << right << setw(39) << "$" << totCost << endl;
    outFile << "In " << strCountry << " it would cost: " << right << setw(39) << "$" << totCost << endl;

    //process third line of data
    inFile >> iRank >> strCountry >> contCost;
    totCost = numNeed * contCost;
    cout << "In " << strCountry << " it would cost: " << right << setw(36) << "$" << totCost << endl;
    outFile << "In " << strCountry << " it would cost: " << right << setw(36) << "$" << totCost << endl;

    //process fourth line of data
    inFile >> iRank >> strCountry >> contCost;
    totCost = numNeed * contCost;
    cout << "In " << strCountry << " it would cost: " << right << setw(37) << "$" << totCost << endl;
    outFile << "In " << strCountry << " it would cost: " << right << setw(37) << "$" << totCost << endl;

    //process fifth line of data
    inFile >> iRank >> strCountry >> contCost;
    totCost = numNeed * contCost;
    cout << "In " << strCountry << " it would cost: " << right << setw(40) << "$" << totCost << endl;
    outFile << "In " << strCountry << " it would cost: " << right << setw(40) << "$" << totCost << endl;

    //process sixth line of data
    inFile >> iRank >> strCountry >> contCost;
    totCost = numNeed * contCost;
    cout << "In " << strCountry << " it would cost: " << right << setw(35) << "$" << totCost << endl;
    outFile << "In " << strCountry << " it would cost: " << right << setw(35) << "$" << totCost << endl;

   

    //close the file
    inFile.close();
    outFile.close();
    return 0;

}