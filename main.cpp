#include <iostream>


#include<cstring>

using namespace std;

int main()
{
   string name,name1;

    getline(cin,name);

    for(int i=0;name[i]!='\0';i++){
        if(name[i]!=' '){
            name1+=name[i];
        }
    }

   cout<<name1;
    return 0;
}
