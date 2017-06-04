#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
void setup();
int hc(char* key);
struct entry* search(char* key);

struct entry {
   char* key;
   char* name;
};
char* randStr[50] = { "ajJ2rUS36Ds7gCvYhWvRMQ4cM", "lcQQ6", "tG0cd", "BQaye", "vRL61", "BfPAS", "VWqcU", "rNV_x", "m9TVP", "dN3rB", "NEorw", "iE45d", "VFGu_", "zqf7e", "Ayr5H", "y7dVW", "RhaR2", "GUT_3", "mtwGL", "Rz1qA", "BDslj", "DYcHF", "XVI4N", "RknTi", "eraAb", "K7plu", "UPjQy", "uFjK1", "E8Jj9", "viJpE", "y8hmu", "GhPNY", "mEymb", "UAi7z", "g3fke", "spiXC", "sCY6P", "lQ5p2", "yFLZV", "y7NBZ", "JS_81", "pHGgA", "D3BT2", "LYSUb", "UHDeS", "zQQm5", "T4IiC", "ZnCtG", "TBDYx", "k_jNM" };
char* randStrSys[50] = { "sys_ajJ2rUS36Ds7gCvYhWvRMQ4cM", "sys_lcQQ6", "sys_tG0cd", "sys_BQaye", "sys_vRL61", "sys_BfPAS", "sys_VWqcU", "sys_rNV_x", "sys_m9TVP", "sys_dN3rB", "sys_NEorw", "sys_iE45d", "sys_VFGu_", "sys_zqf7e", "sys_Ayr5H", "sys_y7dVW", "sys_RhaR2", "sys_GUT_3", "sys_mtwGL", "sys_Rz1qA", "sys_BDslj", "sys_DYcHF", "sys_XVI4N", "sys_RknTi", "sys_eraAb", "sys_K7plu", "sys_UPjQy", "sys_uFjK1", "sys_E8Jj9", "sys_viJpE", "sys_y8hmu", "sys_GhPNY", "sys_mEymb", "sys_UAi7z", "sys_g3fke", "sys_spiXC", "sys_sCY6P", "sys_lQ5p2", "sys_yFLZV", "sys_y7NBZ", "sys_JS_81", "sys_pHGgA", "sys_D3BT2", "sys_LYSUb", "sys_UHDeS", "sys_zQQm5", "sys_T4IiC", "sys_ZnCtG", "sys_TBDYx", "sys_k_jNM" };


