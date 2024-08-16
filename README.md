# University-Billing-and-Inscribing-System

This is a C++ project that like any other requires you to have a compiler of your choice, in my case I used a Windows Subsystem for Linux (WSL) where I installed and used Ubuntu 22.04.4 LTS for its compiling and development. Within this project I developed a program based on an University Inscribing System adding functions like Scholarship, Price per Credit, Loan Percentage, etc. This is a program that I developed in under an hour for a challenge and is completely functional so that no matter what data you input it will automate the process

# Regular Student
This is the father class for the following 2 classes, within this one it stores the student's data like Tuition Number, Name, Credits Inscribed and Total Price

# Scholarship Student
This class inherits the aspects of the father class and adds new methods to the class like Scholarship Percentage and moddifying the Total price depending on the percentage

# Loan and Scholarship Student
This class inherits everything from the past two and adds a final method which is the Loan Percentage to obtain an even lower Total Price

Within the main.cpp it houses very basic coding used only to try the program, but this can be simply modified with cout and cin
