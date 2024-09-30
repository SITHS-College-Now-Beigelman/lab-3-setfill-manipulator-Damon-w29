// 9/30/2024
// Lab 3 
// Damon Wu 

#include <iostream>
#include <iomanip>

using namespace std;

// setw is a manipulator that allocates a certain amount of spaces to be filled 
// setfill then fills the amount of spaces allocated by setw with a character of choice, in this case, the hashtag symbol(#), blank spaces could also fill the spaces. 

int main()
{

    cout << setw(78) << setfill('#') << "#" << endl; // fills the first 78 spaces with "#"
  
    cout << "#" <<setw(77) << setfill (' ') << "#"            << endl;       // a hashtag is added first then the next 76 lines are filled with empty spaces then ends off with another hashtag

    cout << "# Ways to access the Task Manager on your Windows computer:" <<setw(19) <<setfill (' ') << "#"  << endl; /*after the first line, fill the remainding 18 spaces 
                                                                                                                     with blanks  and ends off with a # */
    cout << "#"  <<setw(77) << setfill (' ') << "#"                                          << endl; // starts with a # then fills 76 spaces blank with it ending in a #

    cout << "#  Press the key combination Ctrl + Shift + Escape" <<setw(28) <<setfill (' ') << "#"            << endl; // after the text, fill 27 spaces blank then ends with a #

    cout << "#"  <<setw(77) << setfill (' ') << "#"                                          << endl; // starts with a # then fills 76 spaces blank with it ending in a #

    cout << "#   Press the key combination Ctrl + Alt + Delete and select 'Task Manager'" <<setw(3) <<setfill (' ') << "#" << endl; // after the text, fill 2 spaces blank then ends with a #

    cout << "#"  <<setw(77) << setfill (' ') << "#"                                          << endl; // starts with a # then fills 76 spaces blank with it ending in a #

    cout << "#   Type 'Task Manager' in the Windows Start menu search" <<setw(22) <<setfill (' ') << "#"       << endl; // after the text, fill 21 spaces blank then ends with a #

    cout << "#"  <<setw(77) << setfill (' ') << "#"            << endl;        // a hashtag is added first then the next 76 lines are filled with empty spaces then ends off with another hashtag

    cout << setw(78) << setfill('#') << "#" << endl; // fills the first 78 spaces with "#"

// for my own readabilities sake, I added a space in between each line of code. 
    return 0;
}

// ##############################################################################
// #                                                                            #
// # Ways to access the Task Manager on your Windows computer:                  #
// #                                                                            #
// #   Press the key combination Ctrl + Shift + Escape                          #
// #                                                                            #
// #   Press the key combination Ctrl + Alt + Delete and select “Task Manager”  #
// #                                                                            #
// #   Type “Task Manager” in the Windows Start menu search                     #
// #                                                                            #
// ##############################################################################

// [Done] exited with code=0 in 1.604 seconds