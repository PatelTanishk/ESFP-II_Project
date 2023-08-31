#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
class NI;
class CNMS
{
private:
    int Lab_Id[6], No_of_computers, No_of_software_required, No_of_software_installed[6], No_of_system_working[6], Comp_id[60];
    vector<vector<string>> str1{
        {"Vs-Code", "Adobe-Photoshop", "Multisim", "Logisim", "Cisco-Packet-Tracer", "VMware-Workstation", "Cisco-Webex"},
        {"Vs-Code", "VLC-Mediaplayer", "Multisim", "Logisim", "Cisco-Packet-Tracer", "VMware-Workstation", "Microsoft-office"},
        {"Vs-Code", "Adobe-Photoshop", "Turbo-C++", "Logisim", "Cisco-Packet-Tracer", "VMware-Workstation", "Cisco-Webex"},
        {"Sublime-Text-3", "Adobe-Photoshop", "Multisim", "Logisim", "Cisco-Packet-Tracer", "VMware-Workstation", "Cisco-Webex"},
        {"Vs-Code", "Adobe-Photoshop", "Multisim", "Notepad++", "Cisco-Packet-Tracer", "VMware-Workstation", "Cisco-Webex"},
        {"Vs-Code", "Adobe-Photoshop", "Multisim", "Logisim", "Avast-Antivirus", "WinRAR", "Cisco-Webex"}}; //name_of_softwares_requier
    vector<vector<string>> str2{
        {"Vs-Code", "Adobe-Photoshop", "Multisim", "Logisim", "\0", "VMware-Workstation", "Cisco-Webex"},
        {"Vs-Code", "\0", "Multisim", "Logisim", "Cisco-Packet-Tracer", "VMware-Workstation", "\0"},
        {"Vs-Code", "Adobe-Photoshop", "Turbo-c++", "Logisim", "Cisco-Packet-Tracer", "VMware-Workstation", "Cisco-Webex"},
        {"\0", "Adobe-Photoshop", "\0", "Logisim", "Cisco-Packet-Tracer", "VMware-Workstation", "Cisco-Webex"},
        {"Vs-Code", "\0", "Multisim", "Notepad++", "Cisco-Packet-Tracer", "VMware-Workstation", "Cisco-Webex"},
        {"Vs-Code", "Adobe-Photoshop", "Multisim", "Logisim", "Avast-Antivirus", "WinRAR", "Cisco-Webex"}}; //name_of_softwares_Installed
    vector<vector<string>> str3{
        {"Networking-issue", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "Slow-computer", "\0"},
        {"\0", "Slow-computer", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0"},
        {"\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0"},
        {"\0", "\0", "\0", "\0", "\0", "Networking-issue", "\0", "\0", "\0", "\0"},
        {"\0", "Slow-computer", "\0", "\0", "\0", "\0", "Networking-issue", "\0", "\0", "\0"},
        {"\0", "\0", "\0", "\0", "\0", "\0", "\0", "Networking-issue", "\0", "\0"}}; //Problem_type
    vector<vector<string>> str4{
        {"Pending", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "Complete", "\0"},
        {"\0", "Pending", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0"},
        {"\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0", "\0"},
        {"\0", "\0", "\0", "\0", "\0", "Complete", "\0", "\0", "\0", "\0"},
        {"\0", "Complete", "\0", "\0", "\0", "\0", "Pending", "\0", "\0", "\0"},
        {"\0", "\0", "\0", "\0", "\0", "\0", "\0", "Complete", "\0", "\0"}}; //Problem_status
public:
    void A();
    friend void B(CNMS Lab, NI In);
    friend void C(CNMS Lab, NI In);
    void D();
    CNMS()
    {
        No_of_computers = 10;
        No_of_software_required = 7;
        for (int i = 0; i < 6; i++)
        {
            Lab_Id[i] = i + 1;
        }
        //for lab 1
        No_of_software_installed[0] = 6;
        No_of_system_working[0] = 8;
        for (int j = 0; j < 10; j++)
        {
            Comp_id[j] = j + 1;
        }
        //for lab 2
        No_of_software_installed[1] = 5;
        No_of_system_working[1] = 9;
        for (int j = 10; j < 20; j++)
        {
            Comp_id[j] = j + 1;
        }
        //for lab 3
        No_of_software_installed[2] = 7;
        No_of_system_working[2] = 10;
        for (int j = 20; j < 30; j++)
        {
            Comp_id[j] = j + 1;
        }
        //for lab 4
        No_of_software_installed[3] = 5;
        No_of_system_working[3] = 9;
        for (int j = 30; j < 40; j++)
        {
            Comp_id[j] = j + 1;
        }
        //for lab 5
        No_of_software_installed[4] = 6;
        No_of_system_working[4] = 8;
        for (int j = 40; j < 50; j++)
        {
            Comp_id[j] = j + 1;
        }
        //for lab 6
        No_of_software_installed[5] = 7;
        No_of_system_working[5] = 9;
        for (int j = 50; j < 60; j++)
        {
            Comp_id[j] = j + 1;
        }
    }
};
class NI
{
private:
    int In_id[6], In_Contact_no[6];
    string In_name[6] = {"Incharge1", "Incharge2", "Incharge3", "Incharge4", "Incharge5", "Incharge6"}, 
           In_presence_status[6]={"Inactive","Active","Inactive","Active","Active","Active"};

public:
    NI()
    {
        for (int i = 0; i < 6; i++)
        {
            In_id[i] = i + 1;
        }
        for (int j = 0; j < 6; j++)
        {
            In_Contact_no[j] = 1234567890 + j;
        }
    }
    friend void B(CNMS Lab, NI In);
    friend void C(CNMS Lab, NI In);
    void E();
};
void CNMS ::A()
{
    string softwere;
    cout << "Enter which softwere do yo check:-";
    cin >> softwere;
    cout << "Your Entered Softwere installed in :-" << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (str2[i][j].compare(softwere) == 0)
            {
                cout << "LAB-" << Lab_Id[i] << endl;
            }
        }
    }
    cout << endl;
    cout << endl;
}
void B(CNMS Lab, NI In)
{
    int lab;
    cout << "Enter lab id to check require softwere:-";
    cin >> lab;
    for (int j = 0; j < 7; j++)
    {
        if (lab == j + 1)
        {
            cout << "Lab-" << Lab.Lab_Id[j] << " requier " << Lab.No_of_software_required << " softwere:-" << endl;
            for (int i = 0; i < 7; i++)
            {
                cout << "\t" << Lab.str1[j][i] << endl;
            }
            cout << "-----INCHARG DETAIL------" << endl;
            cout << "Incharg Name :- " << In.In_name[j] << endl;
            cout << "Incharg Id :- " << In.In_id[j] << endl;
            cout << "Incharg Contact Number :- " << In.In_Contact_no[j] << endl;
            cout << "Incharg presence status :- " << In.In_presence_status[j] << endl;
            cout << endl;
            cout << endl;
            break;
        }
    }
}
void C(CNMS Lab, NI In)
{
    int problem;
    for (;;)
    {
        cout << endl;
        cout << "1.To check systems which is not working properly in perticuler lab." << endl;
        cout << "2.To chechk problem in systems by it's name." << endl;
        cout << "3.check status of problem in systems." << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice:-";
        cin >> problem;
        switch (problem)
        {
        case 1:
        {
            int p1, p2 = 0;
            cout << "Enter in which lab do you check systems:-";
            cin >> p1;
            for (int j = 0; j < 7; j++)
            {
                if (p1 == j + 1)
                {
                    cout << "In Incharg " << In.In_id[j] << " and Lab " << Lab.Lab_Id[j] << " this systems not working:-" << endl;
                    for (int i = 0; i < 10; i++)
                    {
                        if (Lab.str3[j][i] != "\0")
                        {
                            cout << "Computer " << Lab.Comp_id[i] << " has " << Lab.str3[j][i] << "." << endl;
                        }
                        else
                        {
                            p2++;
                        }
                    }
                    if (p2 == 10)
                    {
                        cout << "In this lab 0 systems are not working." << endl;
                    }
                    break;
                }
            }
        }
        break;
        case 2:
        {
            string problem1;
            cout << "Enter what problem do you check:-";
            cin >> problem1;
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (Lab.str3[i][j] == problem1)
                    {
                        cout << "Compute " << Lab.Comp_id[i * 10 + j] << " has " << Lab.str3[i][j] << "." << endl;
                    }
                }
            }
        }
        break;
        case 3:
        {
            string problem2;
            cout << "Enter to check status of problems in system:-";
            cin >> problem2;
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (Lab.str4[i][j] == problem2)
                    {
                        cout << "Computer " << Lab.Comp_id[i * 10 + j] << " " << Lab.str3[i][j] << " problem is " << Lab.str4[i][j] << "." << endl;
                    }
                }
            }
        }
        break;
        case 4:
        {
            goto x;
        }
        break;
        }
    }
