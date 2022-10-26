#include <iostream>

using namespace std;

int main()
{
    int poodle; // valid
    int Poodle; // valid and distinct from poodle
    int POODLE; // valid and even more distinct
    //Int terrier; // invalid -- has to be int, not Int
    int my_stars3; // valid
    int _Mystars3; // valid but reserved -- starts with underscore
    //int 4ever; // invalid because starts with a digit
    //int double; // invalid -- double is a C++ keyword
    int begin; // valid -- begin is a Pascal keyword
    int __fools; // valid but reserved -- starts with two underscores
    int the_very_best_variable_i_can_be_version_112; // valid
    //int honky - tonk; // invalid -- no hyphens allowed
}