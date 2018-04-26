#ifndef BC_TX_H
#define BC_TX_H
#include <ostream>
#include<vector>

using namespace std;

class Tx{
public:
	Tx(string sender,string receiver,int amount);
	Tx();
	Tx(const Tx &t1);
	Tx(string sender, string receiver, vector<string> inputTx, int amount,int leftoverAmount);
	string getId();
	string getSender();
	string getReceiver();
	int getAmount();
	string toString();
	vector<string> getInputs();
	int getLeftoverAmt();
	bool compare_Tx(Tx t2);
	friend ostream& operator<<(ostream &strm, const Tx &tx);
	
private:
	string TxId;
	string sender;
	string receiver;
	vector<string> inputTx;
	int amount;
	int leftoverAmt;
};
#endif