x:;
}
void CNMS ::D()
{
    int lab1;
    cout << "Enter lab id to check installed softwere:-";
    cin >> lab1;
    for (int j = 0; j < 7; j++)
    {
        if (lab1 == j + 1)
        {
            cout << "Lab " << Lab_Id[j] << " have " << No_of_software_installed[j] << " Softwere Installed:-" << endl;
            for (int i = 0; i < 7; i++)
            {
                if (str2[j][i] == "\0")
                {
                    continue;
                }
                cout << str2[j][i] << endl;
            }
            cout << "Lab " << Lab_Id[j] << " requier " << No_of_software_required - No_of_software_installed[j] << " New softwere:-" << endl;
            for (int i = 0; i < 7; i++)
            {
                if (str2[j][i] == "\0")
                {
                    cout << str1[j][i] << endl;
                }
            }
            cout << endl;
            cout << endl;
        }
    }
}
void NI ::E()
{
    cout << "-----INCHARG DETAIL------" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Incharg Name :- " << In_name[i] << endl;
        cout << "Incharg Id :- " << In_id[i] << endl;
        cout << "Incharg Contact Number :- " << In_Contact_no[i] << endl;
        cout << "Incharg presence status :- " << In_presence_status[i] << endl;
        cout << endl;
    }
    cout << endl;
    cout << endl;
}
int main()
{
    CNMS Lab;
    NI In;
    int select;
    for (;;)
    {
        cout << endl;
        cout << "--------------------------Index-------------------------" << endl;
        cout << "1.To check softwere installed or not in lab." << endl;
        cout << "2.To check softwere requier in lab." << endl;
        cout << "3.To check systems problems." << endl;
        cout << "4.To display all list of softwere installed in each lab." << endl;
        cout << "5.Dispaly details of inchargs." << endl;
        cout << "6.Exit." << endl;
        cout << "Enter your choice:";
        cin >> select;
        switch (select)
        {
        case 1:
        {
            Lab.A();
            break;
        }
        case 2:
            B(Lab, In);
            break;
        case 3:
            C(Lab, In);
            break;
        case 4:
            Lab.D();
            break;
        case 5:
            In.E();
            break;
        case 6:
            exit(1);
            break;
        }
    }
    return 0;
}