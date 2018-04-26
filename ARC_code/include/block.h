#ifndef SW_BLOCK_H
#define SW_BLOCK_H

#include <vector>
#include "tx.h"
#include <ostream>

class Block{
private:
	string prevHash;
	long nounce;
	vector<Tx> tx_list;		//transaction which goes for this block
	string myHash;		//TODO: Need to Check whether this variable is required
						// This might be usefull while verifying block chain

public:
	//Function to verify the block with given blockChain
	bool VerifyBlock(Block block);
	string generateHash();		//miner Node task, may use utility function to calculate Hash
	void printBlock();	//print the calle block
	string printTxList();//print the transaction in calle block
	void addTx(Tx t1);
	Block(int u);				//to create a genessis block
	Block();					//To create a Normal Block but we have to use set prevhash method after this
	Block(const Block &b);
	Block(string prevHash);		//this will set prevHash from BlockChiain
	string getPrevHash();			//get prevHash from blockchain
	void setPrevHash(string hash);	//set prevHash from tailNode of BlockChain
	string toString();
	string getMyHash();
	vector<Tx> getTxList();
};


#endif

