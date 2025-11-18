#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  

   struct Transaction{
     string cust_id;
     string merchant_id;
     string payoutdate;
     string card_type;
     int amount;
   };

   string filename="C:\\Users\\manoj\\Downloads\\transactions.csv";
   ifstream file(filename);

   if(!file.is_open()){
     cout<<"Error opening the file"<<endl;
     return 0;

   }

   string line;
   if(!getline(file,line)){
     cout<<"error reading the header line"<<endl;
     return 0;

   }
   vector<Transaction> trans;

   while(getline(file,line)){

          stringstream ss(line);

          string cid,mid,pdate,ctype,amt;
          Transaction s;

          getline(ss,cid,',');
          getline(ss,mid,',');
          getline(ss,pdate,',');
          getline(ss,ctype,',');
          getline(ss,amt,',');

          s.cust_id=cid;
          s.merchant_id=mid;
          s.payoutdate=pdate;
          s.card_type=ctype;
          s.amount=stoi(amt);

          trans.push_back(s);

   }

//    cout<<trans[0].amount<<" "<<trans[0].card_type<<"\n";








    return 0;
}

