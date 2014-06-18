#include <iostream>

// haha, I can edit it here !!! reside github.com
// modify in branch development

/**
 * @func Card_Error SamCard::Init(void)
 * @brief Sam card init
 *
 * It will do the following process:
 * - Init the Contact Card Reader
 * - Confirm the psam,lsam card(Authenticate) exists.  @Ref AdpuCommands_1.0.xls Page: Demonstration
 * - Execute AdpuCommands, eg:
 *     -#SAM_GetAppCode
 *     -#SAM_GetUid
 *     -#...
 *
 *
 * - Will call loadkey();
 *
 * @TODO: U8 terminalKey[24]={0};
 * */
int main( int argc, char **argv )
{
    std::cout << "Hello,world." << std::endl;
    //system( "pause" );
}

