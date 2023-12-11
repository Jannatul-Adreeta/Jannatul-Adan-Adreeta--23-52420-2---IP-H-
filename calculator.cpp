#include <iostream>
#include<cstdlib>
using namespace std;
int main ()
{
    while (true)
{
    cout<<"------------------------"<<endl;
    cout<<"Calculator"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Clear screen"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"___________________________"<<endl;
    cout<<"Command: ";

    int switch_var;
    cin>>switch_var;
    switch (switch_var)

    {
        case 1:
            {
                int add_num;
                    cout<<"For addition,"<<endl;
                    cout<<"How many numbers you want to add?"<<endl;
                    cin>>add_num;
                int add_num_arr[add_num];
                for(int j=0;j<add_num;j++)
                    {
                    cout <<"Number "<<j+1<<": ";
                    cin>>add_num_arr[j];
                    }

                int sum=0;
                for (int i=0; i<add_num; i++)
                    {
                    sum+=add_num_arr[i];
                    }

                    cout <<"        (+)"<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<"Answer :  "<<sum<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<""<<endl;
                break;
            }
        case 2:
            {
                float sub_num;
                float minuend, subtrahend;
                    cout<<"For subtraction,"<<endl;
                    cout <<"Enter minuend   : ";
                    cin>>minuend;
                    cout <<"Enter subtrahend: ";
                    cin>>subtrahend;
                    sub_num=minuend-subtrahend;

                    cout <<"                (-)"<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<"Answer           : "<<sub_num<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<""<<endl;


                break;
            }

        case 3:
            {
                int mul_num;
                    cout<<"For multiplication,"<<endl;
                    cout<<"How many numbers you want to multiply?"<<endl;
                    cin>>mul_num;
                int mul_num_arr[mul_num];
                for(int j=0;j<mul_num;j++)
                    {
                    cout <<"Number "<<j+1<<": ";
                    cin>>mul_num_arr[j];
                    }

                int mul=1;
                for (int i=0; i<mul_num; i++)
                    {
                    mul*=mul_num_arr[i];
                    }

                    cout <<"        (x)"<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<"Answer :  "<<mul<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<""<<endl;
                break;
            }
        case 4:
            {
                float answer,dividend,divisor;
                cout<<"For division,"<<endl;
                cout<<"Dividend : ";
                cin>>dividend;
                cout<<"Divisor  : ";
                cin>>divisor;
                answer= dividend/divisor;
                cout <<"        (/)"<<endl;
                cout<<"___________________________"<<endl;
                if (dividend==0)
                {
                        cout<<"Answer :  Undefined"<<endl;
                        cout<<"___________________________"<<endl;
                        cout<<"___________________________"<<endl;
                        cout<<""<<endl;
                }
                else
                {
                    cout<<"Answer :  "<<answer<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<"___________________________"<<endl;
                    cout<<""<<endl;
                }
                    break;
            }
        case 5:
            {
                    system("cls");
                    continue;
            }
        case 6:
        {
          abort();
        }
        default:
            {
            cout<<"Enter a valid input."<<endl;
            cout<<"___________________________"<<endl;
            cout<<"___________________________"<<endl;
            cout<<""<<endl;
            continue;
            }


    }
}
}

