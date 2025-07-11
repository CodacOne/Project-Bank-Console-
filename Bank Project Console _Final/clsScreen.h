#pragma once
#include<iostream>
#include"Global.h"
#include"clsUser.h"
#include"clsDate.h"

using namespace std;


class clsScreen
{
protected:

	static void _DrawScreenHeader(string Title, string SubTitle = "")
	{
		
		cout << "\t\t\t\t-------------------------------------------\n";
		cout << "\n\t\t\t\t\t\t"<<Title;
		if ( SubTitle != "")
		{

			cout << "\n\t\t\t\t\t\t" << SubTitle;
		}
		cout << "\n\n\t\t\t\t-------------------------------------------\n";
		cout << "\n\n\t\t\t\tUserName :" << CurrentUser.UserName;
		cout << "\n\t\t\t\tDate: " <<clsDate::DateToString(clsDate())
			<< "\n\n";
	
	}

	static bool CheckAccessRight(clsUser::enPermissions Permissions)
	{

		if (!CurrentUser.CheckAccessPermissions(Permissions))
		{

			cout << "\t\t\t\t-------------------------------------------\n";
			cout << "\n\t\t\t\t    Access Denied! Contact your Admin.";
			cout << "\n\n\t\t\t\t-------------------------------------------\n";
			return false;
		}

		else
			return true;

	}

};



