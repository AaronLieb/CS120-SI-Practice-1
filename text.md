## Lab exercise objectives
1. Explore and use various tools such as: GitHub, VirtualBox, Tuffix, Linux Terminal, and Atom.
1. Write and compile C++ code using:
     1. `cout` stream manipulators 
1. Run and test executable files.

## Getting Started
1. From within Tuffix, open a `Terminal` window and navigate into your `Documents` directory.

    <pre>cd Documents</pre>

1. Make a copy of this Github repository on your computer using the `git` and `clone` commands that you will input to the terminal. The commands take a URL as a parameter to specify where it can get a copy of the repository. You can find the URL by clicking on the green *Clone or download* button at the top right part of this page.
     
    Copy the URL and replace the dummy text shown below. When you hit <kbd>Enter</kbd> it will ask you to provide your Github username and password. Once done, you will have a copy of the repository on your computer.

    <pre>git clone <i>https://github.com/CSUF-CPSC120-STMAY-2020F/labex05....git</i></pre>

1. Navigate into your working folder using the command line. Take note that this will vary per user because the folder name is based on your Github username. The example below assumes the user's username is Tuffy. Replace it with your own folder name. Take note that you can type the first few letters of the folder name and press <kbd>Tab</kbd> so that it auto completes the folder name for you.

    <pre>cd labex05-student-<i>tuffyTitan</i></pre>
  
## Instructions
1. Use the Atom editor to write a C++ program with the source code file name `main.cpp`.  Your program will prompt the user for the height (feet/inches) of two people and will convert the height to centimeters and meters and display the output in a nicely formatted output.

     1. Your program should include a commented title block at the very top of the source code with your name, date, and brief description of the program.
     1. Your program should include a single line comment before each of the below steps with a brief description of the step.
     1. Your program should declare 2 string variables for each persons first name, 2 integer variables for each persons height in feet, and 2 integer variables for each persons height in inches.
     1. Your program should prompt the user for the data for the first person and store the values in the variables previously defined.
     1. Your program should prompt the user for the data for the second person and store the values in the variables previously defined.
     1. Your program should calculate the centimeters and meters for each person and display the output exactly as follows using the below simulated data: 
    ```
    Enter person 1 first name: Stephen
    Enter person 1 feet      : 6
    Enter person 1 inches    : 0
    Enter person 2 first name: Tuffy
    Enter person 2 feet      : 6
    Enter person 2 inches    : 7
    
    Name            Feet Inches Centimeters Meters
    =============== ==== ====== =========== ======
    Stephen         6    0      182.9       1.829 
    Tuffy           6    7      200.7       2.007 
    ```
    
    Note: The math conversion formulas 
    ```
    1 foot = 12 inches
    1 inch = 2.54 centimeters
    100 centimeters = 1 meter
    ```
   
1. Compile the file using the command below. The `-std` option tells the compiler that it will use C++ version 17 standards and the `-o main` option tells the compiler to place the executable code into a file called `main`.

    ```
    clang++ -std=c++17 main.cpp -o main
    ```
1. Run the program using the command below and repeat the steps above until you are satisfied your program output meets the above requirements.

    ```
    ./main
    ```

1. Once you are ready to make your final submission to Github, use the command below to create a file with the output of your program.  After you execute the below command, open the file `output.txt` in your text editor to ensure you see the output of your program.

    ```
    ./main 2>&1 | tee output.txt
    ```

1. Once you are ready to make your final submission to Github, use the command below to create a file with the results of your compile.  After you execute the below command, open the file `compile.txt` in your text editor to ensure you see the results of your compile, which may be blank if you had no compile errors.

    ```
    clang++ -std=c++17 main.cpp -o main 2> compile.txt
    ```

## Submission
Periodically throughout the exam, and when you have completed the exam, **submit the complete repository to Github**.

   <pre>git add .<br>git commit -m "<i>your comment</i>"<br>git push</pre>

In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

   <pre>git config --global user.email "<i>tuffy@csu.fullerton.edu</i>"<br>git config --global user.name "<i>Tuffy Titan</i>"<br>git commit -m "<i>your comment</i>"<br>git push</pre>

When you completed the final Github push, go back into github.com through the browser interface and ensure all your files have been correctly updated.  You should have the following files:
    <pre>main.cpp<br>main<br>output.txt<br>compile.txt</pre>