struct entry e0 = {"ajJ2rUS36Ds7gCvYhWvRMQ4cM", "sys_ajJ2rUS36Ds7gCvYhWvRMQ4cM"};
struct entry e1 = {"lcQQ6", "sys_lcQQ6"};
struct entry e2 = {"tG0cd", "sys_tG0cd"};
struct entry e3 = {"BQaye", "sys_BQaye"};
struct entry e4 = {"vRL61", "sys_vRL61"};
struct entry e5 = {"BfPAS", "sys_BfPAS"};
struct entry e6 = {"VWqcU", "sys_VWqcU"};
struct entry e7 = {"rNV_x", "sys_rNV_x"};
struct entry e8 = {"m9TVP", "sys_m9TVP"};
struct entry e9 = {"dN3rB", "sys_dN3rB"};
struct entry e10 = {"NEorw", "sys_NEorw"};
struct entry e11 = {"iE45d", "sys_iE45d"};
struct entry e12 = {"VFGu_", "sys_VFGu_"};
struct entry e13 = {"zqf7e", "sys_zqf7e"};
struct entry e14 = {"Ayr5H", "sys_Ayr5H"};
struct entry e15 = {"y7dVW", "sys_y7dVW"};
struct entry e16 = {"RhaR2", "sys_RhaR2"};
struct entry e17 = {"GUT_3", "sys_GUT_3"};
struct entry e18 = {"mtwGL", "sys_mtwGL"};
struct entry e19 = {"Rz1qA", "sys_Rz1qA"};
struct entry e20 = {"BDslj", "sys_BDslj"};
struct entry e21 = {"DYcHF", "sys_DYcHF"};
struct entry e22 = {"XVI4N", "sys_XVI4N"};
struct entry e23 = {"RknTi", "sys_RknTi"};
struct entry e24 = {"eraAb", "sys_eraAb"};
struct entry e25 = {"K7plu", "sys_K7plu"};
struct entry e26 = {"UPjQy", "sys_UPjQy"};
struct entry e27 = {"uFjK1", "sys_uFjK1"};
struct entry e28 = {"E8Jj9", "sys_E8Jj9"};
struct entry e29 = {"viJpE", "sys_viJpE"};
struct entry e30 = {"y8hmu", "sys_y8hmu"};
struct entry e31 = {"GhPNY", "sys_GhPNY"};
struct entry e32 = {"mEymb", "sys_mEymb"};
struct entry e33 = {"UAi7z", "sys_UAi7z"};
struct entry e34 = {"g3fke", "sys_g3fke"};
struct entry e35 = {"spiXC", "sys_spiXC"};
struct entry e36 = {"sCY6P", "sys_sCY6P"};
struct entry e37 = {"lQ5p2", "sys_lQ5p2"};
struct entry e38 = {"yFLZV", "sys_yFLZV"};
struct entry e39 = {"y7NBZ", "sys_y7NBZ"};
struct entry e40 = {"JS_81", "sys_JS_81"};
struct entry e41 = {"pHGgA", "sys_pHGgA"};
struct entry e42 = {"D3BT2", "sys_D3BT2"};
struct entry e43 = {"LYSUb", "sys_LYSUb"};
struct entry e44 = {"UHDeS", "sys_UHDeS"};
struct entry e45 = {"zQQm5", "sys_zQQm5"};
struct entry e46 = {"T4IiC", "sys_T4IiC"};
struct entry e47 = {"ZnCtG", "sys_ZnCtG"};
struct entry e48 = {"TBDYx", "sys_TBDYx"};
struct entry e49 = {"k_jNM", "sys_k_jNM"};

struct entry* hashTable[SIZE] = {&e0, 
&e1, 
&e2, 
&e3, 
&e4, 
&e5, 
&e6, 
&e7, 
&e8, 
&e9, 
&e10, 
&e11, 
&e12, 
&e13, 
&e14, 
&e15, 
&e16, 
&e17, 
&e18, 
&e19, 
&e20, 
&e21, 
&e22, 
&e23, 
&e24, 
&e25, 
&e26, 
&e27, 
&e28, 
&e29, 
&e30, 
&e31, 
&e32, 
&e33, 
&e34, 
&e35, 
&e36, 
&e37, 
&e38, 
&e39, 
&e40, 
&e41, 
&e42, 
&e43, 
&e44, 
&e45, 
&e46, 
&e47, 
&e48, 
&e49
};

struct entry* search(char* key)
{
	int hindex = hc(key);
	while(hashTable[hindex] != NULL)
	{
		if(strcmp(hashTable[hindex]->key,key)==0)
		{
			printf("Found!\n");
			return hashTable[hindex];
		}
		++hindex;
		hindex = hindex % SIZE;
	}
	return NULL;
}




int hc(char* key)
{
	int c,hashVal=3;
	int keyLen = strlen(key);
	for(c=0;c<keyLen;c++)
	{
		hashVal = 31*hashVal + key[c];
	}
	return hashVal % SIZE;
}


void setup()
{

	int w;
	for(w=0;w<50;w++)
	{
		struct entry *e = malloc(sizeof(struct entry*));   
		char* temp = randStr[w];
		e-> key = temp;
		e-> name = randStrSys[w];
		int indexHash = hc(temp);
		while(hashTable[indexHash] != NULL)
		{
			++indexHash;
			indexHash = indexHash % SIZE;
		}
		hashTable[indexHash] = e;
	}

}
int main(int argc, char const *argv[])
{
	
	//setup();

	struct entry *e1 = search("ajJ2rUS36Ds7gCvYhWvRMQ4cM");
	printf("Result: %s\n", e1->name);
	return 0;
}