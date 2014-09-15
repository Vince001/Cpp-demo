#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

// haha, I can edit it here !!! reside github.com
// modify in branch development

/**
 * @brief Sam card init
 * 
 * @param argc parameter counter
 * @param argv parameter valus array point
 *
 * @retval -1 file open failed.
 * @retval  0 execute OK.
 * @retval  1 other error.
 *
 * @see AdpuCommands_1.0.xls. Page: Demonstration
 *
 * It will do the following process:
 * - Init the Contact Card Reader
 * - Confirm the psam,lsam card(Authenticate) exists.
 * - @see AdpuCommands_1.0.xls. Page: Demonstration
 * - Execute AdpuCommands, eg:
 *     -# SAM_GetAppCode # app code
 *     -# SAM_GetUid     # uid code
 *     -# ...
 *
 *
 * - Will call loadkey();
 *
 * @Todo: U8 terminalKey[24]={0};
 * */
 char * aa()
 {
     static char b;
     return &b;
 }
 
 // test git rebase
 
 // test module
 void Test_XXX();
 
 void printwords()
 {
     char *w1 = "haha";
     char *w2 = "heihei";
     char *w3 = "hehe";
     printf( "%s \n", w1);
     //goto print3;
     
     printf( "%s \n", w3);
     
 print3:
     printf( "run to here \n");
     printf( "%s \n", w2);   
     
 }
 
int main( int argc, char **argv )
{
    int arr[8] = {5};
    int iTmp = 0;
    char cTmp[20] = {0};
    std::fstream file;
    char *pChar = NULL;
    file.open( "haha.txt", std::ios::in | std::ios::out | std::ios::binary );
    file.seekp( 5 );
    std::cout << "file pointer is " << file.tellg() << std::endl;
    file.write( "abc", 3 );
    file.seekg( std::ios::beg );
    std::cout << "ios::beg is " << file.tellg() << std::endl;
    file.read( cTmp, 4 );
    
    if( (pChar = aa()) != NULL )
        cout << "Not NULL." << endl;
    else
        cout << "NULL" << endl;
        
    unsigned long ulong = 0x348573;
    unsigned char uchar[20] = {0x55,0x66,0x77};
    string tmp;
    //tmp << ulong;
   // tmp << uchar;
    cout << "string contact is " << tmp << endl;
    
    //file >> iTmp;
    //std::cout << "the extract is:" << iTmp << std::endl;
    //std::ios::hex << iTmp << std::endl;
    //std::cout << "the remain is:" << file.rdbuf();// << std::endl;
    
    std::cout << "file.tellg() is " << file.tellg() << std::endl;
    
    //file << "insert";
    
    std::cout << "Hello,world." << std::endl;
    // arr[7] = 
    //system( "man cmake" );   ///< linux without "pause" command like Windows
    for(int i=0; i<8; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
    //file.sync();
    
    file.close();
    // std::cin >> arr[6];   ///< wait for user confirm
    
    printwords();
    
    Test_XXX();
}

// The brief template
/**
*
* @brief
* @param
* @retval
*
* */
