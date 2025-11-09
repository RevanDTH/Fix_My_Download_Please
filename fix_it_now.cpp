

/*
 * Author:
 * RevanDTH
 * 
 * LAST MODIFIED:
 *   2025-11-09
 *
 * VERSION:
 *   0.1.0 (initial prototype)
 *
 * PLATFORM:
 *   Windows
 *   Mac (not at the moment)
 * 
 * DEPENDENCIES:
 *   - <iostream>
 *   - <Windows.h>
 *   - <Psapi.h>
 *   - <list> 
 *   - <map>
 *   - <algorithm>
 *   - <cctype>
 *
 * NOTES:
 *   - Just a small prototype I'm working on 
 */

#include <iostream>
#include <Windows.h>
#include <Psapi.h>
#include <list>
#include <map>
#include <algorithm>
#include <cctype>


int main(int argc, char const *argv[])
{
    using namespace std;

    int userChoice;
    string userLauncher;
    map<string,list<string>> unusedProcesses;
    


    //looks very awfull I know, I need to rewrite that some day
    unusedProcesses.insert({{"steam", {"Discord.exe","Update.exe","chrome.exe","msedge.exe","firefox.exe","Spotify.exe","Netflix.exe","EpicGamesLauncher.exe","EpicWebHelper.exe","EADesktop.exe","Origin.exe","UbisoftConnect.exe","upc.exe","Battle.net.exe","Agent.exe","RiotClientServices.exe","RiotClientCrashHandler.exe","OneDrive.exe","GoogleDriveFS.exe","iCloudDrive.exe","iCloudServices.exe","ApplePhotostreams.exe","Dropbox.exe","NordVPN.exe","NordVpnService.exe","ProtonVPN.exe","ProtonVPNService.exe","Surfshark.exe","SurfsharkService.exe","qbittorrent.exe","uTorrent.exe","JDownloader2.exe","javaw.exe","GeForceNOW.exe","XboxApp.exe","GamingServices.exe","GameBar.exe","Windows10Upgrade.exe","WindowsUpdateBox.exe","AvastUI.exe","AvastSvc.exe","avp.exe","bdagent.exe","vsserv.exe","TrueImageLauncher.exe","AcronisAgent.exe","bzserv.exe","bzbui.exe","MEGAsync.exe"}}});



    cout << "=====================" << endl;
    cout << "Fix My Download Please" << endl;
    cout << "=====================" << endl;
    cout << "(1) Stop consuming processes" << endl;
    cout << "(2) Exit" << endl;

    cout << ": ";
    cin >> userChoice;

    switch (userChoice)
    {
    case 1:
        cin >> userLauncher;

        // normalize launcher name to lowercase
        std::transform(userLauncher.begin(), userLauncher.end(), userLauncher.begin(),
            [](unsigned char c) { return static_cast<char>(std::tolower(c)); });

        if (userLauncher == "steam")
        {
            //TO-DO: Read process identifier and name with psapi
            // TO-DO: stop process with windows.h lib 

        }
        else
        {
            // unrecognized launcher
        }
        break;
    case 2:
        return 0;
    default:
    system("cls");
    cout << "Please enter a valid argument!" << endl;
    cout << "Press ENTER to continue . . ." << endl;
    cin.ignore();
    cin.get();
        break;
    }



    return 0;
}