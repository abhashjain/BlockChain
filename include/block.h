#ifndef SW_BLOCK_H
#define SW_BLOCK_H

#include <vector>
#include "tx.h"

class Block{
private:
	string prevHash;
	int nounce;
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
	Block(int u);
	Block();
	void getPrevHash();			//get prevHash from blockchain
};


#endif

