#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
    int choice;
    cout<<"How many students do you want to enter: ";
    cin>>choice;

    for(int i=0;i<choice;i++)
    {
        cout<<"\nEnter data of student "<<i+1<<endl;

        cout<<"Name: ";
        cin>>arr1[total];

        cout<<"Roll No: ";
        cin>>arr2[total];

        cout<<"Course: ";
        cin>>arr3[total];

        cout<<"Class: ";
        cin>>arr4[total];

        cout<<"Contact: ";
        cin>>arr5[total];

        total++;
    }
}
void show()
{
    if(total == 0)
    {
        cout << "\nNo record found!" << endl;
    }
    else
    {
        cout << "\n=========== Student Records ===========\n";

        for(int i = 0; i < total; i++)
        {
            cout << "\nData of Student " << i + 1 << endl;
            cout << "Name    : " << arr1[i] << endl;
            cout << "Roll No : " << arr2[i] << endl;
            cout << "Course  : " << arr3[i] << endl;
            cout << "Class   : " << arr4[i] << endl;
            cout << "Contact : " << arr5[i] << endl;
            cout << "--------------------------------------" << endl;
        }
    }
}

	void search()
{
    if(total == 0)
    {
        cout << "\nNo record found!" << endl;
        return;
    }

    string roll;
    bool found = false;

    cout << "Enter Roll Number to search: ";
    cin >> roll;

    for(int i = 0; i < total; i++)
    {
        if(arr2[i] == roll)
        {
            found = true;

            cout << "\nStudent Record Found\n";
            cout << "Name    : " << arr1[i] << endl;
            cout << "Roll No : " << arr2[i] << endl;
            cout << "Course  : " << arr3[i] << endl;
            cout << "Class   : " << arr4[i] << endl;
            cout << "Contact : " << arr5[i] << endl;

            break;
        }
    }

    if(found == false)
    {
        cout << "\nRecord not found!" << endl;
    }
}
void update()
{
    if(total == 0)
    {
        cout << "\nNo record found!" << endl;
        return;
    }

    string roll;
    bool found = false;

    cout << "Enter Roll Number of student to update: ";
    cin >> roll;

    for(int i = 0; i < total; i++)
    {
        if(arr2[i] == roll)
        {
            found = true;

            cout << "\nEnter New Details\n";

            cout << "Name: ";
            cin >> arr1[i];

            cout << "Roll No: ";
            cin >> arr2[i];

            cout << "Course: ";
            cin >> arr3[i];

            cout << "Class: ";
            cin >> arr4[i];

            cout << "Contact: ";
            cin >> arr5[i];

            cout << "\nRecord Updated Successfully!" << endl;
            break;
        }
    }

    if(found == false)
    {
        cout << "\nRecord not found!" << endl;
    }
}
void deleterecord()
{
    if(total == 0)
    {
        cout << "\nNo record found!" << endl;
        return;
    }

    string roll;
    bool found = false;

    cout << "Enter Roll Number of student to delete: ";
    cin >> roll;

    for(int i = 0; i < total; i++)
    {
        if(arr2[i] == roll)
        {
            found = true;

            // Shift all records one position to the left
            for(int j = i; j < total - 1; j++)
            {
                arr1[j] = arr1[j + 1];
                arr2[j] = arr2[j + 1];
                arr3[j] = arr3[j + 1];
                arr4[j] = arr4[j + 1];
                arr5[j] = arr5[j + 1];
            }

            total--;

            cout << "\nRecord Deleted Successfully!" << endl;
            break;
        }
    }

    if(found == false)
    {
        cout << "\nRecord not found!" << endl;
    }
}
main(){
	int value;
	while(true){
	
	cout<<"Press 1 to enter data"<<endl;
	cout<<"Press 2 to show data"<<endl;
	cout<<"Press 3 to search data"<<endl;
	cout<<"Press 4 to update data"<<endl;
	cout<<"Press 5 to delete data"<<endl;
	cout<<"Press 6 to exit"<<endl;
	cin>>value;
	switch(value){
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
			break;
	}
}

}
