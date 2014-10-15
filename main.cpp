#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cstring>  // for C standard function, eg memcpy()
#include <unistd.h>

//#define U8 (unsigned char)
typedef unsigned char u8;

using namespace std;

void flagRotate();
void progressbar();
void testGotoLable();
void testFileOpt();
int PrintMenu();
int TestArray();


int assignArrayParam( char name[5] );
void progressPercent( unsigned int i );

/**
 * @brief C++ details test.
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
 * - @see AdpuCommands_1.0.xls. Page: Demonstration
 * - Execute AdpuCommands, eg:
 *     -# SAM_GetAppCode # app code
 *     -# SAM_GetUid     # uid code
 *     -# ...
 * - Will call loadkey();
 *
 * @Todo: expend
 * */
int main( int argc, char **argv )
{    
    unsigned int option = 0;
    while( (option = PrintMenu()) != 0 )
    {
        switch( option )
        {
            case 1:
                testGotoLable();
            break;
            case 2:
                flagRotate();
            break;
            case 3:
                progressbar();
            break;
            case 4:
                testFileOpt();
            break;
            case 5:
            	TestArray();
            break;
            default:
            break;
        }
    }
    
    return 0;
}


void flagRotate()
{
    unsigned int cnt = 0;
    
    cout << "Pls input the count of rotate: " << flush;
    cin >> cnt;
    
    for(unsigned int i=0; i < cnt; i++ )
    {
        printf("\r ---------> |");
        fflush(stdout);
        usleep( 200000 );
        printf("\r ---------> /");
        fflush(stdout);
        usleep( 200000 );
        printf("\r ---------> -");
        fflush(stdout);
        usleep( 200000 );
        printf("\r ---------> \\");
        fflush(stdout);
        usleep( 200000 );
    }
    printf("\n");
}

void progressbar()
{
    for(unsigned int i = 1; i < 101; i++ )
    {
    	progressPercent( i );
    	usleep( 100000 );
    }
}

void progressPercent( unsigned int i )
{
//    for( i = 1; i < 101; i++ )
    {
	    printf("\r");
		printf("Progress     [%d%%]", i);
		//printf("\r");
		fflush(stdout);
//		usleep( 150000 );
	}
//	printf("\n");
} 

void testGotoLable()
{
    char w1[10] = "haha";
    char w2[7] = "heihei";
    char w3[10] = "hehe";
    printf( "%s \n", w1);
    //goto print3;

    printf( "%s \n", w3);
     
print3:
    printf( "run to here \n");
    printf( "%s \n", w2);
     
}
 
void testFileOpt()
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
    
    unsigned long ulong = 0x348573;
    unsigned char uchar[20] = {0x55,0x66,0x77};
    
    std::cout << "file.tellg() is " << file.tellg() << std::endl;
    
    std::cout << "Hello,world." << std::endl;
    //system( "man cmake" );   ///< linux without "pause" command like Windows
    for(int i=0; i<8; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
    //file.sync();
    
    file.close();
    // std::cin >> arr[6];   ///< wait for user confirm
}

int PrintMenu()
{
	unsigned int item = 0;

	cout << endl;
	cout << endl;
	cout << "=====================================================>> " << endl;
	cout << "Pls select your option: " << endl;
	cout << " 1,test goto lable."      << endl;
	cout << " 2,test flag rotate "  << endl;
	cout << " 3,test progress percent "  << endl;
	cout << " 4,test C++ file stream operation "  << endl;
	cout << " 5,test function array parameter "  << endl;
//	cout << " 6,test FileTransManager. Download files "  << endl;
//	cout << " 7,test FileTransManager. Upload log and txn files "  << endl;
//	cout << " 8,test FileTransManager. DC Mode ===> Download files "  << endl;
//	cout << " 9,test FileTransManager. DC Mode ===> Upload log and txn files "  << endl;
//	cout << " 10, Test download single file." << endl;
//	cout << " 11, Test download the list of all files." << endl;
	cout << " 0,Exit." << endl;
	cout << "=====================================================<< " << endl;
	cout << "Please select:" << flush;

	cin >> item;

	return item;
}

int TestArray()
{
	char data[5] = {'\0'};
	assignArrayParam( data );

	cout << "get value:" << data << endl;
}

int assignArrayParam( char name[5] )
{
	char katy[4] = { 'k','a','t','y' };
    memcpy( name, katy, 4 );

    return 0;
}

// The brief template
/**
*
* @brief
* @param
* @retval
*
* */
