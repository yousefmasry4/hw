# hw
aastmt
Computer Engineering Department
Sheet # 4
Story Problems 

Write an appropriate C program/functions that solves the following problems:

Q1)   In shopping for a new house, you must consider several factors. In this problem the initial cost of the house, the estimated annual fuel costs, and the annual tax rate are available. Write a program that will determine the total cost of a house after a five-year period and run the program for each of the following sets of data.

  Initial House Cost    Annual Fuel Cost    Tax Rate  
         67,000                        2,300                0.025 
         62,000                        2,500                0.025 
         75,000                        1,850                0.020  


Q2)   Write a program to take #a depth (in kilometers) inside the earth as input data; compute and display the temperature at this depth in degrees Celsius and degrees Fahrenheit. The relevant formulas are 
                   Celsius = 10 (depth) + 20 (Celsius temperature at depth in km)  
              Fahrenheit = 1.8 (Celsius) + 32   
Include two functions in your program. Function Celsius_at_depth should compute and return the Celsius temperature at a depth measured in kilometers. Function  Fahrenheit  should convert a Celsius temperature to Fahrenheit.   


Q3)   Write a program that reports the contents of a compressed-gas cylinder based on the first letter of the cylinder’s color. The program input is a character representing the observed color of the cylinder: ‘Y’ or ‘y’ for yellow, ‘O’ or ‘o’ for orange, and so on. Cylinder colors and associated contents are as follows:

orange       ammonia
 brown       carbon monoxide
 	yellow        hydrogen
 green        oxygen


 Q4)  Write a program that interacts with the user like this: 
  (1) Carbon monoxide
 (2) Hydrocarbons
 (3) Nitrogen oxides
 (4) Nonmethane hydrocarbons 
 
 Enter pollutant number>> 2 
 Enter number of grams emitted per mile>> 0.35
 Enter odometer reading>> 40112
 Emissions exceed permitted level of 0.31 grams/mile.  





Use the table of emissions limits below to determine the appropriate message.  
   
	 First 50,000 Miles  	Second 50,000 Miles
carbon monoxide	 3.4 grams/mile  	 4.2 grams/mile
 hydrocarbons  	0.31 grams/mile  	 0.39 grams/mile
nitrogen oxides  	0.4 grams/mile  	0.5 grams/mile
nonmethane hydrocarbons  	0.25 grams/mile  	0.31 grams/mile

Q5)   Write a program to process a collection of daily high temperatures. Your program should count and print the number of hot days (high temperature 85 or higher), the number of pleasant days (high temperature 60–84), and the number of cold days (high temperatures less than 60). It should also display the category of each temperature. Test your program on the following data:

  55  62  68  74  59  45  41  58  60  67  
  65  78  82  88  91  92  90  93  87  80  
  78  79  72  68  61  59   55  45 90  82
    
Modify your program to display the average temperature (a real number) of the month.     


Q6)  The value for π can be determined by the series equation
    



Write a program to approximate the value of π using the formula given including terms up through 1/99. 

 Q7)   Write a program to grade a 10 question multiple-choice exam and provide feedback about the student’s score. The model answer is initialized in the program . Student’s score should be given as a percentage.

Q8) A barcode scanner for Universal Product Codes (UPCs) verifies the 12-digit code scanned by comparing the code’s last digit (called a  check digit ) to its own computation of the check digit from the first 11 digits as follows:

1.	Calculate the sum of the digits in the odd-numbered positions (the first, third, …, eleventh digits) and multiply this sum by 3. 

2.	Calculate the sum of the digits in the even-numbered positions (the second, fourth, …, tenth digits) and add this to the previous result. 

3.	If the last digit of the result from step 2 is 0, then 0 is the check digit. Otherwise, subtract the  
           last digit from 10 to calculate the check digit. 
  
  4.    If the check digit matches the final digit of the 12-digit UPC, the UPC is assumed correct.  
 
 Write a program that prompts the user to enter the 12 digits of a barcode separated by spaces. The program should store the digits in an integer array, calculate the check digit, and compare it to the final barcode digit. If the digits match, output the barcode with the message “validated.” If not, output the barcode with the message “error in barcode.” Also, output with labels the results from steps 1 and 2 of the check-digit calculations. Note that the “first” digit of the barcode will be stored in element 0 of the array. Try your program on the following barcodes, three of which are valid. For the first barcode, the result from step 2 is 79 (0 + 9 + 0 + 8 + 4 + 0) *  3 + (7 + 4 + 0 + 0 + 5). 
 

 0 7 9 4 0 0 8 0 4 5 0 1
 0 2 4 0 0 0 1 6 2 8 6 0
 0 1 1 1 1 0 8 5 6 8 0 7
 0 5 1 0 0 0 1 3 8 1 0 1   
