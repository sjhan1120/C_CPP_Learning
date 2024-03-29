#include <iostream>
using namespace std;

typedef struct State
{
    const char *strName;
    int nHealth;
    int nAttactValue;
    float nAttackSpeed;
    int nAttackRange;
    int nDefend;
    int nMoveSpeed;
    int sight;
}Stat;

int main()
{
    Stat marrine = {"Marrine", 45, 5, 0.78, 6, 0, 5};
    Stat zuggling = {"Zuggling", 35, 5, 0.68, 0, 0, 7, 5};

    marrine.sight = 5;

    cout<<"유닛 이름: " << marrine.strName<<"\n";
    cout<<"체력: " << marrine.nHealth<<"\n";
    cout<<"시야범위: " << marrine.sight<<"\n"<<"\n";

    cout<<"유닛 이름: " << zuggling.strName<<"\n";
    cout<<"체력: " << zuggling.nHealth<<"\n";
    cout<<"시야범위: " << zuggling.sight<<"\n";

    return 0;
}