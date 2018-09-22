#include "models/drop_table.h"
using namespace std;

DropTable::DropTable(vector<string> tokens, bool& ok) {
    type = DROP;
    if(tokens.size() != 3) {
        cout << "Error: bad DROP syntax (DROP TABLE table_name;)" << endl; ok = false;
    } else {
        table_name = tokens[2];
    }
}