#include <stdlib.h>

extern const char sHtmlHashrateBodyHigh [] =
	"{ \"type\": \"cpu\", \"subtype\": \"\", \"threads\": {";	

extern const char sHtmlHashrateTableRow [] =
	"\"%u\": { \"10s\":\"%s\", \"60s\":\"%s\", \"15m\":\"%s\"}"; 

extern const char sHtmlHashrateTableRowComma [] =
	"\"%u\": { \"10s\":\"%s\", \"60s\":\"%s\", \"15m\":\"%s\"},"; 


extern const char sHtmlHashrateBodyLow [] =
	"}, \"totals\": { \"10s\":\"%s\", \"60s\":\"%s\", \"15m\":\"%s\" }, \"highest\": \"%s\"}";	


extern const char sHtmlConnectionBodyHigh [] =
	"{ \"pool address\": \"%s\", \"connected\": \"%s\", \"pool-ping\": \"%u ms\", \"net-err\": {";

extern const char sHtmlConnectionTableRow [] =
	"\"%u\": {\"date\": \"%s\", \"error\":\"%s\"}";


extern const char sHtmlConnectionTableRowComma [] =
	"\"%u\": {\"date\": \"%s\", \"error\":\"%s\"},";

extern const char sHtmlConnectionBodyLow [] =
	"}";

extern const char sHtmlResultBodyHigh [] =
	"{ \"Difficulty\": \"%u\", \"GoodResults\": \"%u / %u (%.1f %%)\", \"AvgResultTime\": \"%.1f sec\", \"PoolHashes\": \"%u\", \"Top10\": { \"1\": \"%u\", \"2\": \"%u\", \"3\": \"%u\", \"4\": \"%u\", \"5\": \"%u\", \"6\": \"%u\", \"7\": \"%u\", \"8\": \"%u\", \"9\": \"%u\", \"10\": \"%u\" }, \"ErrorDetails\": { ";

extern const char sHtmlResultTableRow [] =
	"\"%u\": { \"Text\": \"%s\", \"Count\": \"%u\", \"LastSeen\": \"%s\" }";
	
extern const char sHtmlResultTableRowComma [] =
	"\"%u\": { \"Text\": \"%s\", \"Count\": \"%u\", \"LastSeen\": \"%s\" },";

extern const char sHtmlResultBodyLow [] =
	"}";

