0x1C. C - Makefiles



The makefile is a text file that contains the recipe for building your program. It usually resides in the same directory as the sources, and it is usually called Makefile . Each one of these commands should be a separate rule in a makefile.

A Makefile consists of a set of rules. A rule generally looks like this: targets: prerequisites command command command. The targets are file names, separated by spaces. Typically, there is only one per rule. The commands are a series of steps typically used to make the target(s).


HOW TO INSTALL MAKE ON UBUNTU 
Step 1: Firstly, we will update our operating system by using the below command.:-
sudo apt update

Step 2: Check if make is already installed or not.

make package can be included by default in the Ubuntu operating system, so we need to check if it is already installed before proceeding. We can check it by running the command below on the terminal.:-
make -version

Step 3: Enter the below command to install the make package.:-
sudo apt install make


Step 4: After installing, we will check the make directory on our system in order to use the make package. We may double-check this by executing the below command.:-
ls /usr/bin/make



GENERAL
What are make, Makefiles
When, why and how to use Makefiles
What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them



REQUIREMENTS
Allowed editors: vi, vim, emacs
OS: Ubuntu 20.04 LTS
Version of gcc: 9.3.0
Version of make: GNU Make 4.2.1
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
